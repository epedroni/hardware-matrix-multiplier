----------------------------------------------------------------------------------
-- Multiplier accumulator, multiplies two numbers together and adds them to the
-- number currently being output, if reset goes back to outputting 0.
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_SIGNED.ALL;

entity MACC is
	 Generic (M : integer);
    Port ( clk : in  STD_LOGIC;
           en : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  
           A : in  STD_LOGIC_VECTOR (4 downto 0);
           B : in  STD_LOGIC_VECTOR (4 downto 0);
           P : out  STD_LOGIC_VECTOR (9+(M-1) downto 0));
end MACC;

architecture Behavioral of MACC is


signal acc_value : STD_LOGIC_VECTOR (9+(M-1) downto 0); -- Every sum made by the accumulator means
																		  -- one more bit in this signal's width
signal mlt_value : STD_LOGIC_VECTOR (9 downto 0);

begin

accumulator : process is
begin
	wait until rising_edge(clk);
	if (rst = '1') then
		acc_value <= conv_std_logic_vector(0, 9+M);
	elsif (en = '1') then
		acc_value <= acc_value + mlt_value;
	end if;

end process;

P <= acc_value;

mlt_value <= A*B;

end Behavioral;