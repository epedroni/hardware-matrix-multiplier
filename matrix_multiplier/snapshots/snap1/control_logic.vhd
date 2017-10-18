-------------------------------------------------------------------------------------
-- This is the control logic module, containing the FSM, counters and address decoder
-------------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity control_logic is
	 Generic (M, N, H : integer);
    Port ( rst : in  STD_LOGIC;
           nxt : in  STD_LOGIC;
			  clk : in  STD_LOGIC;
			  
           LED_done : out  STD_LOGIC;
           macc_en : out  STD_LOGIC;
           macc_rst : out  STD_LOGIC;
           wr_en : out  STD_LOGIC;
           ROM_A : out  STD_LOGIC_VECTOR (5 downto 0);
           ROM_B : out  STD_LOGIC_VECTOR (5 downto 0);
           RAM : out  STD_LOGIC_VECTOR (5 downto 0));
end control_logic;

architecture Behavioral of control_logic is

-- Component declarations
-- FSM
COMPONENT FSM
	PORT(
		clk : IN std_logic;
		nxt : IN std_logic;
		rst : IN std_logic;
		coe_done : in  STD_LOGIC;
      line_done : in  STD_LOGIC;
		mat_done : in  STD_LOGIC;
 		
		c0_en : out  STD_LOGIC;
		c1_en : out  STD_LOGIC;
		c2_en : out  STD_LOGIC;
		reg_en : out  STD_LOGIC;
		led_done : OUT std_logic;
		macc_en : OUT std_logic;
		macc_rst : OUT std_logic;
		wr_en : OUT std_logic
		);
END COMPONENT;

-- Decoder
COMPONENT addr_logic
	PORT(
		C0 : IN std_logic_vector(2 downto 0);
		C1 : IN std_logic_vector(2 downto 0);
		C2 : IN std_logic_vector(2 downto 0);          
		ROM_A_addr : OUT std_logic_vector(5 downto 0);
		ROM_B_addr : OUT std_logic_vector(5 downto 0);
		RAM_addr : OUT std_logic_vector(5 downto 0)
		);
END COMPONENT;

-- Generic counter
COMPONENT counter
	Generic (L : integer);
	PORT(
		clk : IN std_logic;
		en : IN std_logic;
		rst : IN std_logic;          
		C : OUT std_logic_vector(2 downto 0));
END COMPONENT;

-- Signals
signal count0, count1, count2 : std_logic_vector(2 downto 0);

signal reg_in, reg_out : std_logic_vector(5 downto 0);
signal reg_en : std_logic;

signal coe_done_sig, line_done_sig, mat_done_sig : std_logic;

signal c0_en_sig, c1_en_sig, c2_en_sig : std_logic;

signal macc_rst_sig: std_logic;


begin

	-- Component instantiations
	-- FSM
	Inst_FSM: FSM PORT MAP(
		clk => clk,
		nxt => nxt,
		rst => rst,
		coe_done => coe_done_sig,
		line_done => line_done_sig,
		mat_done => mat_done_sig,
		
		c0_en => c0_en_sig,
		c1_en => c1_en_sig,
		c2_en => c2_en_sig,
		reg_en => reg_en,
		led_done => LED_done,
		macc_en => macc_en,
		macc_rst => macc_rst_sig,
		wr_en => wr_en
	);

	-- Address decoder
	Inst_addr_logic: addr_logic PORT MAP(
		C0 => count0,
		C1 => count1,
		C2 => count2,
		ROM_A_addr => ROM_A,
		ROM_B_addr => ROM_B,
		RAM_addr => reg_in
	);


	-- Counters
	-- This counter cycles for every coefficient
	Inst_counter_0: counter 
	Generic map(L => M)
	PORT MAP(
		clk => clk,
		en => c0_en_sig,
		rst => rst,
		C => count0
	);
	
	-- This counter cycles for every line of the final matrix
	Inst_counter_1: counter 
	Generic map(L => H)
	PORT MAP(
		clk => clk,
		en => c1_en_sig,
		rst => rst,
		C => count1
	);
	
	-- This counter cycles once throughout the operation of the system
	Inst_counter_2: counter 
	Generic map(L => N)
	PORT MAP(
		clk => clk,
		en => c2_en_sig,
		rst => rst,
		C => count2
	);

	-- This register makes sure the RAM address only changes right before the store state,
	-- so that the current coefficient is output when the system is on state hold
	reg : process is
	begin

		wait until rising_edge(clk);
		
		if(rst = '1') then
			reg_out <= "000000";
		elsif(reg_en = '1') then
			reg_out <= reg_in;
		end if;

	end process;
	
	-- This or gate makes sure that when the user resets the system, the macc gets reset as well
	macc_rst <= macc_rst_sig or rst;
	
	-- These comparators are used to provide the FSM with information about what's happening in the counters
	coe_done_sig <= '1' when count0 >= M-1 else '0';
	line_done_sig <= '1' when count1 >= H-1 else '0';
	mat_done_sig <= '1' when reg_out >= ((8*(N-1))+H-1) else '0';

	RAM <= reg_out;

end Behavioral;
