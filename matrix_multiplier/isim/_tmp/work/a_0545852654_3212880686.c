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
unsigned char ieee_p_3620187407_sub_3956668372_3620187407(char *, char *, char *, int );


static void work_a_0545852654_3212880686_p_0(char *t0)
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

LAB0:    t1 = (t0 + 3196U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng0);

LAB6:    t2 = (t0 + 3888);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 3888);
    *((int *)t5) = 0;
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 548U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2132U);
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

LAB8:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 5916);
    t7 = (t0 + 3964);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 6U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1956U);
    t5 = *((char **)t2);
    t2 = (t0 + 3964);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 6U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_0545852654_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(159, ng0);

LAB3:    t1 = (t0 + 2044U);
    t2 = *((char **)t1);
    t1 = (t0 + 4000);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3896);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0545852654_3212880686_p_2(char *t0)
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

LAB0:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t1 = (t0 + 5836U);
    t3 = (4 - 1);
    t4 = ieee_p_3620187407_sub_3956668372_3620187407(IEEE_P_3620187407, t2, t1, t3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 4036);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 3904);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 4036);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0545852654_3212880686_p_3(char *t0)
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

LAB0:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 1516U);
    t2 = *((char **)t1);
    t1 = (t0 + 5836U);
    t3 = (3 - 1);
    t4 = ieee_p_3620187407_sub_3956668372_3620187407(IEEE_P_3620187407, t2, t1, t3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 4072);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 3912);
    *((int *)t15) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 4072);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0545852654_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    int t5;
    int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 2044U);
    t2 = *((char **)t1);
    t1 = (t0 + 5852U);
    t3 = (5 - 1);
    t4 = (8 * t3);
    t5 = (t4 + 3);
    t6 = (t5 - 1);
    t7 = ieee_p_3620187407_sub_3956668372_3620187407(IEEE_P_3620187407, t2, t1, t6);
    if (t7 != 0)
        goto LAB3;

LAB4:
LAB5:    t13 = (t0 + 4108);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 3920);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 4108);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_0545852654_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0545852654_3212880686_p_0,(void *)work_a_0545852654_3212880686_p_1,(void *)work_a_0545852654_3212880686_p_2,(void *)work_a_0545852654_3212880686_p_3,(void *)work_a_0545852654_3212880686_p_4};
	xsi_register_didat("work_a_0545852654_3212880686", "isim/_tmp/work/a_0545852654_3212880686.didat");
	xsi_register_executes(pe);
}
