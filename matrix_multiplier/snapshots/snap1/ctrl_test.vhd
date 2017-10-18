--------------------------------------------------------------------------------
-- 
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.all;
USE ieee.numeric_std.ALL;
 
ENTITY ctrl_test IS
END ctrl_test;
 
ARCHITECTURE behavior OF ctrl_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT control_logic
	 Generic (M, N, H : integer);
    PORT(
         rst : IN  std_logic;
         nxt : IN  std_logic;
         clk : IN  std_logic;
         LED_done : OUT  std_logic;
         macc_en : OUT  std_logic;
         macc_rst : OUT  std_logic;
         wr_en : OUT  std_logic;
         ROM_A : OUT  std_logic_vector(5 downto 0);
         ROM_B : OUT  std_logic_vector(5 downto 0);
         RAM : OUT  std_logic_vector(5 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '1';
   signal nxt : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal LED_done : std_logic;
   signal macc_en : std_logic;
   signal macc_rst : std_logic;
   signal wr_en : std_logic;
   signal ROM_A : std_logic_vector(5 downto 0);
   signal ROM_B : std_logic_vector(5 downto 0);
   signal RAM : std_logic_vector(5 downto 0);

   -- Clock period definitions
   constant clk_period : time := 100ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: control_logic
			Generic map(M => 3, N => 5, H => 4)
			PORT MAP (
          rst => rst,
          nxt => nxt,
          clk => clk,
          LED_done => LED_done,
          macc_en => macc_en,
          macc_rst => macc_rst,
          wr_en => wr_en,
          ROM_A => ROM_A,
          ROM_B => ROM_B,
          RAM => RAM
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '1';
		wait for clk_period/2;
		clk <= '0';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      wait for clk_period*2;
		rst <= '0';
		wait for clk_period*2;
      -- insert stimulus here 
		
		for i in 0 to 20 loop
			nxt <= '1';
			wait for clk_period;
			nxt <= '0';
			wait for clk_period*8;
		end loop;

      wait;
   end process;


END;
