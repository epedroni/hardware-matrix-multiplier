
-- VHDL Instantiation Created from source file addr_logic.vhd -- 10:49:40 03/04/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT addr_logic
	PORT(
		C0 : IN std_logic_vector(5 downto 0);
		C1 : IN std_logic_vector(5 downto 0);
		C2 : IN std_logic_vector(5 downto 0);          
		ROM_A_addr : OUT std_logic_vector(5 downto 0);
		ROM_B_addr : OUT std_logic_vector(5 downto 0);
		RAM_addr : OUT std_logic_vector(5 downto 0)
		);
	END COMPONENT;

	Inst_addr_logic: addr_logic PORT MAP(
		C0 => ,
		C1 => ,
		C2 => ,
		ROM_A_addr => ,
		ROM_B_addr => ,
		RAM_addr => 
	);


