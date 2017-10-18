----------------------------------------------------------------------------------
-- This is a basic counter, it counts up to a generic value L and returns to 0
-- upon reaching its limit.
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity counter is
	 Generic (L : integer);
    Port ( clk : in  STD_LOGIC;
           en : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           C : out  STD_LOGIC_VECTOR (2 downto 0));
end counter;

architecture Behavioral of counter is

signal current_value : std_logic_vector (2 downto 0);

begin

count : process is
begin
	wait until rising_edge(clk);
	
	if(rst = '1') then
		current_value <= "000";
		
	elsif (en = '1') then
		if (current_value >= L-1) then
			current_value <= "000";
		else
			current_value <= current_value + 1;
		end if;
	end if;

end process;	

C <= current_value;

end Behavioral;

