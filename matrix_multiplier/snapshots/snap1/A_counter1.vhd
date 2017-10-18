----------------------------------------------------------------------------------
-- This counter counts from a to b, upon reaching b it goes back to a, can be
-- synchronously reset back to a as well.
-- It also outputs a signal when it reaches b.
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

---- Uncomment the following library declaration if instantiating
---- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity A_counter1 is
	 Generic (c : integer := 3); -- H in general terms
    Port ( clk : in  STD_LOGIC;
           en : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  a : in  STD_LOGIC_VECTOR (5 downto 0);
			  b : in  STD_LOGIC_VECTOR (5 downto 0);
			  
			  finish : out std_logic;
			  output : out STD_LOGIC_VECTOR (5 downto 0));
end A_counter1;

architecture Behavioral of A_counter1 is

signal current_value : STD_LOGIC_VECTOR (5 downto 0);
signal h_loop : std_logic_vector (2 downto 0);

begin

count : process is
begin
	wait until rising_edge(clk);
	
	if (rst = '1') then
		current_value <= a;
		h_loop <= "000";
		
   elsif (en = '1') then
	
		if(h_loop >= c) then
			h_loop <= "000";
			current_value <= a;
		elsif(current_value >= b) then
			current_value <= a;
			h_loop <= h_loop + 1;
		else
			current_value <= current_value + 1;
		end if;
		
	end if;
		
end process;

output <= current_value;	
finish <= '1' when h_loop = c else
			 '0';

end Behavioral;

