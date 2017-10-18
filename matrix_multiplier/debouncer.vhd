----------------------------------------------------------------------------------
-- Standard Xilinx debouncer, to clean up the button signals.
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity debouncer is
	Port ( clk : in STD_LOGIC;
			 Sig : in STD_LOGIC;
			 Deb_Sig : out STD_LOGIC);
end debouncer;

architecture Behavioral of debouncer is

	signal Q0, Q1, Q2 : STD_LOGIC;

begin

process (clk) is
begin

	if (clk'event and clk = '1') then
		Q0 <= not(Sig);
		Q1 <= Q0;
		Q2 <= Q1;
	end if;
end process;

Deb_Sig <= Q0 and Q1 and (not Q2);

end Behavioral;