----------------------------------------------------------------------------------
-- 
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

---- Uncomment the following library declaration if instantiating
---- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity A_counter2 is
	 Generic (d : integer := 8; -- N in general terms
				 e : integer := 6); -- M in general terms
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           en : in  STD_LOGIC;
			  
			  done : out  STD_LOGIC; -- this goes out to the control logic, it signals that the calculations are finished
			  a : out  STD_LOGIC_VECTOR (5 downto 0);
			  b : out  STD_LOGIC_VECTOR (5 downto 0));
end A_counter2;

architecture Behavioral of A_counter2 is

signal current_value : std_logic_vector (2 downto 0);

begin

count : process is
begin
	
	wait until rising_edge(clk);
	if (rst = '1') then
		current_value <= "000";
	elsif (en = '1') then
		current_value <= current_value + 1;
	end if;

end process count;

a <= to_stdlogicvector(e, 6);

--b <= (e * current_value) + (e - 1);

done <= '1' when current_value >= d else
		  '0';

end Behavioral;

