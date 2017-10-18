----------------------------------------------------------------------------------
-- This is the finite state machine, contains 4 states
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity FSM is
    Port ( clk : in  STD_LOGIC;
           nxt : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  coe_done : in  STD_LOGIC;
           line_done : in  STD_LOGIC;
			  mat_done : in  STD_LOGIC;
			  
           c0_en : out  STD_LOGIC;
			  c1_en : out  STD_LOGIC;
			  c2_en : out  STD_LOGIC;
			  reg_en : out  STD_LOGIC;
           led_done : out  STD_LOGIC;
           macc_en : out  STD_LOGIC;
			  macc_rst : out  STD_LOGIC;
           wr_en : out  STD_LOGIC);
end FSM;

architecture Behavioral of FSM is

-- This type defines the possible states of the machine
type state is (hold,
					calc,
					store,
					final);

-- This signal carries the current state of the machine
signal current_state : state;

begin

state_transitions : process is
begin

	wait until rising_edge(clk);
	if (rst = '1') then
		current_state <= hold;
	else
		case current_state is
		
			-- State transition condition for all states
			-- State hold - here the system waits for the user to press next; if the whole 
			--					 matrix has been calculated, this will automatically skip to the final state
			when hold =>
				if(mat_done = '1') then
					current_state <= final;
				elsif (nxt = '1') then
					current_state <= calc;
				end if;
		 
			-- State calc - the system will stay here for as long as it takes to calculate the next coefficient.
			--					 Once that is done, it will proceed to the store state.
			when calc =>
				if (coe_done = '1') then
					current_state <= store;
				end if;			
		 
			-- State store - here the system spends one clock cycle writing the current coefficient to the RAM
			when store =>
				current_state <= hold;
		
			-- State final - this is the final state; once the system finishes calculating the matrix values, 
			--					  it will remain in this state until the user presses reset.
			when final =>
			
		 end case;
	 end if;
end process state_transitions;



-- Control outputs

c0_en <= '1' when current_state = calc else '0';

c1_en <= '1' when current_state = store else '0';

c2_en<= '1' when current_state = store and line_done = '1' else '0';

led_done <= '1' when current_state = final else '0';

macc_en <= '1' when current_state = calc else '0';

wr_en <= '1' when current_state = store else '0';

macc_rst <= '1' when current_state = hold else '0';

reg_en <= '1' when current_state = calc and coe_done = '1' else '0';

end Behavioral;
