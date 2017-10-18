----------------------------------------------------------------------------------
-- Top module, describes the overall system
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity top_module is
	 Generic (M : integer := 4; 
				 N : integer := 5; 
				 H : integer := 3);
    Port ( clk : in  STD_LOGIC;
           nxt : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           leds : out  STD_LOGIC_VECTOR (14 downto 0);
			  led_done : out  STD_LOGIC);
end top_module;

architecture Behavioral of top_module is

-- Component declarations
-- Debouncer
COMPONENT debouncer
	PORT(
		clk : IN std_logic;
		Sig : IN std_logic;          
		Deb_Sig : OUT std_logic
		);
END COMPONENT;

-- Control logic
COMPONENT control_logic
	Generic (M, N, H : integer);
	PORT(
		rst : IN std_logic;
		nxt : IN std_logic;
		clk : IN std_logic;          
		LED_done : OUT std_logic;
		macc_en : OUT std_logic;
		macc_rst : OUT std_logic;
		wr_en : OUT std_logic;
		ROM_A : OUT std_logic_vector(5 downto 0);
		ROM_B : OUT std_logic_vector(5 downto 0);
		RAM : OUT std_logic_vector(5 downto 0)
		);
	END COMPONENT;

-- MACC
COMPONENT MACC
	Generic(M : integer);
	PORT(
		clk : IN std_logic;
		en : IN std_logic;
		rst : IN std_logic;
		A : IN std_logic_vector(4 downto 0);
		B : IN std_logic_vector(4 downto 0);          
		P : OUT std_logic_vector(9+(M-1) downto 0)
		);
END COMPONENT;

-- ROM A
COMPONENT ROM_A 
	PORT (
		A: IN std_logic_VECTOR(5 downto 0);
		SPO: OUT std_logic_VECTOR(4 downto 0)
		);
END COMPONENT;

-- ROM B
COMPONENT ROM_B 
	PORT (
		A: IN std_logic_VECTOR(5 downto 0);
		SPO: OUT std_logic_VECTOR(4 downto 0)
		);
END COMPONENT;

-- RAM
COMPONENT RAM_module
	PORT (
		A: IN std_logic_VECTOR(5 downto 0);
		CLK: IN std_logic;
		D: IN std_logic_VECTOR(16 downto 0);
		WE: IN std_logic;
		SPO: OUT std_logic_VECTOR(16 downto 0)
		);
END COMPONENT;


-- Internal signals
-- Debounced button presses
signal db_nxt, db_rst : std_logic;

-- MACC control signals
signal macc_en_sig, macc_rst_sig : std_logic;
signal macc_out : std_logic_vector(9+(M-1) downto 0);

-- Memory control signals
signal wr_en_sig : std_logic;
signal ROM_A_addr, ROM_B_addr, RAM_addr : std_logic_vector(5 downto 0);
signal ROM_A_out, ROM_B_out : std_logic_vector(4 downto 0);
signal RAM_in, RAM_out : std_logic_vector(16 downto 0);

begin
-- Component instantiations
-- Debouncers
	Inst_debouncer_rst: debouncer PORT MAP(
		clk => clk,
		Sig => rst,
		Deb_Sig => db_rst
	);
	
	Inst_debouncer_nxt: debouncer PORT MAP(
		clk => clk,
		Sig => nxt,
		Deb_Sig => db_nxt
	);
	
-- Control Logic
	Inst_control_logic: control_logic 
	Generic map(M => M, N => N, H => H)
	PORT MAP(
		rst => db_rst,
		nxt => db_nxt,
		clk => clk,
		LED_done => led_done,
		macc_en => macc_en_sig,
		macc_rst => macc_rst_sig,
		wr_en => wr_en_sig,
		ROM_A => ROM_A_addr,
		ROM_B => ROM_B_addr,
		RAM => RAM_addr
	);

-- MACC
	Inst_MACC: MACC 
	Generic map(M => M)
	PORT MAP(
		clk => clk,
		en => macc_en_sig,
		rst => macc_rst_sig,
		A => ROM_A_out,
		B => ROM_B_out,
		P => macc_out
	);	
	
-- ROMs
	Inst_ROM_A: ROM_A PORT MAP(
		A => ROM_A_addr,
		SPO => ROM_A_out
	);
	
	Inst_ROM_B: ROM_B PORT MAP(
		A => ROM_B_addr,
		SPO => ROM_B_out
	);
	
-- RAM
	Inst_RAM: RAM_module PORT MAP(
		A => RAM_addr,
		CLK => clk,
		D => RAM_in,
		WE => wr_en_sig,
		SPO => RAM_out
	);
	
-- This pads the RAM input with 1s or 0s in order for the two's complement to work correctly
-- The reason why the RAM is outrageously wide is because the following code can't be written
-- a more specific way, and for the second line to work, the width needs to be greater than 15 (9+6)
	RAM_in(9+(M-1) downto 0) <= macc_out;
	RAM_in(16 downto 9+M) <= (others => '1') when macc_out(9+(M-1)) = '1' else
									 (others => '0') when macc_out(9+(M-1)) = '0';							 
	leds <= RAM_out(14 downto 0);
	
end Behavioral;
