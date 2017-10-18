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
static const char *ng0 = "D:/Xtemp/matrix_multiplier/top_module.vhd";



static void work_a_2460971885_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(170, ng0);

LAB3:    t1 = (t0 + 1340U);
    t2 = *((char **)t1);
    t1 = (t0 + 3340);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 13U);
    xsi_driver_first_trans_delta(t1, 4U, 13U, 0LL);

LAB2:    t7 = (t0 + 3280);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2460971885_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 1340U);
    t2 = *((char **)t1);
    t3 = (4 - 1);
    t4 = (9 + t3);
    t5 = (t4 - 12);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB3;

LAB4:    t18 = (t0 + 1340U);
    t19 = *((char **)t18);
    t20 = (4 - 1);
    t21 = (9 + t20);
    t22 = (t21 - 12);
    t23 = (t22 * -1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t18 = (t19 + t25);
    t26 = *((unsigned char *)t18);
    t27 = (t26 == (unsigned char)2);
    if (t27 != 0)
        goto LAB5;

LAB6:
LAB2:    t35 = (t0 + 3288);
    *((int *)t35) = 1;

LAB1:    return;
LAB3:    t11 = xsi_get_transient_memory(4U);
    memset(t11, 0, 4U);
    t12 = t11;
    memset(t12, (unsigned char)3, 4U);
    t13 = (t0 + 3376);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t11, 4U);
    xsi_driver_first_trans_delta(t13, 0U, 4U, 0LL);
    goto LAB2;

LAB5:    t28 = xsi_get_transient_memory(4U);
    memset(t28, 0, 4U);
    t29 = t28;
    memset(t29, (unsigned char)2, 4U);
    t30 = (t0 + 3376);
    t31 = (t30 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    memcpy(t34, t28, 4U);
    xsi_driver_first_trans_delta(t30, 0U, 4U, 0LL);
    goto LAB2;

}

static void work_a_2460971885_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(173, ng0);

LAB3:    t1 = (t0 + 2044U);
    t2 = *((char **)t1);
    t3 = (16 - 14);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3412);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 3296);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2460971885_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2460971885_3212880686_p_0,(void *)work_a_2460971885_3212880686_p_1,(void *)work_a_2460971885_3212880686_p_2};
	xsi_register_didat("work_a_2460971885_3212880686", "isim/_tmp/work/a_2460971885_3212880686.didat");
	xsi_register_executes(pe);
}
