--------------------------------------------------------------------------------
-- 
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.all;
USE ieee.numeric_std.ALL;
 
ENTITY addr_test IS
END addr_test;
 
ARCHITECTURE behavior OF addr_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT addr_logic
    PORT(
         C0 : IN  std_logic_vector(5 downto 0);
         C1 : IN  std_logic_vector(5 downto 0);
         C2 : IN  std_logic_vector(5 downto 0);
         ROM_A_addr : OUT  std_logic_vector(5 downto 0);
         ROM_B_addr : OUT  std_logic_vector(5 downto 0);
         RAM_addr : OUT  std_logic_vector(5 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal C0 : std_logic_vector(5 downto 0) := (others => '0');
   signal C1 : std_logic_vector(5 downto 0) := (others => '0');
   signal C2 : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal ROM_A_addr : std_logic_vector(5 downto 0);
   signal ROM_B_addr : std_logic_vector(5 downto 0);
   signal RAM_addr : std_logic_vector(5 downto 0);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: addr_logic PORT MAP (
          C0 => C0,
          C1 => C1,
          C2 => C2,
          ROM_A_addr => ROM_A_addr,
          ROM_B_addr => ROM_B_addr,
          RAM_addr => RAM_addr
        );
 
   -- Stimulus process
   stim_proc: process
   begin		
      wait for 100ns;

      -- insert stimulus here 

		C0 <= "000000";
		C1 <= "000000";
		C2 <= "000000";
		
		wait for 100ns;
		
		C0 <= "000001";
		C1 <= "000000";
		C2 <= "000000";
		
		wait for 100ns;
		
		C0 <= "000010";
		C1 <= "000000";
		C2 <= "000001";
		
		
      wait;
   end process;

END;
