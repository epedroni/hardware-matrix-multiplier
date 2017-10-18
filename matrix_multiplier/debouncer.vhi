
-- VHDL Instantiation Created from source file debouncer.vhd -- 11:41:51 03/04/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT debouncer
	PORT(
		clk : IN std_logic;
		Sig : IN std_logic;          
		Deb_Sig : OUT std_logic
		);
	END COMPONENT;

	Inst_debouncer: debouncer PORT MAP(
		clk => ,
		Sig => ,
		Deb_Sig => 
	);


