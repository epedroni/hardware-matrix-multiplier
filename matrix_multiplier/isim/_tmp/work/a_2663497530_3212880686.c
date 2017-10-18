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
static const char *ng0 = "D:/Xtemp/matrix_multiplier/MACC.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;
extern char *IEEE_P_0774719531;

char *ieee_p_0774719531_sub_4215150914_774719531(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_4215186851_774719531(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_2592010699(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_2213602152_3499444699(char *, char *, int , int );


static void work_a_2663497530_3212880686_p_0(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 1836U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);

LAB6:    t2 = (t0 + 2272);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 2272);
    *((int *)t5) = 0;
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 724U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 636U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 528U);
    t4 = ieee_p_2592010699_sub_1744673427_2592010699(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(34, ng0);
    t8 = (9 + 4);
    t2 = ieee_p_3499444699_sub_2213602152_3499444699(IEEE_P_3499444699, t7, 0, t8);
    t5 = (t0 + 2332);
    t9 = (t5 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 13U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1076U);
    t5 = *((char **)t2);
    t2 = (t0 + 3452U);
    t9 = (t0 + 1164U);
    t10 = *((char **)t9);
    t9 = (t0 + 3468U);
    t11 = ieee_p_0774719531_sub_4215186851_774719531(IEEE_P_0774719531, t7, t5, t2, t10, t9);
    t12 = (t0 + 2332);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t11, 13U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

}

static void work_a_2663497530_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(41, ng0);

LAB3:    t1 = (t0 + 1076U);
    t2 = *((char **)t1);
    t1 = (t0 + 2368);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 13U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 2280);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2663497530_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(43, ng0);

LAB3:    t2 = (t0 + 812U);
    t3 = *((char **)t2);
    t2 = (t0 + 3404U);
    t4 = (t0 + 900U);
    t5 = *((char **)t4);
    t4 = (t0 + 3420U);
    t6 = ieee_p_0774719531_sub_4215150914_774719531(IEEE_P_0774719531, t1, t3, t2, t5, t4);
    t7 = (t0 + 2404);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 10U);
    xsi_driver_first_trans_fast(t7);

LAB2:    t12 = (t0 + 2288);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2663497530_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2663497530_3212880686_p_0,(void *)work_a_2663497530_3212880686_p_1,(void *)work_a_2663497530_3212880686_p_2};
	xsi_register_didat("work_a_2663497530_3212880686", "isim/_tmp/work/a_2663497530_3212880686.didat");
	xsi_register_executes(pe);
}
