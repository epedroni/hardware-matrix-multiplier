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
static const char *ng0 = "D:/Xtemp/matrix_multiplier/counter.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_2592010699(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_3993698172_3620187407(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_4185486039_3620187407(char *, char *, char *, char *, int );


static void work_a_4000226436_3212880686_p_0(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);

LAB6:    t2 = (t0 + 2208);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 2208);
    *((int *)t5) = 0;
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 724U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1164U);
    t5 = *((char **)t2);
    t2 = (t0 + 3400U);
    t8 = (t0 + 900U);
    t9 = *((char **)t8);
    t8 = (t0 + 3368U);
    t10 = ieee_p_3620187407_sub_3993698172_3620187407(IEEE_P_3620187407, t5, t2, t9, t8);
    t4 = t10;

LAB13:    if (t4 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1164U);
    t3 = *((char **)t2);
    t2 = (t0 + 3400U);
    t5 = ieee_p_3620187407_sub_4185486039_3620187407(IEEE_P_3620187407, t17, t3, t2, 1);
    t8 = (t0 + 2268);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 6U);
    xsi_driver_first_trans_fast(t8);

LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 528U);
    t4 = ieee_p_2592010699_sub_1744673427_2592010699(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(38, ng0);
    t11 = (t0 + 812U);
    t12 = *((char **)t11);
    t11 = (t0 + 2268);
    t13 = (t11 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 6U);
    xsi_driver_first_trans_fast(t11);
    goto LAB9;

LAB11:    t4 = (unsigned char)1;
    goto LAB13;

}

static void work_a_4000226436_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(45, ng0);

LAB3:    t1 = (t0 + 1164U);
    t2 = *((char **)t1);
    t1 = (t0 + 2304);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 2216);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4000226436_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
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
    char *t16;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1164U);
    t2 = *((char **)t1);
    t1 = (t0 + 3400U);
    t3 = (t0 + 900U);
    t4 = *((char **)t3);
    t3 = (t0 + 3368U);
    t5 = ieee_p_3620187407_sub_3993698172_3620187407(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 2340);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 2224);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 2340);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_4000226436_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4000226436_3212880686_p_0,(void *)work_a_4000226436_3212880686_p_1,(void *)work_a_4000226436_3212880686_p_2};
	xsi_register_didat("work_a_4000226436_3212880686", "isim/_tmp/work/a_4000226436_3212880686.didat");
	xsi_register_executes(pe);
}
