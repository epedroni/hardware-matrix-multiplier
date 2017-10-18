--------------------------------------------------------------------------------
--     This file is owned and controlled by Xilinx and must be used           --
--     solely for design, simulation, implementation and creation of          --
--     design files limited to Xilinx devices or technologies. Use            --
--     with non-Xilinx devices or technologies is expressly prohibited        --
--     and immediately terminates your license.                               --
--                                                                            --
--     XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS"          --
--     SOLELY FOR USE IN DEVELOPING PROGRAMS AND SOLUTIONS FOR                --
--     XILINX DEVICES.  BY PROVIDING THIS DESIGN, CODE, OR INFORMATION        --
--     AS ONE POSSIBLE IMPLEMENTATION OF THIS FEATURE, APPLICATION            --
--     OR STANDARD, XILINX IS MAKING NO REPRESENTATION THAT THIS              --
--     IMPLEMENTATION IS FREE FROM ANY CLAIMS OF INFRINGEMENT,                --
--     AND YOU ARE RESPONSIBLE FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE       --
--     FOR YOUR IMPLEMENTATION.  XILINX EXPRESSLY DISCLAIMS ANY               --
--     WARRANTY WHATSOEVER WITH RESPECT TO THE ADEQUACY OF THE                --
--     IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OR         --
--     REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE FROM CLAIMS OF        --
--     INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS        --
--     FOR A PARTICULAR PURPOSE.                                              --
--                                                                            --
--     Xilinx products are not intended for use in life support               --
--     appliances, devices, or systems. Use in such applications are          --
--     expressly prohibited.                                                  --
--                                                                            --
--     (c) Copyright 1995-2007 Xilinx, Inc.                                   --
--     All rights reserved.                                                   --
--------------------------------------------------------------------------------
-- You must compile the wrapper file RAM_module.vhd when simulating
-- the core, RAM_module. When compiling the wrapper file, be sure to
-- reference the XilinxCoreLib VHDL simulation library. For detailed
-- instructions, please refer to the "CORE Generator Help".

-- The synthesis directives "translate_off/translate_on" specified
-- below are supported by Xilinx, Mentor Graphics and Synplicity
-- synthesis tools. Ensure they are correct for your synthesis tool(s).

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
-- synthesis translate_off
Library XilinxCoreLib;
-- synthesis translate_on
ENTITY RAM_module IS
	port (
	A: IN std_logic_VECTOR(5 downto 0);
	CLK: IN std_logic;
	D: IN std_logic_VECTOR(16 downto 0);
	WE: IN std_logic;
	SPO: OUT std_logic_VECTOR(16 downto 0));
END RAM_module;

ARCHITECTURE RAM_module_a OF RAM_module IS
-- synthesis translate_off
component wrapped_RAM_module
	port (
	A: IN std_logic_VECTOR(5 downto 0);
	CLK: IN std_logic;
	D: IN std_logic_VECTOR(16 downto 0);
	WE: IN std_logic;
	SPO: OUT std_logic_VECTOR(16 downto 0));
end component;

-- Configuration specification 
	for all : wrapped_RAM_module use entity XilinxCoreLib.C_DIST_MEM_V7_1(behavioral)
		generic map(
			c_qualify_we => 0,
			c_mem_type => 1,
			c_has_qdpo_rst => 0,
			c_has_qspo => 0,
			c_has_qspo_rst => 0,
			c_has_dpo => 0,
			c_has_qdpo_clk => 0,
			c_has_d => 1,
			c_qce_joined => 0,
			c_width => 17,
			c_reg_a_d_inputs => 0,
			c_latency => 0,
			c_has_spo => 1,
			c_has_we => 1,
			c_depth => 64,
			c_has_i_ce => 0,
			c_default_data_radix => 1,
			c_default_data => "0",
			c_has_dpra => 0,
			c_has_clk => 1,
			c_enable_rlocs => 1,
			c_generate_mif => 1,
			c_has_qspo_ce => 0,
			c_addr_width => 6,
			c_has_qdpo_srst => 0,
			c_mux_type => 0,
			c_has_spra => 0,
			c_has_qdpo => 0,
			c_reg_dpra_input => 0,
			c_mem_init_file => "RAM_module.mif",
			c_has_qspo_srst => 0,
			c_has_rd_en => 0,
			c_read_mif => 0,
			c_sync_enable => 0,
			c_has_qdpo_ce => 0);
-- synthesis translate_on
BEGIN
-- synthesis translate_off
U0 : wrapped_RAM_module
		port map (
			A => A,
			CLK => CLK,
			D => D,
			WE => WE,
			SPO => SPO);
-- synthesis translate_on

END RAM_module_a;

