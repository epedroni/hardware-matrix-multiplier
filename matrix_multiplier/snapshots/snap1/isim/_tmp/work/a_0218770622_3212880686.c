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
unsigned char ieee_p_3620187407_sub_3956668372_3620187407(char *, char *, char *, int );
char *ieee_p_3620187407_sub_4185486039_3620187407(char *, char *, char *, char *, int );


static void work_a_0218770622_3212880686_p_0(char *t0)
{
    char t16[16];
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
    int t12;
    unsigned char t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 1748U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);

LAB6:    t2 = (t0 + 2184);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 2184);
    *((int *)t5) = 0;
    xsi_set_current_line(29, ng0);
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

LAB8:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3436);
    t7 = (t0 + 2244);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 3U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2280);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 988U);
    t5 = *((char **)t2);
    t2 = (t0 + 3404U);
    t12 = (2 - 1);
    t13 = ieee_p_3620187407_sub_3956668372_3620187407(IEEE_P_3620187407, t5, t2, t12);
    if (t13 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 988U);
    t3 = *((char **)t2);
    t2 = (t0 + 3404U);
    t5 = ieee_p_3620187407_sub_4185486039_3620187407(IEEE_P_3620187407, t16, t3, t2, 1);
    t7 = (t0 + 2244);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t5, 3U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2280);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 3439);
    t9 = (t0 + 2244);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t14 = (t11 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2280);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t7 = (t5 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

}

static void work_a_0218770622_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(44, ng0);

LAB3:    t1 = (t0 + 988U);
    t2 = *((char **)t1);
    t1 = (t0 + 2316);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 3U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 2192);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0218770622_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(46, ng0);

LAB3:    t1 = (t0 + 1076U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2352);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 2200);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0218770622_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0218770622_3212880686_p_0,(void *)work_a_0218770622_3212880686_p_1,(void *)work_a_0218770622_3212880686_p_2};
	xsi_register_didat("work_a_0218770622_3212880686", "isim/_tmp/work/a_0218770622_3212880686.didat");
	xsi_register_executes(pe);
}
