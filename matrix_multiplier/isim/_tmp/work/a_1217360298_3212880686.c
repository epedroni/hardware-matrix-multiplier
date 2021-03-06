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

/* This file is designed for use with ISim build 0xef153c89 */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Xtemp/matrix_multiplier/control_logic.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_2592010699(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2545490612_2592010699(char *, unsigned char , unsigned char );
unsigned char ieee_p_3620187407_sub_3956668372_3620187407(char *, char *, char *, int );
unsigned char ieee_std_logic_unsigned_equal_stdv_stdv(char *, char *, char *, char *, char *);
unsigned char ieee_std_logic_unsigned_greater_stdv_stdv(char *, char *, char *, char *, char *);


static void work_a_1217360298_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 3284U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(152, ng0);

LAB6:    t2 = (t0 + 4104);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 4104);
    *((int *)t5) = 0;
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 548U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1868U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 704U);
    t4 = ieee_p_2592010699_sub_1744673427_2592010699(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 6213);
    t7 = (t0 + 4188);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 6U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1692U);
    t5 = *((char **)t2);
    t2 = (t0 + 4188);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 6U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_1217360298_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(163, ng0);

LAB3:    t1 = (t0 + 2484U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 548U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_2592010699(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 4224);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 4112);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1217360298_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t1 = (t0 + 6132U);
    t3 = (6 - 1);
    t4 = ieee_p_3620187407_sub_3956668372_3620187407(IEEE_P_3620187407, t2, t1, t3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 4260);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 4120);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 4260);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1217360298_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 1516U);
    t2 = *((char **)t1);
    t1 = (t0 + 6132U);
    t3 = (7 - 1);
    t4 = ieee_p_3620187407_sub_3956668372_3620187407(IEEE_P_3620187407, t2, t1, t3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 4296);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 4128);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 4296);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1217360298_3212880686_p_4(char *t0)
{
    char t6[16];
    char t15[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 1604U);
    t3 = *((char **)t2);
    t2 = (t0 + 6132U);
    t4 = (t0 + 6219);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 2;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (2 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t24 = (t0 + 4332);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 4136);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t17 = (t0 + 4332);
    t20 = (t17 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    goto LAB2;

LAB5:    t8 = (t0 + 1780U);
    t12 = *((char **)t8);
    t8 = (t0 + 6148U);
    t13 = (t0 + 6222);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 5;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t18 = (5 - 0);
    t10 = (t18 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t19 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t12, t8, t13, t15);
    t1 = t19;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1217360298_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(170, ng0);

LAB3:    t1 = (t0 + 1780U);
    t2 = *((char **)t1);
    t1 = (t0 + 4368);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4144);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1217360298_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1217360298_3212880686_p_0,(void *)work_a_1217360298_3212880686_p_1,(void *)work_a_1217360298_3212880686_p_2,(void *)work_a_1217360298_3212880686_p_3,(void *)work_a_1217360298_3212880686_p_4,(void *)work_a_1217360298_3212880686_p_5};
	xsi_register_didat("work_a_1217360298_3212880686", "isim/_tmp/work/a_1217360298_3212880686.didat");
	xsi_register_executes(pe);
}
