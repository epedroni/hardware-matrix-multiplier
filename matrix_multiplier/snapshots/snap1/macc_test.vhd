--------------------------------------------------------------------------------
-- 
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_signed.all;
USE ieee.numeric_std.ALL;
 
ENTITY macc_test IS
END macc_test;
 
ARCHITECTURE behavior OF macc_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MACC
    PORT(
         clk : IN  std_logic;
         en : IN  std_logic;
         rst : IN  std_logic;
         A : IN  std_logic_vector(4 downto 0);
         B : IN  std_logic_vector(4 downto 0);
         P : OUT  std_logic_vector(11 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal en : std_logic := '0';
   signal rst : std_logic := '1';
   signal A : std_logic_vector(4 downto 0) := (others => '0');
   signal B : std_logic_vector(4 downto 0) := (others => '0');

 	--Outputs
   signal P : std_logic_vector(11 downto 0);

   -- Clock period definitions
   constant clk_period : time := 100ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MACC PORT MAP (
          clk => clk,
          en => en,
          rst => rst,
          A => A,
          B => B,
          P => P
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
      -- hold reset state for 100ms.
      wait for clk_period*2;
		rst <= '0';
		
		wait for clk_period*2;
      -- insert stimulus here 
		en <= '1';
		
		A <= "11110";
		B <= "00011";
      wait;
   end process;

END;
