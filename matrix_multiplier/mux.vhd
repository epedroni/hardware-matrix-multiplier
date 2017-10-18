----------------------------------------------------------------------------------
-- This module takes in the counter values and outputs 
-- the addresses for all 3 memories.
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity addr_logic is
    Port ( C0 : in  STD_LOGIC_VECTOR (2 downto 0);
           C1 : in  STD_LOGIC_VECTOR (2 downto 0);
           C2 : in  STD_LOGIC_VECTOR (2 downto 0);
           ROM_A_addr : out  STD_LOGIC_VECTOR (5 downto 0);
           ROM_B_addr : out  STD_LOGIC_VECTOR (5 downto 0);
           RAM_addr : out  STD_LOGIC_VECTOR (5 downto 0));
end addr_logic;

architecture Behavioral of addr_logic is

begin

-- These adders are responsible for the address decoding
ROM_A_addr <= C0 + conv_std_logic_vector(8*conv_integer(unsigned(C2)), 6);
ROM_B_addr <= C1 + conv_std_logic_vector(8*conv_integer(unsigned(C0)), 6);
RAM_addr <= C1 + conv_std_logic_vector(8*conv_integer(unsigned(C2)), 6);


end Behavioral;
