
-- VHDL Instantiation Created from source file MACC.vhd -- 11:47:01 03/04/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT MACC
	PORT(
		clk : IN std_logic;
		en : IN std_logic;
		rst : IN std_logic;
		A : IN std_logic_vector(5 downto 0);
		B : IN std_logic_vector(5 downto 0);          
		P : OUT std_logic_vector(10 downto 0)
		);
	END COMPONENT;

	Inst_MACC: MACC PORT MAP(
		clk => ,
		en => ,
		rst => ,
		A => ,
		B => ,
		P => 
	);


