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
static const char *ng0 = "D:/Xtemp/matrix_multiplier/A_counter1.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_2592010699(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2594955190_3620187407(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_3956668372_3620187407(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_3993698172_3620187407(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_4185486039_3620187407(char *, char *, char *, char *, int );


static void work_a_0998649244_3212880686_p_0(char *t0)
{
    char t15[16];
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
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 1924U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);

LAB6:    t2 = (t0 + 2360);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 2360);
    *((int *)t5) = 0;
    xsi_set_current_line(39, ng0);
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

LAB8:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 812U);
    t5 = *((char **)t2);
    t2 = (t0 + 2420);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 6U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3689);
    t5 = (t0 + 2456);
    t7 = (t5 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1252U);
    t5 = *((char **)t2);
    t2 = (t0 + 3652U);
    t11 = ieee_p_3620187407_sub_3956668372_3620187407(IEEE_P_3620187407, t5, t2, 3);
    if (t11 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 1164U);
    t3 = *((char **)t2);
    t2 = (t0 + 3636U);
    t5 = (t0 + 900U);
    t7 = *((char **)t5);
    t5 = (t0 + 3604U);
    t4 = ieee_p_3620187407_sub_3993698172_3620187407(IEEE_P_3620187407, t3, t2, t7, t5);
    if (t4 != 0)
        goto LAB16;

LAB17:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1164U);
    t3 = *((char **)t2);
    t2 = (t0 + 3636U);
    t5 = ieee_p_3620187407_sub_4185486039_3620187407(IEEE_P_3620187407, t15, t3, t2, 1);
    t7 = (t0 + 2420);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t5, 6U);
    xsi_driver_first_trans_fast(t7);

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(44, ng0);
    t7 = (t0 + 3692);
    t9 = (t0 + 2456);
    t10 = (t9 + 32U);
    t12 = *((char **)t10);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 3U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 812U);
    t3 = *((char **)t2);
    t2 = (t0 + 2420);
    t5 = (t2 + 32U);
    t7 = *((char **)t5);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 6U);
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB16:    xsi_set_current_line(47, ng0);
    t8 = (t0 + 812U);
    t9 = *((char **)t8);
    t8 = (t0 + 2420);
    t10 = (t8 + 32U);
    t12 = *((char **)t10);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 6U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1252U);
    t3 = *((char **)t2);
    t2 = (t0 + 3652U);
    t5 = ieee_p_3620187407_sub_4185486039_3620187407(IEEE_P_3620187407, t15, t3, t2, 1);
    t7 = (t0 + 2456);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t12 = *((char **)t10);
    memcpy(t12, t5, 3U);
    xsi_driver_first_trans_fast(t7);
    goto LAB14;

}

static void work_a_0998649244_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(56, ng0);

LAB3:    t1 = (t0 + 1164U);
    t2 = *((char **)t1);
    t1 = (t0 + 2492);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 2368);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0998649244_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
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

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1252U);
    t2 = *((char **)t1);
    t1 = (t0 + 3652U);
    t3 = ieee_p_3620187407_sub_2594955190_3620187407(IEEE_P_3620187407, t2, t1, 3);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 2528);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 2376);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t4 = (t0 + 2528);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_0998649244_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0998649244_3212880686_p_0,(void *)work_a_0998649244_3212880686_p_1,(void *)work_a_0998649244_3212880686_p_2};
	xsi_register_didat("work_a_0998649244_3212880686", "isim/_tmp/work/a_0998649244_3212880686.didat");
	xsi_register_executes(pe);
}
