
-- VHDL Instantiation Created from source file FSM.vhd -- 10:49:41 03/04/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT FSM
	PORT(
		clk : IN std_logic;
		nxt : IN std_logic;
		rst : IN std_logic;
		coe_done : IN std_logic;
		mat_done : IN std_logic;          
		count_en : OUT std_logic;
		led_done : OUT std_logic;
		macc_en : OUT std_logic;
		macc_rst : OUT std_logic;
		wr_en : OUT std_logic
		);
	END COMPONENT;

	Inst_FSM: FSM PORT MAP(
		clk => ,
		nxt => ,
		rst => ,
		coe_done => ,
		mat_done => ,
		count_en => ,
		led_done => ,
		macc_en => ,
		macc_rst => ,
		wr_en => 
	);


