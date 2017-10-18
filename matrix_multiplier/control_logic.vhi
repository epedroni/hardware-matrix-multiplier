
-- VHDL Instantiation Created from source file control_logic.vhd -- 14:41:14 03/06/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT control_logic
	PORT(
		rst : IN std_logic;
		nxt : IN std_logic;
		clk : IN std_logic;          
		LED_done : OUT std_logic;
		macc_en : OUT std_logic;
		macc_rst : OUT std_logic;
		wr_en : OUT std_logic;
		ROM_A : OUT std_logic_vector(5 downto 0);
		ROM_B : OUT std_logic_vector(5 downto 0);
		RAM : OUT std_logic_vector(5 downto 0)
		);
	END COMPONENT;

	Inst_control_logic: control_logic PORT MAP(
		rst => ,
		nxt => ,
		clk => ,
		LED_done => ,
		macc_en => ,
		macc_rst => ,
		wr_en => ,
		ROM_A => ,
		ROM_B => ,
		RAM => 
	);


