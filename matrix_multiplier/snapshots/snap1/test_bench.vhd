--------------------------------------------------------------------------------
-- Self-checking testbench
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.all;
--use IEEE.STD_LOGIC_ARITH.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY test_bench IS
	Generic (M : integer := 4;
				N : integer := 5;
				H : integer := 3);
END test_bench;
 
ARCHITECTURE behavior OF test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT top_module
	 Generic (M, N, H : integer);
    PORT(
         clk : IN  std_logic;
         nxt : IN  std_logic;
         rst : IN  std_logic;
         leds : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    
--	type test_vector is record
--		coefficient : std_logic_vector(11 downto 0);
--	end record;
	
	type test_vector_array is array 
		(natural range <>) of integer;
		
	constant test_vector : test_vector_array := (
		  104,      6,      7, 
		  -61,   -256,     67, 
		  102,    204,   -120, 
		   52,     41,    -42,
		  318,   -120,    155);
		 
   --Inputs
   signal clk : std_logic := '0';
   signal nxt : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal leds : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 100ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: top_module
		Generic map(M => M, N => N, H => H)
		  PORT MAP (
          clk => clk,
          nxt => nxt,
          rst => rst,
          leds => leds
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
		variable i : integer;
   begin		
		
		-- Do a global reset
		wait for clk_period;
		rst <= '1';
      wait for clk_period*4;
		rst <= '0';
		wait for clk_period*2;


      -- Press NXT as many times as the number of values in the resulting matrix,
		-- and every time compare the calculated value against the predicted value in the record table.
		for i in 0 to ((H*N)-1) loop
			nxt <= '1';
			wait for clk_period*4;
			nxt <= '0';
			wait for clk_period*6;
			
			assert (signed(leds(9+(M-1) downto 0)) = test_vector(i))
			report "Index " & integer'image(i) & " is incorrect, should be: " & integer'image(test_vector(i)) & ", actual value is: "& integer'image(to_integer(signed(leds(9+(M-1) downto 0)))) & "."
			severity error;
			
		end loop;
		
      wait;
   end process;

END;
