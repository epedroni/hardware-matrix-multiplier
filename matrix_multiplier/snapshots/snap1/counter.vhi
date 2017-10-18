
-- VHDL Instantiation Created from source file counter.vhd -- 11:18:15 03/04/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT counter
	PORT(
		clk : IN std_logic;
		en : IN std_logic;
		rst : IN std_logic;          
		C : OUT std_logic_vector(5 downto 0);
		cycle : OUT std_logic
		);
	END COMPONENT;

	Inst_counter: counter PORT MAP(
		clk => ,
		en => ,
		rst => ,
		C => ,
		cycle => 
	);


