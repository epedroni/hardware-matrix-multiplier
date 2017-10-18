/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *IEEE_P_1242562249;
char *XILINXCORELIB_P_0347517956;
char *STD_TEXTIO;
char *XILINXCORELIB_P_1333587386;
char *XILINXCORELIB_P_1788885688;
char *XILINXCORELIB_P_0968838406;
char *XILINXCORELIB_P_2786861097;
char *IEEE_P_0774719531;

int isim_run(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    ieee_p_0774719531_init();
    std_textio_init();
    work_a_1473390551_3212880686_init();
    work_a_3643194780_3212880686_init();
    work_a_0478041034_3212880686_init();
    work_a_0159862796_3212880686_init();
    work_a_0214451849_3212880686_init();
    work_a_0138754619_3212880686_init();
    work_a_0545852654_3212880686_init();
    work_a_2663497530_3212880686_init();
    xilinxcorelib_p_0347517956_init();
    xilinxcorelib_p_1333587386_init();
    xilinxcorelib_p_1788885688_init();
    xilinxcorelib_p_0968838406_init();
    xilinxcorelib_p_2786861097_init();
    xilinxcorelib_a_4083553966_3212880686_init();
    work_a_2905732894_4223491913_init();
    xilinxcorelib_a_3986655644_3212880686_init();
    work_a_2495400923_4194033936_init();
    xilinxcorelib_a_2189780701_3212880686_init();
    work_a_1611463533_2045698245_init();
    work_a_2460971885_3212880686_init();
    work_a_2578365841_2372691052_init();


    xsi_register_tops("work_a_2578365841_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    XILINXCORELIB_P_0347517956 = xsi_get_engine_memory("xilinxcorelib_p_0347517956");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    XILINXCORELIB_P_1333587386 = xsi_get_engine_memory("xilinxcorelib_p_1333587386");
    XILINXCORELIB_P_1788885688 = xsi_get_engine_memory("xilinxcorelib_p_1788885688");
    XILINXCORELIB_P_0968838406 = xsi_get_engine_memory("xilinxcorelib_p_0968838406");
    XILINXCORELIB_P_2786861097 = xsi_get_engine_memory("xilinxcorelib_p_2786861097");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");

    return xsi_run_simulation(argc, argv);

}
