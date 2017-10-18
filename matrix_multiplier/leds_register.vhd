----------------------------------------------------------------------------------
-- This register makes sure the RAM receives the correct address
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ram_addr_register is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           en : in  STD_LOGIC;
           D : in  STD_LOGIC_VECTOR (5 downto 0);
           Q : out  STD_LOGIC_VECTOR (5 downto 0));
end ram_addr_register;

architecture Behavioral of ram_addr_register is

signal output : std_logic_vector(5 downto 0);

begin

reg : process is
begin

	wait until rising_edge(clk);
	
	if(rst = '1') then
		output <= "000000";
	elsif(en = '1') then
		output <= D;
	end if;

end process;

Q <= output;

end Behavioral;

