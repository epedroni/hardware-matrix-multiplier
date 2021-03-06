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
static const char *ng0 = "Function range_check ended without a return statement";
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
static const char *ng3 = "Function int_2_std_logic_vector ended without a return statement";
static const char *ng4 = "Function func_rloc ended without a return statement";
static const char *ng5 = "Function flop_rloc ended without a return statement";
static const char *ng6 = "Function tbuf_rloc ended without a return statement";
static const char *ng7 = "Function form_huset ended without a return statement";
static const char *ng8 = "Function eval ended without a return statement";
static const char *ng9 = "Function rat ended without a return statement";

char *xilinxcorelib_p_0347517956_sub_198243544_347517956(char *, char *, int );
unsigned char xilinxcorelib_p_0347517956_sub_3217642252_347517956(char *, unsigned char );
char *xilinxcorelib_p_0347517956_sub_422448596_347517956(char *, char *, int );
char *xilinxcorelib_p_0347517956_sub_963525686_347517956(char *, char *, char *, char *);


int xilinxcorelib_p_0347517956_sub_1016476178_347517956(char *t1, int t2, int t3, int t4)
{
    char t6[16];
    int t0;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;

LAB0:    t7 = (t6 + 4U);
    *((int *)t7) = t2;
    t8 = (t6 + 8U);
    *((int *)t8) = t3;
    t9 = (t6 + 12U);
    *((int *)t9) = t4;
    t10 = (t2 > t4);
    if (t10 != 0)
        goto LAB2;

LAB4:    t10 = (t2 < t3);
    if (t10 != 0)
        goto LAB6;

LAB7:    t0 = t2;

LAB1:    return t0;
LAB2:    t0 = t4;
    goto LAB1;

LAB3:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    t0 = t3;
    goto LAB1;

LAB8:    goto LAB3;

LAB9:    goto LAB3;

}

char *xilinxcorelib_p_0347517956_sub_2119828665_347517956(char *t1, char *t2, int t3, int t4)
{
    char t5[360];
    char t6[16];
    char t9[16];
    char t33[8];
    char t39[8];
    char t45[8];
    char t51[16];
    char *t0;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    int t48;
    int t49;
    unsigned int t50;
    int t52;
    char *t53;
    char *t54;
    int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    int t75;
    int t76;
    int t77;
    int t78;
    char *t79;
    char *t80;
    int t81;
    unsigned char t82;
    char *t83;
    int t84;
    int t85;
    int t86;
    char *t87;
    unsigned char t88;

LAB0:    t7 = (t1 + 5524);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 16;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (16 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t5 + 4U);
    t14 = ((STD_STANDARD) + 708);
    t15 = (t11 + 48U);
    *((char **)t15) = t14;
    t16 = xsi_get_memory(16U);
    t17 = (t11 + 32U);
    *((char **)t17) = t16;
    memcpy(t16, t7, 16U);
    t18 = (t11 + 36U);
    *((char **)t18) = t9;
    t19 = (t11 + 44U);
    *((unsigned int *)t19) = 16U;
    t20 = (t11 + 76U);
    *((char **)t20) = t16;
    t21 = (t11 + 68U);
    *((int *)t21) = 0;
    t22 = (t11 + 72U);
    t23 = (t9 + 12U);
    t13 = *((unsigned int *)t23);
    t24 = (t13 - 1);
    *((int *)t22) = t24;
    t25 = (t11 + 64U);
    t27 = (16U > 2147483644);
    if (t27 == 1)
        goto LAB2;

LAB3:    t28 = (16U + 3);
    t29 = (t28 / 16);
    t26 = t29;

LAB4:    *((unsigned int *)t25) = t26;
    t30 = (t5 + 84U);
    t31 = ((STD_STANDARD) + 256);
    t32 = (t30 + 48U);
    *((char **)t32) = t31;
    t34 = (t30 + 32U);
    *((char **)t34) = t33;
    *((int *)t33) = t3;
    t35 = (t30 + 44U);
    *((unsigned int *)t35) = 4U;
    t36 = (t5 + 148U);
    t37 = ((STD_STANDARD) + 256);
    t38 = (t36 + 48U);
    *((char **)t38) = t37;
    t40 = (t36 + 32U);
    *((char **)t40) = t39;
    *((int *)t39) = 0;
    t41 = (t36 + 44U);
    *((unsigned int *)t41) = 4U;
    t42 = (t5 + 212U);
    t43 = ((STD_STANDARD) + 256);
    t44 = (t42 + 48U);
    *((char **)t44) = t43;
    t46 = (t42 + 32U);
    *((char **)t46) = t45;
    *((int *)t45) = 1;
    t47 = (t42 + 44U);
    *((unsigned int *)t47) = 4U;
    t48 = (t4 / 4);
    t49 = (t48 - 1);
    t50 = (t49 * 1);
    t50 = (t50 + 1);
    t50 = (t50 * 1U);
    t52 = (t4 / 4);
    t53 = (t51 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 1;
    t54 = (t53 + 4U);
    *((int *)t54) = t52;
    t54 = (t53 + 8U);
    *((int *)t54) = 1;
    t55 = (t52 - 1);
    t56 = (t55 * 1);
    t56 = (t56 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t56;
    t54 = (t5 + 276U);
    t57 = ((STD_STANDARD) + 708);
    t58 = (t54 + 48U);
    *((char **)t58) = t57;
    t59 = xsi_get_memory(t50);
    t60 = (t54 + 32U);
    *((char **)t60) = t59;
    xsi_type_set_default_value(t57, t59, t51);
    t61 = (t54 + 36U);
    *((char **)t61) = t51;
    t62 = (t54 + 44U);
    *((unsigned int *)t62) = t50;
    t63 = (t54 + 76U);
    *((char **)t63) = t59;
    t64 = (t54 + 68U);
    *((int *)t64) = 0;
    t65 = (t54 + 72U);
    t66 = (t51 + 12U);
    t56 = *((unsigned int *)t66);
    t67 = (t56 - 1);
    *((int *)t65) = t67;
    t68 = (t54 + 64U);
    t70 = (t50 > 2147483644);
    if (t70 == 1)
        goto LAB5;

LAB6:    t71 = (t50 + 3);
    t72 = (t71 / 16);
    t69 = t72;

LAB7:    *((unsigned int *)t68) = t69;
    t73 = (t6 + 4U);
    *((int *)t73) = t3;
    t74 = (t6 + 8U);
    *((int *)t74) = t4;
    t75 = (t4 - 1);
    t76 = t75;
    t77 = 0;

LAB8:    if (t76 >= t77)
        goto LAB9;

LAB11:    t7 = (t54 + 32U);
    t8 = *((char **)t7);
    t7 = (t51 + 12U);
    t13 = *((unsigned int *)t7);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t8, t13);
    t10 = (t51 + 0U);
    t12 = *((int *)t10);
    t14 = (t51 + 4U);
    t24 = *((int *)t14);
    t15 = (t51 + 8U);
    t48 = *((int *)t15);
    t16 = (t2 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t12;
    t17 = (t16 + 4U);
    *((int *)t17) = t24;
    t17 = (t16 + 8U);
    *((int *)t17) = t48;
    t49 = (t24 - t12);
    t26 = (t49 * t48);
    t26 = (t26 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t26;

LAB1:    t7 = (t54 + 44);
    t12 = *((int *)t7);
    t8 = (t54 + 76U);
    t10 = *((char **)t8);
    xsi_put_memory(t12, t10);
    t14 = (t11 + 44);
    t24 = *((int *)t14);
    t15 = (t11 + 76U);
    t16 = *((char **)t15);
    xsi_put_memory(t24, t16);
    return t0;
LAB2:    t26 = 2147483647;
    goto LAB4;

LAB5:    t69 = 2147483647;
    goto LAB7;

LAB9:    t78 = xsi_vhdl_pow(2, t76);
    t79 = (t30 + 32U);
    t80 = *((char **)t79);
    t81 = *((int *)t80);
    t82 = (t78 <= t81);
    if (t82 != 0)
        goto LAB12;

LAB14:
LAB13:    t12 = xsi_vhdl_mod(t76, 4);
    t82 = (t12 == 0);
    if (t82 != 0)
        goto LAB15;

LAB17:
LAB16:
LAB10:    t12 = (t76 + -1);
    t76 = t12;
    goto LAB8;

LAB12:    t79 = (t30 + 32U);
    t83 = *((char **)t79);
    t84 = *((int *)t83);
    t85 = xsi_vhdl_pow(2, t76);
    t86 = (t84 - t85);
    t79 = (t30 + 32U);
    t87 = *((char **)t79);
    t79 = (t87 + 0);
    *((int *)t79) = t86;
    t7 = (t36 + 32U);
    t8 = *((char **)t7);
    t12 = *((int *)t8);
    t24 = xsi_vhdl_mod(t76, 4);
    t48 = xsi_vhdl_pow(2, t24);
    t49 = (t12 + t48);
    t7 = (t36 + 32U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t49;
    goto LAB13;

LAB15:    t7 = (t11 + 32U);
    t8 = *((char **)t7);
    t7 = (t36 + 32U);
    t10 = *((char **)t7);
    t24 = *((int *)t10);
    t48 = (1 + t24);
    t7 = (t9 + 0U);
    t49 = *((int *)t7);
    t14 = (t9 + 8U);
    t52 = *((int *)t14);
    t55 = (t48 - t49);
    t13 = (t55 * t52);
    t15 = (t9 + 4U);
    t67 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t49, t67, t52, t48);
    t26 = (1U * t13);
    t27 = (0 + t26);
    t16 = (t8 + t27);
    t88 = *((unsigned char *)t16);
    t17 = (t54 + 32U);
    t18 = *((char **)t17);
    t17 = (t42 + 32U);
    t19 = *((char **)t17);
    t75 = *((int *)t19);
    t17 = (t51 + 0U);
    t78 = *((int *)t17);
    t20 = (t51 + 8U);
    t81 = *((int *)t20);
    t84 = (t75 - t78);
    t28 = (t84 * t81);
    t21 = (t51 + 4U);
    t85 = *((int *)t21);
    xsi_vhdl_check_range_of_index(t78, t85, t81, t75);
    t29 = (1U * t28);
    t50 = (0 + t29);
    t22 = (t18 + t50);
    *((unsigned char *)t22) = t88;
    t7 = (t36 + 32U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 0;
    t7 = (t42 + 32U);
    t8 = *((char **)t7);
    t12 = *((int *)t8);
    t24 = (t12 + 1);
    t7 = (t42 + 32U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t24;
    goto LAB16;

LAB18:;
}

char *xilinxcorelib_p_0347517956_sub_1670819029_347517956(char *t1, char *t2, int t3, int t4)
{
    char t5[136];
    char t6[16];
    char t10[8];
    char t16[16];
    char t39[16];
    char *t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    int t31;
    int t32;
    char *t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    unsigned int t38;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 256);
    t9 = (t7 + 48U);
    *((char **)t9) = t8;
    t11 = (t7 + 32U);
    *((char **)t11) = t10;
    *((int *)t10) = t3;
    t12 = (t7 + 44U);
    *((unsigned int *)t12) = 4U;
    t13 = (t4 - 1);
    t14 = (0 - t13);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t15 = (t15 * 1U);
    t17 = (t4 - 1);
    t18 = (t16 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t17;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - t17);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t5 + 68U);
    t22 = ((IEEE_P_2592010699) + 2244);
    t23 = (t19 + 48U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t15);
    t25 = (t19 + 32U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t16);
    t26 = (t19 + 36U);
    *((char **)t26) = t16;
    t27 = (t19 + 44U);
    *((unsigned int *)t27) = t15;
    t28 = (t6 + 4U);
    *((int *)t28) = t3;
    t29 = (t6 + 8U);
    *((int *)t29) = t4;
    t30 = (t3 < 0);
    if (t30 != 0)
        goto LAB2;

LAB4:
LAB3:    t13 = (t4 - 1);
    t14 = 0;
    t17 = t13;

LAB5:    if (t14 <= t17)
        goto LAB6;

LAB8:    t30 = (t3 < 0);
    if (t30 != 0)
        goto LAB12;

LAB14:    t8 = (t19 + 32U);
    t9 = *((char **)t8);
    t8 = (t16 + 12U);
    t15 = *((unsigned int *)t8);
    t15 = (t15 * 1U);
    t0 = xsi_get_transient_memory(t15);
    memcpy(t0, t9, t15);
    t11 = (t16 + 0U);
    t13 = *((int *)t11);
    t12 = (t16 + 4U);
    t14 = *((int *)t12);
    t18 = (t16 + 8U);
    t17 = *((int *)t18);
    t22 = (t2 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = t13;
    t23 = (t22 + 4U);
    *((int *)t23) = t14;
    t23 = (t22 + 8U);
    *((int *)t23) = t17;
    t20 = (t14 - t13);
    t21 = (t20 * t17);
    t21 = (t21 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t21;

LAB1:    return t0;
LAB2:    t31 = (1 * t3);
    t32 = (-(t31));
    t33 = (t7 + 32U);
    t34 = *((char **)t33);
    t33 = (t34 + 0);
    *((int *)t33) = t32;
    goto LAB3;

LAB6:    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t20 = *((int *)t9);
    t31 = xsi_vhdl_mod(t20, 2);
    t30 = (t31 == 0);
    if (t30 != 0)
        goto LAB9;

LAB11:    t8 = (t19 + 32U);
    t9 = *((char **)t8);
    t8 = (t16 + 0U);
    t13 = *((int *)t8);
    t11 = (t16 + 8U);
    t20 = *((int *)t11);
    t31 = (t14 - t13);
    t15 = (t31 * t20);
    t12 = (t16 + 4U);
    t32 = *((int *)t12);
    xsi_vhdl_check_range_of_index(t13, t32, t20, t14);
    t21 = (1U * t15);
    t38 = (0 + t21);
    t18 = (t9 + t38);
    *((unsigned char *)t18) = (unsigned char)3;

LAB10:    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = *((int *)t9);
    t20 = (t13 / 2);
    t8 = (t7 + 32U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = t20;

LAB7:    t13 = (t14 + 1);
    t14 = t13;
    goto LAB5;

LAB9:    t8 = (t19 + 32U);
    t11 = *((char **)t8);
    t8 = (t16 + 0U);
    t32 = *((int *)t8);
    t12 = (t16 + 8U);
    t35 = *((int *)t12);
    t36 = (t14 - t32);
    t15 = (t36 * t35);
    t18 = (t16 + 4U);
    t37 = *((int *)t18);
    xsi_vhdl_check_range_of_index(t32, t37, t35, t14);
    t21 = (1U * t15);
    t38 = (0 + t21);
    t22 = (t11 + t38);
    *((unsigned char *)t22) = (unsigned char)2;
    goto LAB10;

LAB12:    t8 = (t19 + 32U);
    t9 = *((char **)t8);
    t8 = xilinxcorelib_p_0347517956_sub_963525686_347517956(t1, t39, t9, t16);
    t11 = (t39 + 12U);
    t15 = *((unsigned int *)t11);
    t15 = (t15 * 1U);
    t0 = xsi_get_transient_memory(t15);
    memcpy(t0, t8, t15);
    t12 = (t39 + 0U);
    t13 = *((int *)t12);
    t18 = (t39 + 4U);
    t14 = *((int *)t18);
    t22 = (t39 + 8U);
    t17 = *((int *)t22);
    t23 = (t2 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = t13;
    t25 = (t23 + 4U);
    *((int *)t25) = t14;
    t25 = (t23 + 8U);
    *((int *)t25) = t17;
    t20 = (t14 - t13);
    t21 = (t20 * t17);
    t21 = (t21 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t21;
    goto LAB1;

LAB13:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB15:    goto LAB13;

LAB16:    goto LAB13;

}

char *xilinxcorelib_p_0347517956_sub_963525686_347517956(char *t1, char *t2, char *t3, char *t4)
{
    char t5[136];
    char t6[16];
    char t16[16];
    char t37[8];
    char *t0;
    int t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    int t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    unsigned char t41;
    char *t42;
    int t43;
    char *t44;
    int t45;
    char *t46;
    int t47;
    char *t48;
    int t49;
    int t50;
    int t51;
    char *t52;
    char *t53;
    int t54;
    unsigned char t55;
    int t56;
    char *t57;
    int t58;
    int t59;
    char *t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned char t65;
    unsigned char t66;
    char *t67;
    char *t68;
    int t69;
    char *t70;
    int t71;
    int t72;
    unsigned int t73;
    char *t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;

LAB0:    t8 = (t4 + 0U);
    t9 = *((int *)t8);
    t10 = (t4 + 4U);
    t11 = *((int *)t10);
    t12 = (t4 + 8U);
    t13 = *((int *)t12);
    if (t9 > t11)
        goto LAB2;

LAB3:    if (t13 == -1)
        goto LAB7;

LAB8:    t7 = t11;

LAB4:    t14 = (0 - t7);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t15 = (t15 * 1U);
    t18 = (t4 + 0U);
    t19 = *((int *)t18);
    t20 = (t4 + 4U);
    t21 = *((int *)t20);
    t22 = (t4 + 8U);
    t23 = *((int *)t22);
    if (t19 > t21)
        goto LAB9;

LAB10:    if (t23 == -1)
        goto LAB14;

LAB15:    t17 = t21;

LAB11:    t24 = (t16 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = t17;
    t25 = (t24 + 4U);
    *((int *)t25) = 0;
    t25 = (t24 + 8U);
    *((int *)t25) = -1;
    t26 = (0 - t17);
    t27 = (t26 * -1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t25 = (t5 + 4U);
    t28 = ((IEEE_P_2592010699) + 2244);
    t29 = (t25 + 48U);
    *((char **)t29) = t28;
    t30 = (char *)alloca(t15);
    t31 = (t25 + 32U);
    *((char **)t31) = t30;
    xsi_type_set_default_value(t28, t30, t16);
    t32 = (t25 + 36U);
    *((char **)t32) = t16;
    t33 = (t25 + 44U);
    *((unsigned int *)t33) = t15;
    t34 = (t5 + 68U);
    t35 = ((STD_STANDARD) + 256);
    t36 = (t34 + 48U);
    *((char **)t36) = t35;
    t38 = (t34 + 32U);
    *((char **)t38) = t37;
    *((int *)t37) = 0;
    t39 = (t34 + 44U);
    *((unsigned int *)t39) = 4U;
    t40 = (t6 + 4U);
    t41 = (t3 != 0);
    if (t41 == 1)
        goto LAB17;

LAB16:    t42 = (t6 + 8U);
    *((char **)t42) = t4;
    t44 = (t4 + 0U);
    t45 = *((int *)t44);
    t46 = (t4 + 4U);
    t47 = *((int *)t46);
    t48 = (t4 + 8U);
    t49 = *((int *)t48);
    if (t45 > t47)
        goto LAB22;

LAB23:    if (t49 == -1)
        goto LAB27;

LAB28:    t43 = t47;

LAB24:    t50 = 0;
    t51 = t43;

LAB18:    if (t50 <= t51)
        goto LAB19;

LAB21:    t8 = (t25 + 32U);
    t10 = *((char **)t8);
    t8 = (t16 + 12U);
    t15 = *((unsigned int *)t8);
    t15 = (t15 * 1U);
    t0 = xsi_get_transient_memory(t15);
    memcpy(t0, t10, t15);
    t12 = (t16 + 0U);
    t7 = *((int *)t12);
    t18 = (t16 + 4U);
    t9 = *((int *)t18);
    t20 = (t16 + 8U);
    t11 = *((int *)t20);
    t22 = (t2 + 0U);
    t24 = (t22 + 0U);
    *((int *)t24) = t7;
    t24 = (t22 + 4U);
    *((int *)t24) = t9;
    t24 = (t22 + 8U);
    *((int *)t24) = t11;
    t13 = (t9 - t7);
    t27 = (t13 * t11);
    t27 = (t27 + 1);
    t24 = (t22 + 12U);
    *((unsigned int *)t24) = t27;

LAB1:    return t0;
LAB2:    if (t13 == 1)
        goto LAB5;

LAB6:    t7 = t9;
    goto LAB4;

LAB5:    t7 = t11;
    goto LAB4;

LAB7:    t7 = t9;
    goto LAB4;

LAB9:    if (t23 == 1)
        goto LAB12;

LAB13:    t17 = t19;
    goto LAB11;

LAB12:    t17 = t21;
    goto LAB11;

LAB14:    t17 = t19;
    goto LAB11;

LAB17:    *((char **)t40) = *((char **)t3);
    goto LAB16;

LAB19:    t52 = (t34 + 32U);
    t53 = *((char **)t52);
    t54 = *((int *)t53);
    t55 = (t54 == 1);
    if (t55 != 0)
        goto LAB29;

LAB31:    t8 = (t4 + 0U);
    t7 = *((int *)t8);
    t10 = (t4 + 8U);
    t9 = *((int *)t10);
    t11 = (t50 - t7);
    t15 = (t11 * t9);
    t12 = (t4 + 4U);
    t13 = *((int *)t12);
    xsi_vhdl_check_range_of_index(t7, t13, t9, t50);
    t27 = (1U * t15);
    t62 = (0 + t27);
    t18 = (t3 + t62);
    t41 = *((unsigned char *)t18);
    t20 = (t25 + 32U);
    t22 = *((char **)t20);
    t20 = (t16 + 0U);
    t14 = *((int *)t20);
    t24 = (t16 + 8U);
    t17 = *((int *)t24);
    t19 = (t50 - t14);
    t63 = (t19 * t17);
    t28 = (t16 + 4U);
    t21 = *((int *)t28);
    xsi_vhdl_check_range_of_index(t14, t21, t17, t50);
    t73 = (1U * t63);
    t76 = (0 + t73);
    t29 = (t22 + t76);
    *((unsigned char *)t29) = t41;
    t8 = (t4 + 0U);
    t7 = *((int *)t8);
    t10 = (t4 + 8U);
    t9 = *((int *)t10);
    t11 = (t50 - t7);
    t15 = (t11 * t9);
    t12 = (t4 + 4U);
    t13 = *((int *)t12);
    xsi_vhdl_check_range_of_index(t7, t13, t9, t50);
    t27 = (1U * t15);
    t62 = (0 + t27);
    t18 = (t3 + t62);
    t41 = *((unsigned char *)t18);
    t55 = (t41 == (unsigned char)3);
    if (t55 != 0)
        goto LAB35;

LAB37:
LAB36:
LAB30:
LAB20:    t7 = (t50 + 1);
    t50 = t7;
    goto LAB18;

LAB22:    if (t49 == 1)
        goto LAB25;

LAB26:    t43 = t45;
    goto LAB24;

LAB25:    t43 = t47;
    goto LAB24;

LAB27:    t43 = t45;
    goto LAB24;

LAB29:    t52 = (t4 + 0U);
    t56 = *((int *)t52);
    t57 = (t4 + 8U);
    t58 = *((int *)t57);
    t59 = (t50 - t56);
    t27 = (t59 * t58);
    t60 = (t4 + 4U);
    t61 = *((int *)t60);
    xsi_vhdl_check_range_of_index(t56, t61, t58, t50);
    t62 = (1U * t27);
    t63 = (0 + t62);
    t64 = (t3 + t63);
    t65 = *((unsigned char *)t64);
    t66 = (t65 == (unsigned char)2);
    if (t66 != 0)
        goto LAB32;

LAB34:    t8 = (t25 + 32U);
    t10 = *((char **)t8);
    t8 = (t16 + 0U);
    t7 = *((int *)t8);
    t12 = (t16 + 8U);
    t9 = *((int *)t12);
    t11 = (t50 - t7);
    t15 = (t11 * t9);
    t18 = (t16 + 4U);
    t13 = *((int *)t18);
    xsi_vhdl_check_range_of_index(t7, t13, t9, t50);
    t27 = (1U * t15);
    t62 = (0 + t27);
    t20 = (t10 + t62);
    *((unsigned char *)t20) = (unsigned char)2;

LAB33:    goto LAB30;

LAB32:    t67 = (t25 + 32U);
    t68 = *((char **)t67);
    t67 = (t16 + 0U);
    t69 = *((int *)t67);
    t70 = (t16 + 8U);
    t71 = *((int *)t70);
    t72 = (t50 - t69);
    t73 = (t72 * t71);
    t74 = (t16 + 4U);
    t75 = *((int *)t74);
    xsi_vhdl_check_range_of_index(t69, t75, t71, t50);
    t76 = (1U * t73);
    t77 = (0 + t76);
    t78 = (t68 + t77);
    *((unsigned char *)t78) = (unsigned char)3;
    goto LAB33;

LAB35:    t20 = (t34 + 32U);
    t22 = *((char **)t20);
    t20 = (t22 + 0);
    *((int *)t20) = 1;
    goto LAB36;

LAB38:;
}

char *xilinxcorelib_p_0347517956_sub_3181201577_347517956(char *t1, char *t2, int t3, int t4, int t5)
{
    char t7[16];
    char t17[16];
    char t22[16];
    char t24[16];
    char t33[16];
    char t35[16];
    char t42[16];
    char t47[16];
    char t59[16];
    char t61[16];
    char *t0;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    char *t21;
    char *t23;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    unsigned int t45;
    char *t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t62;
    char *t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    int t73;
    char *t74;
    int t75;
    char *t76;
    int t77;
    char *t78;
    char *t79;
    int t80;
    unsigned int t81;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    *((int *)t9) = t4;
    t10 = (t7 + 12U);
    *((int *)t10) = t5;
    t11 = (t1 + 880U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    if (t5 == t13)
        goto LAB3;

LAB6:    t11 = (t1 + 944U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    if (t5 == t15)
        goto LAB4;

LAB7:
LAB5:    t11 = (t1 + 5548);
    t14 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t17, t4);
    t16 = (t17 + 12U);
    t20 = *((unsigned int *)t16);
    t20 = (t20 * 1U);
    t19 = ((STD_STANDARD) + 708);
    t21 = (t24 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = 1;
    t23 = (t21 + 4U);
    *((int *)t23) = 1;
    t23 = (t21 + 8U);
    *((int *)t23) = 1;
    t13 = (1 - 1);
    t28 = (t13 * 1);
    t28 = (t28 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t28;
    t18 = xsi_base_array_concat(t18, t22, t19, (char)97, t11, t24, (char)97, t14, t17, (char)101);
    t23 = (t17 + 12U);
    t28 = *((unsigned int *)t23);
    t28 = (t28 * 1U);
    t29 = (1U + t28);
    t25 = (t1 + 5549);
    t31 = ((STD_STANDARD) + 708);
    t32 = (t35 + 0U);
    t34 = (t32 + 0U);
    *((int *)t34) = 1;
    t34 = (t32 + 4U);
    *((int *)t34) = 1;
    t34 = (t32 + 8U);
    *((int *)t34) = 1;
    t15 = (1 - 1);
    t39 = (t15 * 1);
    t39 = (t39 + 1);
    t34 = (t32 + 12U);
    *((unsigned int *)t34) = t39;
    t30 = xsi_base_array_concat(t30, t33, t31, (char)97, t18, t22, (char)97, t25, t35, (char)101);
    t34 = (t17 + 12U);
    t39 = *((unsigned int *)t34);
    t39 = (t39 * 1U);
    t40 = (1U + t39);
    t41 = (t40 + 1U);
    t36 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t42, t3);
    t37 = (t42 + 12U);
    t45 = *((unsigned int *)t37);
    t45 = (t45 * 1U);
    t44 = ((STD_STANDARD) + 708);
    t43 = xsi_base_array_concat(t43, t47, t44, (char)97, t30, t33, (char)97, t36, t42, (char)101);
    t46 = (t17 + 12U);
    t50 = *((unsigned int *)t46);
    t50 = (t50 * 1U);
    t51 = (1U + t50);
    t52 = (t51 + 1U);
    t48 = (t42 + 12U);
    t54 = *((unsigned int *)t48);
    t54 = (t54 * 1U);
    t55 = (t52 + t54);
    t0 = xsi_get_transient_memory(t55);
    memcpy(t0, t43, t55);
    t49 = (t47 + 0U);
    t27 = *((int *)t49);
    t53 = (t47 + 4U);
    t38 = *((int *)t53);
    t56 = (t47 + 8U);
    t64 = *((int *)t56);
    t57 = (t2 + 0U);
    t58 = (t57 + 0U);
    *((int *)t58) = t27;
    t58 = (t57 + 4U);
    *((int *)t58) = t38;
    t58 = (t57 + 8U);
    *((int *)t58) = t64;
    t73 = (t38 - t27);
    t65 = (t73 * t64);
    t65 = (t65 + 1);
    t58 = (t57 + 12U);
    *((unsigned int *)t58) = t65;

LAB1:    return t0;
LAB2:    xsi_error(ng4);
    t0 = 0;
    goto LAB1;

LAB3:    t11 = (t1 + 5540);
    t18 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t17, t4);
    t19 = (t17 + 12U);
    t20 = *((unsigned int *)t19);
    t20 = (t20 * 1U);
    t23 = ((STD_STANDARD) + 708);
    t25 = (t24 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 1;
    t26 = (t25 + 4U);
    *((int *)t26) = 1;
    t26 = (t25 + 8U);
    *((int *)t26) = 1;
    t27 = (1 - 1);
    t28 = (t27 * 1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t21 = xsi_base_array_concat(t21, t22, t23, (char)97, t11, t24, (char)97, t18, t17, (char)101);
    t26 = (t17 + 12U);
    t28 = *((unsigned int *)t26);
    t28 = (t28 * 1U);
    t29 = (1U + t28);
    t30 = (t1 + 5541);
    t34 = ((STD_STANDARD) + 708);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 1;
    t37 = (t36 + 4U);
    *((int *)t37) = 1;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (1 - 1);
    t39 = (t38 * 1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t32 = xsi_base_array_concat(t32, t33, t34, (char)97, t21, t22, (char)97, t30, t35, (char)101);
    t37 = (t17 + 12U);
    t39 = *((unsigned int *)t37);
    t39 = (t39 * 1U);
    t40 = (1U + t39);
    t41 = (t40 + 1U);
    t43 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t42, t3);
    t44 = (t42 + 12U);
    t45 = *((unsigned int *)t44);
    t45 = (t45 * 1U);
    t48 = ((STD_STANDARD) + 708);
    t46 = xsi_base_array_concat(t46, t47, t48, (char)97, t32, t33, (char)97, t43, t42, (char)101);
    t49 = (t17 + 12U);
    t50 = *((unsigned int *)t49);
    t50 = (t50 * 1U);
    t51 = (1U + t50);
    t52 = (t51 + 1U);
    t53 = (t42 + 12U);
    t54 = *((unsigned int *)t53);
    t54 = (t54 * 1U);
    t55 = (t52 + t54);
    t56 = (t1 + 5542);
    t60 = ((STD_STANDARD) + 708);
    t62 = (t61 + 0U);
    t63 = (t62 + 0U);
    *((int *)t63) = 1;
    t63 = (t62 + 4U);
    *((int *)t63) = 2;
    t63 = (t62 + 8U);
    *((int *)t63) = 1;
    t64 = (2 - 1);
    t65 = (t64 * 1);
    t65 = (t65 + 1);
    t63 = (t62 + 12U);
    *((unsigned int *)t63) = t65;
    t58 = xsi_base_array_concat(t58, t59, t60, (char)97, t46, t47, (char)97, t56, t61, (char)101);
    t63 = (t17 + 12U);
    t65 = *((unsigned int *)t63);
    t65 = (t65 * 1U);
    t66 = (1U + t65);
    t67 = (t66 + 1U);
    t68 = (t42 + 12U);
    t69 = *((unsigned int *)t68);
    t69 = (t69 * 1U);
    t70 = (t67 + t69);
    t71 = (t70 + 2U);
    t0 = xsi_get_transient_memory(t71);
    memcpy(t0, t58, t71);
    t72 = (t59 + 0U);
    t73 = *((int *)t72);
    t74 = (t59 + 4U);
    t75 = *((int *)t74);
    t76 = (t59 + 8U);
    t77 = *((int *)t76);
    t78 = (t2 + 0U);
    t79 = (t78 + 0U);
    *((int *)t79) = t73;
    t79 = (t78 + 4U);
    *((int *)t79) = t75;
    t79 = (t78 + 8U);
    *((int *)t79) = t77;
    t80 = (t75 - t73);
    t81 = (t80 * t77);
    t81 = (t81 + 1);
    t79 = (t78 + 12U);
    *((unsigned int *)t79) = t81;
    goto LAB1;

LAB4:    t11 = (t1 + 5544);
    t14 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t17, t4);
    t16 = (t17 + 12U);
    t20 = *((unsigned int *)t16);
    t20 = (t20 * 1U);
    t19 = ((STD_STANDARD) + 708);
    t21 = (t24 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = 1;
    t23 = (t21 + 4U);
    *((int *)t23) = 1;
    t23 = (t21 + 8U);
    *((int *)t23) = 1;
    t13 = (1 - 1);
    t28 = (t13 * 1);
    t28 = (t28 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t28;
    t18 = xsi_base_array_concat(t18, t22, t19, (char)97, t11, t24, (char)97, t14, t17, (char)101);
    t23 = (t17 + 12U);
    t28 = *((unsigned int *)t23);
    t28 = (t28 * 1U);
    t29 = (1U + t28);
    t25 = (t1 + 5545);
    t31 = ((STD_STANDARD) + 708);
    t32 = (t35 + 0U);
    t34 = (t32 + 0U);
    *((int *)t34) = 1;
    t34 = (t32 + 4U);
    *((int *)t34) = 1;
    t34 = (t32 + 8U);
    *((int *)t34) = 1;
    t15 = (1 - 1);
    t39 = (t15 * 1);
    t39 = (t39 + 1);
    t34 = (t32 + 12U);
    *((unsigned int *)t34) = t39;
    t30 = xsi_base_array_concat(t30, t33, t31, (char)97, t18, t22, (char)97, t25, t35, (char)101);
    t34 = (t17 + 12U);
    t39 = *((unsigned int *)t34);
    t39 = (t39 * 1U);
    t40 = (1U + t39);
    t41 = (t40 + 1U);
    t36 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t42, t3);
    t37 = (t42 + 12U);
    t45 = *((unsigned int *)t37);
    t45 = (t45 * 1U);
    t44 = ((STD_STANDARD) + 708);
    t43 = xsi_base_array_concat(t43, t47, t44, (char)97, t30, t33, (char)97, t36, t42, (char)101);
    t46 = (t17 + 12U);
    t50 = *((unsigned int *)t46);
    t50 = (t50 * 1U);
    t51 = (1U + t50);
    t52 = (t51 + 1U);
    t48 = (t42 + 12U);
    t54 = *((unsigned int *)t48);
    t54 = (t54 * 1U);
    t55 = (t52 + t54);
    t49 = (t1 + 5546);
    t57 = ((STD_STANDARD) + 708);
    t58 = (t61 + 0U);
    t60 = (t58 + 0U);
    *((int *)t60) = 1;
    t60 = (t58 + 4U);
    *((int *)t60) = 2;
    t60 = (t58 + 8U);
    *((int *)t60) = 1;
    t27 = (2 - 1);
    t65 = (t27 * 1);
    t65 = (t65 + 1);
    t60 = (t58 + 12U);
    *((unsigned int *)t60) = t65;
    t56 = xsi_base_array_concat(t56, t59, t57, (char)97, t43, t47, (char)97, t49, t61, (char)101);
    t60 = (t17 + 12U);
    t65 = *((unsigned int *)t60);
    t65 = (t65 * 1U);
    t66 = (1U + t65);
    t67 = (t66 + 1U);
    t62 = (t42 + 12U);
    t69 = *((unsigned int *)t62);
    t69 = (t69 * 1U);
    t70 = (t67 + t69);
    t71 = (t70 + 2U);
    t0 = xsi_get_transient_memory(t71);
    memcpy(t0, t56, t71);
    t63 = (t59 + 0U);
    t38 = *((int *)t63);
    t68 = (t59 + 4U);
    t64 = *((int *)t68);
    t72 = (t59 + 8U);
    t73 = *((int *)t72);
    t74 = (t2 + 0U);
    t76 = (t74 + 0U);
    *((int *)t76) = t38;
    t76 = (t74 + 4U);
    *((int *)t76) = t64;
    t76 = (t74 + 8U);
    *((int *)t76) = t73;
    t75 = (t64 - t38);
    t81 = (t75 * t73);
    t81 = (t81 + 1);
    t76 = (t74 + 12U);
    *((unsigned int *)t76) = t81;
    goto LAB1;

LAB8:;
LAB9:    goto LAB2;

LAB10:    goto LAB2;

LAB11:    goto LAB2;

}

char *xilinxcorelib_p_0347517956_sub_4293977645_347517956(char *t1, char *t2, int t3, int t4)
{
    char t6[16];
    char t11[16];
    char t16[16];
    char t18[16];
    char t27[16];
    char t29[16];
    char t36[16];
    char t41[16];
    char *t0;
    char *t7;
    char *t8;
    char *t9;
    char *t12;
    char *t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t28;
    char *t30;
    char *t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    unsigned int t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    int t51;
    char *t52;
    int t53;
    char *t54;
    int t55;
    char *t56;
    char *t57;
    int t58;
    unsigned int t59;

LAB0:    t7 = (t6 + 4U);
    *((int *)t7) = t3;
    t8 = (t6 + 8U);
    *((int *)t8) = t4;
    t9 = (t1 + 5550);
    t12 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t11, t4);
    t13 = (t11 + 12U);
    t14 = *((unsigned int *)t13);
    t14 = (t14 * 1U);
    t17 = ((STD_STANDARD) + 708);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 1;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (1 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t15 = xsi_base_array_concat(t15, t16, t17, (char)97, t9, t18, (char)97, t12, t11, (char)101);
    t20 = (t11 + 12U);
    t22 = *((unsigned int *)t20);
    t22 = (t22 * 1U);
    t23 = (1U + t22);
    t24 = (t1 + 5551);
    t28 = ((STD_STANDARD) + 708);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 1;
    t31 = (t30 + 4U);
    *((int *)t31) = 1;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (1 - 1);
    t33 = (t32 * 1);
    t33 = (t33 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t33;
    t26 = xsi_base_array_concat(t26, t27, t28, (char)97, t15, t16, (char)97, t24, t29, (char)101);
    t31 = (t11 + 12U);
    t33 = *((unsigned int *)t31);
    t33 = (t33 * 1U);
    t34 = (1U + t33);
    t35 = (t34 + 1U);
    t37 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t36, t3);
    t38 = (t36 + 12U);
    t39 = *((unsigned int *)t38);
    t39 = (t39 * 1U);
    t42 = ((STD_STANDARD) + 708);
    t40 = xsi_base_array_concat(t40, t41, t42, (char)97, t26, t27, (char)97, t37, t36, (char)101);
    t43 = (t11 + 12U);
    t44 = *((unsigned int *)t43);
    t44 = (t44 * 1U);
    t45 = (1U + t44);
    t46 = (t45 + 1U);
    t47 = (t36 + 12U);
    t48 = *((unsigned int *)t47);
    t48 = (t48 * 1U);
    t49 = (t46 + t48);
    t0 = xsi_get_transient_memory(t49);
    memcpy(t0, t40, t49);
    t50 = (t41 + 0U);
    t51 = *((int *)t50);
    t52 = (t41 + 4U);
    t53 = *((int *)t52);
    t54 = (t41 + 8U);
    t55 = *((int *)t54);
    t56 = (t2 + 0U);
    t57 = (t56 + 0U);
    *((int *)t57) = t51;
    t57 = (t56 + 4U);
    *((int *)t57) = t53;
    t57 = (t56 + 8U);
    *((int *)t57) = t55;
    t58 = (t53 - t51);
    t59 = (t58 * t55);
    t59 = (t59 + 1);
    t57 = (t56 + 12U);
    *((unsigned int *)t57) = t59;

LAB1:    return t0;
LAB2:;
}

char *xilinxcorelib_p_0347517956_sub_104102386_347517956(char *t1, char *t2, int t3, int t4, int t5)
{
    char t7[16];
    char t17[16];
    char t22[16];
    char t24[16];
    char t33[16];
    char t35[16];
    char t42[16];
    char t47[16];
    char t59[16];
    char t61[16];
    char *t0;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    char *t21;
    char *t23;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    unsigned int t45;
    char *t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t62;
    char *t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    int t73;
    char *t74;
    int t75;
    char *t76;
    int t77;
    char *t78;
    char *t79;
    int t80;
    unsigned int t81;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    *((int *)t9) = t4;
    t10 = (t7 + 12U);
    *((int *)t10) = t5;
    t11 = (t1 + 624U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    if (t5 == t13)
        goto LAB3;

LAB6:    t11 = (t1 + 688U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    if (t5 == t15)
        goto LAB4;

LAB7:
LAB5:    t11 = (t1 + 5564);
    t14 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t17, t4);
    t16 = (t17 + 12U);
    t20 = *((unsigned int *)t16);
    t20 = (t20 * 1U);
    t19 = ((STD_STANDARD) + 708);
    t21 = (t24 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = 1;
    t23 = (t21 + 4U);
    *((int *)t23) = 1;
    t23 = (t21 + 8U);
    *((int *)t23) = 1;
    t13 = (1 - 1);
    t28 = (t13 * 1);
    t28 = (t28 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t28;
    t18 = xsi_base_array_concat(t18, t22, t19, (char)97, t11, t24, (char)97, t14, t17, (char)101);
    t23 = (t17 + 12U);
    t28 = *((unsigned int *)t23);
    t28 = (t28 * 1U);
    t29 = (1U + t28);
    t25 = (t1 + 5565);
    t31 = ((STD_STANDARD) + 708);
    t32 = (t35 + 0U);
    t34 = (t32 + 0U);
    *((int *)t34) = 1;
    t34 = (t32 + 4U);
    *((int *)t34) = 1;
    t34 = (t32 + 8U);
    *((int *)t34) = 1;
    t15 = (1 - 1);
    t39 = (t15 * 1);
    t39 = (t39 + 1);
    t34 = (t32 + 12U);
    *((unsigned int *)t34) = t39;
    t30 = xsi_base_array_concat(t30, t33, t31, (char)97, t18, t22, (char)97, t25, t35, (char)101);
    t34 = (t17 + 12U);
    t39 = *((unsigned int *)t34);
    t39 = (t39 * 1U);
    t40 = (1U + t39);
    t41 = (t40 + 1U);
    t36 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t42, t3);
    t37 = (t42 + 12U);
    t45 = *((unsigned int *)t37);
    t45 = (t45 * 1U);
    t44 = ((STD_STANDARD) + 708);
    t43 = xsi_base_array_concat(t43, t47, t44, (char)97, t30, t33, (char)97, t36, t42, (char)101);
    t46 = (t17 + 12U);
    t50 = *((unsigned int *)t46);
    t50 = (t50 * 1U);
    t51 = (1U + t50);
    t52 = (t51 + 1U);
    t48 = (t42 + 12U);
    t54 = *((unsigned int *)t48);
    t54 = (t54 * 1U);
    t55 = (t52 + t54);
    t0 = xsi_get_transient_memory(t55);
    memcpy(t0, t43, t55);
    t49 = (t47 + 0U);
    t27 = *((int *)t49);
    t53 = (t47 + 4U);
    t38 = *((int *)t53);
    t56 = (t47 + 8U);
    t64 = *((int *)t56);
    t57 = (t2 + 0U);
    t58 = (t57 + 0U);
    *((int *)t58) = t27;
    t58 = (t57 + 4U);
    *((int *)t58) = t38;
    t58 = (t57 + 8U);
    *((int *)t58) = t64;
    t73 = (t38 - t27);
    t65 = (t73 * t64);
    t65 = (t65 + 1);
    t58 = (t57 + 12U);
    *((unsigned int *)t58) = t65;

LAB1:    return t0;
LAB2:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB3:    t11 = (t1 + 5552);
    t18 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t17, t4);
    t19 = (t17 + 12U);
    t20 = *((unsigned int *)t19);
    t20 = (t20 * 1U);
    t23 = ((STD_STANDARD) + 708);
    t25 = (t24 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 1;
    t26 = (t25 + 4U);
    *((int *)t26) = 1;
    t26 = (t25 + 8U);
    *((int *)t26) = 1;
    t27 = (1 - 1);
    t28 = (t27 * 1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t21 = xsi_base_array_concat(t21, t22, t23, (char)97, t11, t24, (char)97, t18, t17, (char)101);
    t26 = (t17 + 12U);
    t28 = *((unsigned int *)t26);
    t28 = (t28 * 1U);
    t29 = (1U + t28);
    t30 = (t1 + 5553);
    t34 = ((STD_STANDARD) + 708);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 1;
    t37 = (t36 + 4U);
    *((int *)t37) = 1;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (1 - 1);
    t39 = (t38 * 1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t32 = xsi_base_array_concat(t32, t33, t34, (char)97, t21, t22, (char)97, t30, t35, (char)101);
    t37 = (t17 + 12U);
    t39 = *((unsigned int *)t37);
    t39 = (t39 * 1U);
    t40 = (1U + t39);
    t41 = (t40 + 1U);
    t43 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t42, t3);
    t44 = (t42 + 12U);
    t45 = *((unsigned int *)t44);
    t45 = (t45 * 1U);
    t48 = ((STD_STANDARD) + 708);
    t46 = xsi_base_array_concat(t46, t47, t48, (char)97, t32, t33, (char)97, t43, t42, (char)101);
    t49 = (t17 + 12U);
    t50 = *((unsigned int *)t49);
    t50 = (t50 * 1U);
    t51 = (1U + t50);
    t52 = (t51 + 1U);
    t53 = (t42 + 12U);
    t54 = *((unsigned int *)t53);
    t54 = (t54 * 1U);
    t55 = (t52 + t54);
    t56 = (t1 + 5554);
    t60 = ((STD_STANDARD) + 708);
    t62 = (t61 + 0U);
    t63 = (t62 + 0U);
    *((int *)t63) = 1;
    t63 = (t62 + 4U);
    *((int *)t63) = 4;
    t63 = (t62 + 8U);
    *((int *)t63) = 1;
    t64 = (4 - 1);
    t65 = (t64 * 1);
    t65 = (t65 + 1);
    t63 = (t62 + 12U);
    *((unsigned int *)t63) = t65;
    t58 = xsi_base_array_concat(t58, t59, t60, (char)97, t46, t47, (char)97, t56, t61, (char)101);
    t63 = (t17 + 12U);
    t65 = *((unsigned int *)t63);
    t65 = (t65 * 1U);
    t66 = (1U + t65);
    t67 = (t66 + 1U);
    t68 = (t42 + 12U);
    t69 = *((unsigned int *)t68);
    t69 = (t69 * 1U);
    t70 = (t67 + t69);
    t71 = (t70 + 4U);
    t0 = xsi_get_transient_memory(t71);
    memcpy(t0, t58, t71);
    t72 = (t59 + 0U);
    t73 = *((int *)t72);
    t74 = (t59 + 4U);
    t75 = *((int *)t74);
    t76 = (t59 + 8U);
    t77 = *((int *)t76);
    t78 = (t2 + 0U);
    t79 = (t78 + 0U);
    *((int *)t79) = t73;
    t79 = (t78 + 4U);
    *((int *)t79) = t75;
    t79 = (t78 + 8U);
    *((int *)t79) = t77;
    t80 = (t75 - t73);
    t81 = (t80 * t77);
    t81 = (t81 + 1);
    t79 = (t78 + 12U);
    *((unsigned int *)t79) = t81;
    goto LAB1;

LAB4:    t11 = (t1 + 5558);
    t14 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t17, t4);
    t16 = (t17 + 12U);
    t20 = *((unsigned int *)t16);
    t20 = (t20 * 1U);
    t19 = ((STD_STANDARD) + 708);
    t21 = (t24 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = 1;
    t23 = (t21 + 4U);
    *((int *)t23) = 1;
    t23 = (t21 + 8U);
    *((int *)t23) = 1;
    t13 = (1 - 1);
    t28 = (t13 * 1);
    t28 = (t28 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t28;
    t18 = xsi_base_array_concat(t18, t22, t19, (char)97, t11, t24, (char)97, t14, t17, (char)101);
    t23 = (t17 + 12U);
    t28 = *((unsigned int *)t23);
    t28 = (t28 * 1U);
    t29 = (1U + t28);
    t25 = (t1 + 5559);
    t31 = ((STD_STANDARD) + 708);
    t32 = (t35 + 0U);
    t34 = (t32 + 0U);
    *((int *)t34) = 1;
    t34 = (t32 + 4U);
    *((int *)t34) = 1;
    t34 = (t32 + 8U);
    *((int *)t34) = 1;
    t15 = (1 - 1);
    t39 = (t15 * 1);
    t39 = (t39 + 1);
    t34 = (t32 + 12U);
    *((unsigned int *)t34) = t39;
    t30 = xsi_base_array_concat(t30, t33, t31, (char)97, t18, t22, (char)97, t25, t35, (char)101);
    t34 = (t17 + 12U);
    t39 = *((unsigned int *)t34);
    t39 = (t39 * 1U);
    t40 = (1U + t39);
    t41 = (t40 + 1U);
    t36 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t42, t3);
    t37 = (t42 + 12U);
    t45 = *((unsigned int *)t37);
    t45 = (t45 * 1U);
    t44 = ((STD_STANDARD) + 708);
    t43 = xsi_base_array_concat(t43, t47, t44, (char)97, t30, t33, (char)97, t36, t42, (char)101);
    t46 = (t17 + 12U);
    t50 = *((unsigned int *)t46);
    t50 = (t50 * 1U);
    t51 = (1U + t50);
    t52 = (t51 + 1U);
    t48 = (t42 + 12U);
    t54 = *((unsigned int *)t48);
    t54 = (t54 * 1U);
    t55 = (t52 + t54);
    t49 = (t1 + 5560);
    t57 = ((STD_STANDARD) + 708);
    t58 = (t61 + 0U);
    t60 = (t58 + 0U);
    *((int *)t60) = 1;
    t60 = (t58 + 4U);
    *((int *)t60) = 4;
    t60 = (t58 + 8U);
    *((int *)t60) = 1;
    t27 = (4 - 1);
    t65 = (t27 * 1);
    t65 = (t65 + 1);
    t60 = (t58 + 12U);
    *((unsigned int *)t60) = t65;
    t56 = xsi_base_array_concat(t56, t59, t57, (char)97, t43, t47, (char)97, t49, t61, (char)101);
    t60 = (t17 + 12U);
    t65 = *((unsigned int *)t60);
    t65 = (t65 * 1U);
    t66 = (1U + t65);
    t67 = (t66 + 1U);
    t62 = (t42 + 12U);
    t69 = *((unsigned int *)t62);
    t69 = (t69 * 1U);
    t70 = (t67 + t69);
    t71 = (t70 + 4U);
    t0 = xsi_get_transient_memory(t71);
    memcpy(t0, t56, t71);
    t63 = (t59 + 0U);
    t38 = *((int *)t63);
    t68 = (t59 + 4U);
    t64 = *((int *)t68);
    t72 = (t59 + 8U);
    t73 = *((int *)t72);
    t74 = (t2 + 0U);
    t76 = (t74 + 0U);
    *((int *)t76) = t38;
    t76 = (t74 + 4U);
    *((int *)t76) = t64;
    t76 = (t74 + 8U);
    *((int *)t76) = t73;
    t75 = (t64 - t38);
    t81 = (t75 * t73);
    t81 = (t81 + 1);
    t76 = (t74 + 12U);
    *((unsigned int *)t76) = t81;
    goto LAB1;

LAB8:;
LAB9:    goto LAB2;

LAB10:    goto LAB2;

LAB11:    goto LAB2;

}

char *xilinxcorelib_p_0347517956_sub_2922511006_347517956(char *t1, char *t2, int t3, int t4, int t5)
{
    char t7[16];
    char t17[16];
    char t22[16];
    char t24[16];
    char t33[16];
    char t35[16];
    char t42[16];
    char t47[16];
    char t59[16];
    char t61[16];
    char *t0;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    char *t21;
    char *t23;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    unsigned int t45;
    char *t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t62;
    char *t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    int t73;
    char *t74;
    int t75;
    char *t76;
    int t77;
    char *t78;
    char *t79;
    int t80;
    unsigned int t81;

LAB0:    t8 = (t7 + 4U);
    *((int *)t8) = t3;
    t9 = (t7 + 8U);
    *((int *)t9) = t4;
    t10 = (t7 + 12U);
    *((int *)t10) = t5;
    t11 = (t1 + 1136U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    if (t5 == t13)
        goto LAB3;

LAB6:    t11 = (t1 + 1200U);
    t14 = *((char **)t11);
    t15 = *((int *)t14);
    if (t5 == t15)
        goto LAB4;

LAB7:
LAB5:    t11 = (t1 + 5574);
    t14 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t17, t4);
    t16 = (t17 + 12U);
    t20 = *((unsigned int *)t16);
    t20 = (t20 * 1U);
    t19 = ((STD_STANDARD) + 708);
    t21 = (t24 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = 1;
    t23 = (t21 + 4U);
    *((int *)t23) = 1;
    t23 = (t21 + 8U);
    *((int *)t23) = 1;
    t13 = (1 - 1);
    t28 = (t13 * 1);
    t28 = (t28 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t28;
    t18 = xsi_base_array_concat(t18, t22, t19, (char)97, t11, t24, (char)97, t14, t17, (char)101);
    t23 = (t17 + 12U);
    t28 = *((unsigned int *)t23);
    t28 = (t28 * 1U);
    t29 = (1U + t28);
    t25 = (t1 + 5575);
    t31 = ((STD_STANDARD) + 708);
    t32 = (t35 + 0U);
    t34 = (t32 + 0U);
    *((int *)t34) = 1;
    t34 = (t32 + 4U);
    *((int *)t34) = 1;
    t34 = (t32 + 8U);
    *((int *)t34) = 1;
    t15 = (1 - 1);
    t39 = (t15 * 1);
    t39 = (t39 + 1);
    t34 = (t32 + 12U);
    *((unsigned int *)t34) = t39;
    t30 = xsi_base_array_concat(t30, t33, t31, (char)97, t18, t22, (char)97, t25, t35, (char)101);
    t34 = (t17 + 12U);
    t39 = *((unsigned int *)t34);
    t39 = (t39 * 1U);
    t40 = (1U + t39);
    t41 = (t40 + 1U);
    t36 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t42, t3);
    t37 = (t42 + 12U);
    t45 = *((unsigned int *)t37);
    t45 = (t45 * 1U);
    t44 = ((STD_STANDARD) + 708);
    t43 = xsi_base_array_concat(t43, t47, t44, (char)97, t30, t33, (char)97, t36, t42, (char)101);
    t46 = (t17 + 12U);
    t50 = *((unsigned int *)t46);
    t50 = (t50 * 1U);
    t51 = (1U + t50);
    t52 = (t51 + 1U);
    t48 = (t42 + 12U);
    t54 = *((unsigned int *)t48);
    t54 = (t54 * 1U);
    t55 = (t52 + t54);
    t0 = xsi_get_transient_memory(t55);
    memcpy(t0, t43, t55);
    t49 = (t47 + 0U);
    t27 = *((int *)t49);
    t53 = (t47 + 4U);
    t38 = *((int *)t53);
    t56 = (t47 + 8U);
    t64 = *((int *)t56);
    t57 = (t2 + 0U);
    t58 = (t57 + 0U);
    *((int *)t58) = t27;
    t58 = (t57 + 4U);
    *((int *)t58) = t38;
    t58 = (t57 + 8U);
    *((int *)t58) = t64;
    t73 = (t38 - t27);
    t65 = (t73 * t64);
    t65 = (t65 + 1);
    t58 = (t57 + 12U);
    *((unsigned int *)t58) = t65;

LAB1:    return t0;
LAB2:    xsi_error(ng6);
    t0 = 0;
    goto LAB1;

LAB3:    t11 = (t1 + 5566);
    t18 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t17, t4);
    t19 = (t17 + 12U);
    t20 = *((unsigned int *)t19);
    t20 = (t20 * 1U);
    t23 = ((STD_STANDARD) + 708);
    t25 = (t24 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 1;
    t26 = (t25 + 4U);
    *((int *)t26) = 1;
    t26 = (t25 + 8U);
    *((int *)t26) = 1;
    t27 = (1 - 1);
    t28 = (t27 * 1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t21 = xsi_base_array_concat(t21, t22, t23, (char)97, t11, t24, (char)97, t18, t17, (char)101);
    t26 = (t17 + 12U);
    t28 = *((unsigned int *)t26);
    t28 = (t28 * 1U);
    t29 = (1U + t28);
    t30 = (t1 + 5567);
    t34 = ((STD_STANDARD) + 708);
    t36 = (t35 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = 1;
    t37 = (t36 + 4U);
    *((int *)t37) = 1;
    t37 = (t36 + 8U);
    *((int *)t37) = 1;
    t38 = (1 - 1);
    t39 = (t38 * 1);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;
    t32 = xsi_base_array_concat(t32, t33, t34, (char)97, t21, t22, (char)97, t30, t35, (char)101);
    t37 = (t17 + 12U);
    t39 = *((unsigned int *)t37);
    t39 = (t39 * 1U);
    t40 = (1U + t39);
    t41 = (t40 + 1U);
    t43 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t42, t3);
    t44 = (t42 + 12U);
    t45 = *((unsigned int *)t44);
    t45 = (t45 * 1U);
    t48 = ((STD_STANDARD) + 708);
    t46 = xsi_base_array_concat(t46, t47, t48, (char)97, t32, t33, (char)97, t43, t42, (char)101);
    t49 = (t17 + 12U);
    t50 = *((unsigned int *)t49);
    t50 = (t50 * 1U);
    t51 = (1U + t50);
    t52 = (t51 + 1U);
    t53 = (t42 + 12U);
    t54 = *((unsigned int *)t53);
    t54 = (t54 * 1U);
    t55 = (t52 + t54);
    t56 = (t1 + 5568);
    t60 = ((STD_STANDARD) + 708);
    t62 = (t61 + 0U);
    t63 = (t62 + 0U);
    *((int *)t63) = 1;
    t63 = (t62 + 4U);
    *((int *)t63) = 2;
    t63 = (t62 + 8U);
    *((int *)t63) = 1;
    t64 = (2 - 1);
    t65 = (t64 * 1);
    t65 = (t65 + 1);
    t63 = (t62 + 12U);
    *((unsigned int *)t63) = t65;
    t58 = xsi_base_array_concat(t58, t59, t60, (char)97, t46, t47, (char)97, t56, t61, (char)101);
    t63 = (t17 + 12U);
    t65 = *((unsigned int *)t63);
    t65 = (t65 * 1U);
    t66 = (1U + t65);
    t67 = (t66 + 1U);
    t68 = (t42 + 12U);
    t69 = *((unsigned int *)t68);
    t69 = (t69 * 1U);
    t70 = (t67 + t69);
    t71 = (t70 + 2U);
    t0 = xsi_get_transient_memory(t71);
    memcpy(t0, t58, t71);
    t72 = (t59 + 0U);
    t73 = *((int *)t72);
    t74 = (t59 + 4U);
    t75 = *((int *)t74);
    t76 = (t59 + 8U);
    t77 = *((int *)t76);
    t78 = (t2 + 0U);
    t79 = (t78 + 0U);
    *((int *)t79) = t73;
    t79 = (t78 + 4U);
    *((int *)t79) = t75;
    t79 = (t78 + 8U);
    *((int *)t79) = t77;
    t80 = (t75 - t73);
    t81 = (t80 * t77);
    t81 = (t81 + 1);
    t79 = (t78 + 12U);
    *((unsigned int *)t79) = t81;
    goto LAB1;

LAB4:    t11 = (t1 + 5570);
    t14 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t17, t4);
    t16 = (t17 + 12U);
    t20 = *((unsigned int *)t16);
    t20 = (t20 * 1U);
    t19 = ((STD_STANDARD) + 708);
    t21 = (t24 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = 1;
    t23 = (t21 + 4U);
    *((int *)t23) = 1;
    t23 = (t21 + 8U);
    *((int *)t23) = 1;
    t13 = (1 - 1);
    t28 = (t13 * 1);
    t28 = (t28 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t28;
    t18 = xsi_base_array_concat(t18, t22, t19, (char)97, t11, t24, (char)97, t14, t17, (char)101);
    t23 = (t17 + 12U);
    t28 = *((unsigned int *)t23);
    t28 = (t28 * 1U);
    t29 = (1U + t28);
    t25 = (t1 + 5571);
    t31 = ((STD_STANDARD) + 708);
    t32 = (t35 + 0U);
    t34 = (t32 + 0U);
    *((int *)t34) = 1;
    t34 = (t32 + 4U);
    *((int *)t34) = 1;
    t34 = (t32 + 8U);
    *((int *)t34) = 1;
    t15 = (1 - 1);
    t39 = (t15 * 1);
    t39 = (t39 + 1);
    t34 = (t32 + 12U);
    *((unsigned int *)t34) = t39;
    t30 = xsi_base_array_concat(t30, t33, t31, (char)97, t18, t22, (char)97, t25, t35, (char)101);
    t34 = (t17 + 12U);
    t39 = *((unsigned int *)t34);
    t39 = (t39 * 1U);
    t40 = (1U + t39);
    t41 = (t40 + 1U);
    t36 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t42, t3);
    t37 = (t42 + 12U);
    t45 = *((unsigned int *)t37);
    t45 = (t45 * 1U);
    t44 = ((STD_STANDARD) + 708);
    t43 = xsi_base_array_concat(t43, t47, t44, (char)97, t30, t33, (char)97, t36, t42, (char)101);
    t46 = (t17 + 12U);
    t50 = *((unsigned int *)t46);
    t50 = (t50 * 1U);
    t51 = (1U + t50);
    t52 = (t51 + 1U);
    t48 = (t42 + 12U);
    t54 = *((unsigned int *)t48);
    t54 = (t54 * 1U);
    t55 = (t52 + t54);
    t49 = (t1 + 5572);
    t57 = ((STD_STANDARD) + 708);
    t58 = (t61 + 0U);
    t60 = (t58 + 0U);
    *((int *)t60) = 1;
    t60 = (t58 + 4U);
    *((int *)t60) = 2;
    t60 = (t58 + 8U);
    *((int *)t60) = 1;
    t27 = (2 - 1);
    t65 = (t27 * 1);
    t65 = (t65 + 1);
    t60 = (t58 + 12U);
    *((unsigned int *)t60) = t65;
    t56 = xsi_base_array_concat(t56, t59, t57, (char)97, t43, t47, (char)97, t49, t61, (char)101);
    t60 = (t17 + 12U);
    t65 = *((unsigned int *)t60);
    t65 = (t65 * 1U);
    t66 = (1U + t65);
    t67 = (t66 + 1U);
    t62 = (t42 + 12U);
    t69 = *((unsigned int *)t62);
    t69 = (t69 * 1U);
    t70 = (t67 + t69);
    t71 = (t70 + 2U);
    t0 = xsi_get_transient_memory(t71);
    memcpy(t0, t56, t71);
    t63 = (t59 + 0U);
    t38 = *((int *)t63);
    t68 = (t59 + 4U);
    t64 = *((int *)t68);
    t72 = (t59 + 8U);
    t73 = *((int *)t72);
    t74 = (t2 + 0U);
    t76 = (t74 + 0U);
    *((int *)t76) = t38;
    t76 = (t74 + 4U);
    *((int *)t76) = t64;
    t76 = (t74 + 8U);
    *((int *)t76) = t73;
    t75 = (t64 - t38);
    t81 = (t75 * t73);
    t81 = (t81 + 1);
    t76 = (t74 + 12U);
    *((unsigned int *)t76) = t81;
    goto LAB1;

LAB8:;
LAB9:    goto LAB2;

LAB10:    goto LAB2;

LAB11:    goto LAB2;

}

char *xilinxcorelib_p_0347517956_sub_800221961_347517956(char *t1, char *t2, int t3, int t4)
{
    char t6[16];
    char t11[16];
    char t16[16];
    char t18[16];
    char t27[16];
    char t29[16];
    char t36[16];
    char t41[16];
    char *t0;
    char *t7;
    char *t8;
    char *t9;
    char *t12;
    char *t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t28;
    char *t30;
    char *t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    unsigned int t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    int t51;
    char *t52;
    int t53;
    char *t54;
    int t55;
    char *t56;
    char *t57;
    int t58;
    unsigned int t59;

LAB0:    t7 = (t6 + 4U);
    *((int *)t7) = t3;
    t8 = (t6 + 8U);
    *((int *)t8) = t4;
    t9 = (t1 + 5576);
    t12 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t11, t4);
    t13 = (t11 + 12U);
    t14 = *((unsigned int *)t13);
    t14 = (t14 * 1U);
    t17 = ((STD_STANDARD) + 708);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 1;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t21 = (1 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t15 = xsi_base_array_concat(t15, t16, t17, (char)97, t9, t18, (char)97, t12, t11, (char)101);
    t20 = (t11 + 12U);
    t22 = *((unsigned int *)t20);
    t22 = (t22 * 1U);
    t23 = (1U + t22);
    t24 = (t1 + 5577);
    t28 = ((STD_STANDARD) + 708);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 1;
    t31 = (t30 + 4U);
    *((int *)t31) = 1;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (1 - 1);
    t33 = (t32 * 1);
    t33 = (t33 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t33;
    t26 = xsi_base_array_concat(t26, t27, t28, (char)97, t15, t16, (char)97, t24, t29, (char)101);
    t31 = (t11 + 12U);
    t33 = *((unsigned int *)t31);
    t33 = (t33 * 1U);
    t34 = (1U + t33);
    t35 = (t34 + 1U);
    t37 = xilinxcorelib_p_0347517956_sub_422448596_347517956(t1, t36, t3);
    t38 = (t36 + 12U);
    t39 = *((unsigned int *)t38);
    t39 = (t39 * 1U);
    t42 = ((STD_STANDARD) + 708);
    t40 = xsi_base_array_concat(t40, t41, t42, (char)97, t26, t27, (char)97, t37, t36, (char)101);
    t43 = (t11 + 12U);
    t44 = *((unsigned int *)t43);
    t44 = (t44 * 1U);
    t45 = (1U + t44);
    t46 = (t45 + 1U);
    t47 = (t36 + 12U);
    t48 = *((unsigned int *)t47);
    t48 = (t48 * 1U);
    t49 = (t46 + t48);
    t0 = xsi_get_transient_memory(t49);
    memcpy(t0, t40, t49);
    t50 = (t41 + 0U);
    t51 = *((int *)t50);
    t52 = (t41 + 4U);
    t53 = *((int *)t52);
    t54 = (t41 + 8U);
    t55 = *((int *)t54);
    t56 = (t2 + 0U);
    t57 = (t56 + 0U);
    *((int *)t57) = t51;
    t57 = (t56 + 4U);
    *((int *)t57) = t53;
    t57 = (t56 + 8U);
    *((int *)t57) = t55;
    t58 = (t53 - t51);
    t59 = (t58 * t55);
    t59 = (t59 + 1);
    t57 = (t56 + 12U);
    *((unsigned int *)t57) = t59;

LAB1:    return t0;
LAB2:;
}

char *xilinxcorelib_p_0347517956_sub_3668885349_347517956(char *t1, char *t2, char *t3, char *t4)
{
    char t6[16];
    char *t0;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    int t23;
    int t24;
    int t25;

LAB0:    t7 = (t6 + 4U);
    t8 = (t3 != 0);
    if (t8 == 1)
        goto LAB3;

LAB2:    t9 = (t6 + 8U);
    *((char **)t9) = t4;
    t10 = (t4 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t12 = (t1 + 5578);
    t14 = 1;
    if (t11 == 0U)
        goto LAB7;

LAB8:    t14 = 0;

LAB9:    if (t14 != 0)
        goto LAB4;

LAB6:    t10 = (t4 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t3, t11);
    t12 = (t4 + 0U);
    t21 = *((int *)t12);
    t13 = (t4 + 4U);
    t23 = *((int *)t13);
    t16 = (t4 + 8U);
    t24 = *((int *)t16);
    t17 = (t2 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = t21;
    t18 = (t17 + 4U);
    *((int *)t18) = t23;
    t18 = (t17 + 8U);
    *((int *)t18) = t24;
    t25 = (t23 - t21);
    t15 = (t25 * t24);
    t15 = (t15 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t15;

LAB1:    return t0;
LAB3:    *((char **)t7) = *((char **)t3);
    goto LAB2;

LAB4:    t18 = (t1 + 1584U);
    t19 = *((char **)t18);
    t0 = xsi_get_transient_memory(3U);
    memcpy(t0, t19, 3U);
    t18 = (t2 + 0U);
    t20 = (t18 + 0U);
    *((int *)t20) = 1;
    t20 = (t18 + 4U);
    *((int *)t20) = 3;
    t20 = (t18 + 8U);
    *((int *)t20) = 1;
    t21 = (3 - 1);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t20 = (t18 + 12U);
    *((unsigned int *)t20) = t22;
    goto LAB1;

LAB5:    xsi_error(ng7);
    t0 = 0;
    goto LAB1;

LAB7:    t15 = 0;

LAB10:    if (t15 < t11)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t16 = (t3 + t15);
    t17 = (t12 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB8;

LAB12:    t15 = (t15 + 1);
    goto LAB10;

LAB13:    goto LAB5;

LAB14:    goto LAB5;

}

char *xilinxcorelib_p_0347517956_sub_1579754207_347517956(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t7[16];
    char t12[16];
    char *t0;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    unsigned int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;

LAB0:    t8 = (t7 + 4U);
    t9 = (t3 != 0);
    if (t9 == 1)
        goto LAB3;

LAB2:    t10 = (t7 + 8U);
    *((char **)t10) = t4;
    t11 = (t7 + 12U);
    *((int *)t11) = t5;
    t13 = xilinxcorelib_p_0347517956_sub_198243544_347517956(t1, t12, t5);
    t14 = (t12 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t0 = xsi_get_transient_memory(t15);
    memcpy(t0, t13, t15);
    t16 = (t12 + 0U);
    t17 = *((int *)t16);
    t18 = (t12 + 4U);
    t19 = *((int *)t18);
    t20 = (t12 + 8U);
    t21 = *((int *)t20);
    t22 = (t2 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = t17;
    t23 = (t22 + 4U);
    *((int *)t23) = t19;
    t23 = (t22 + 8U);
    *((int *)t23) = t21;
    t24 = (t19 - t17);
    t25 = (t24 * t21);
    t25 = (t25 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t25;

LAB1:    return t0;
LAB3:    *((char **)t8) = *((char **)t3);
    goto LAB2;

LAB4:;
}

int xilinxcorelib_p_0347517956_sub_1911765124_347517956(char *t1, char *t2, char *t3)
{
    char t4[72];
    char t5[16];
    char t9[8];
    int t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    int t28;
    int t29;
    int t30;
    char *t31;
    char *t32;
    int t33;
    int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    unsigned char t40;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 256);
    t8 = (t6 + 48U);
    *((char **)t8) = t7;
    t10 = (t6 + 32U);
    *((char **)t10) = t9;
    *((int *)t9) = 0;
    t11 = (t6 + 44U);
    *((unsigned int *)t11) = 4U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 8U);
    *((char **)t14) = t3;
    t16 = (t3 + 0U);
    t17 = *((int *)t16);
    t18 = (t3 + 4U);
    t19 = *((int *)t18);
    t20 = (t3 + 8U);
    t21 = *((int *)t20);
    if (t17 > t19)
        goto LAB8;

LAB9:    if (t21 == -1)
        goto LAB13;

LAB14:    t15 = t17;

LAB10:    t23 = (t3 + 0U);
    t24 = *((int *)t23);
    t25 = (t3 + 4U);
    t26 = *((int *)t25);
    t27 = (t3 + 8U);
    t28 = *((int *)t27);
    if (t24 > t26)
        goto LAB15;

LAB16:    if (t28 == -1)
        goto LAB20;

LAB21:    t22 = t26;

LAB17:    t29 = t22;
    t30 = t15;

LAB4:    if (t29 >= t30)
        goto LAB5;

LAB7:    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t15 = *((int *)t8);
    t0 = t15;

LAB1:    return t0;
LAB3:    *((char **)t12) = *((char **)t2);
    goto LAB2;

LAB5:    t31 = (t6 + 32U);
    t32 = *((char **)t31);
    t33 = *((int *)t32);
    t34 = (t33 * 2);
    t31 = (t6 + 32U);
    t35 = *((char **)t31);
    t31 = (t35 + 0);
    *((int *)t31) = t34;
    t7 = (t3 + 0U);
    t15 = *((int *)t7);
    t8 = (t3 + 8U);
    t17 = *((int *)t8);
    t19 = (t29 - t15);
    t36 = (t19 * t17);
    t10 = (t3 + 4U);
    t21 = *((int *)t10);
    xsi_vhdl_check_range_of_index(t15, t21, t17, t29);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t11 = (t2 + t38);
    t13 = *((unsigned char *)t11);
    t39 = xilinxcorelib_p_0347517956_sub_3217642252_347517956(t1, t13);
    t40 = (t39 == (unsigned char)3);
    if (t40 != 0)
        goto LAB22;

LAB24:    t7 = (t3 + 0U);
    t15 = *((int *)t7);
    t8 = (t3 + 8U);
    t17 = *((int *)t8);
    t19 = (t29 - t15);
    t36 = (t19 * t17);
    t10 = (t3 + 4U);
    t21 = *((int *)t10);
    xsi_vhdl_check_range_of_index(t15, t21, t17, t29);
    t37 = (1U * t36);
    t38 = (0 + t37);
    t11 = (t2 + t38);
    t13 = *((unsigned char *)t11);
    t39 = xilinxcorelib_p_0347517956_sub_3217642252_347517956(t1, t13);
    t40 = (t39 != (unsigned char)2);
    if (t40 != 0)
        goto LAB25;

LAB26:
LAB23:
LAB6:    t15 = (t29 + -1);
    t29 = t15;
    goto LAB4;

LAB8:    if (t21 == 1)
        goto LAB11;

LAB12:    t15 = t19;
    goto LAB10;

LAB11:    t15 = t17;
    goto LAB10;

LAB13:    t15 = t19;
    goto LAB10;

LAB15:    if (t28 == 1)
        goto LAB18;

LAB19:    t22 = t24;
    goto LAB17;

LAB18:    t22 = t26;
    goto LAB17;

LAB20:    t22 = t24;
    goto LAB17;

LAB22:    t16 = (t6 + 32U);
    t18 = *((char **)t16);
    t22 = *((int *)t18);
    t24 = (t22 + 1);
    t16 = (t6 + 32U);
    t20 = *((char **)t16);
    t16 = (t20 + 0);
    *((int *)t16) = t24;
    goto LAB23;

LAB25:    if ((unsigned char)0 == 0)
        goto LAB27;

LAB28:    goto LAB23;

LAB27:    t16 = (t1 + 5578);
    xsi_report(t16, 69U, (unsigned char)1);
    goto LAB28;

LAB29:;
}

char *xilinxcorelib_p_0347517956_sub_422448596_347517956(char *t1, char *t2, int t3)
{
    char t4[424];
    char t5[8];
    char t9[8];
    char t15[8];
    char t21[8];
    char t27[8];
    char t32[16];
    char t53[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;
    char *t55;
    int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned char t75;
    char *t76;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 256);
    t8 = (t6 + 48U);
    *((char **)t8) = t7;
    t10 = (t6 + 32U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 44U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 68U);
    t13 = (t1 + 3524);
    t14 = (t12 + 48U);
    *((char **)t14) = t13;
    t16 = (t12 + 32U);
    *((char **)t16) = t15;
    *((int *)t15) = t3;
    t17 = (t12 + 44U);
    *((unsigned int *)t17) = 4U;
    t18 = (t4 + 132U);
    t19 = ((STD_STANDARD) + 256);
    t20 = (t18 + 48U);
    *((char **)t20) = t19;
    t22 = (t18 + 32U);
    *((char **)t22) = t21;
    *((int *)t21) = 0;
    t23 = (t18 + 44U);
    *((unsigned int *)t23) = 4U;
    t24 = (t4 + 196U);
    t25 = ((STD_STANDARD) + 256);
    t26 = (t24 + 48U);
    *((char **)t26) = t25;
    t28 = (t24 + 32U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 44U);
    *((unsigned int *)t29) = 4U;
    t30 = (t1 + 5647);
    t33 = (t32 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = 1;
    t34 = (t33 + 4U);
    *((int *)t34) = 10;
    t34 = (t33 + 8U);
    *((int *)t34) = 1;
    t35 = (10 - 1);
    t36 = (t35 * 1);
    t36 = (t36 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t36;
    t34 = (t4 + 260U);
    t37 = ((STD_STANDARD) + 708);
    t38 = (t34 + 48U);
    *((char **)t38) = t37;
    t39 = xsi_get_memory(10U);
    t40 = (t34 + 32U);
    *((char **)t40) = t39;
    memcpy(t39, t30, 10U);
    t41 = (t34 + 36U);
    *((char **)t41) = t32;
    t42 = (t34 + 44U);
    *((unsigned int *)t42) = 10U;
    t43 = (t34 + 76U);
    *((char **)t43) = t39;
    t44 = (t34 + 68U);
    *((int *)t44) = 0;
    t45 = (t34 + 72U);
    t46 = (t32 + 12U);
    t36 = *((unsigned int *)t46);
    t47 = (t36 - 1);
    *((int *)t45) = t47;
    t48 = (t34 + 64U);
    t50 = (10U > 2147483644);
    if (t50 == 1)
        goto LAB2;

LAB3:    t51 = (10U + 3);
    t52 = (t51 / 16);
    t49 = t52;

LAB4:    *((unsigned int *)t48) = t49;
    t54 = (t53 + 0U);
    t55 = (t54 + 0U);
    *((int *)t55) = 1;
    t55 = (t54 + 4U);
    *((int *)t55) = 5;
    t55 = (t54 + 8U);
    *((int *)t55) = 1;
    t56 = (5 - 1);
    t57 = (t56 * 1);
    t57 = (t57 + 1);
    t55 = (t54 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t4 + 340U);
    t58 = ((STD_STANDARD) + 708);
    t59 = (t55 + 48U);
    *((char **)t59) = t58;
    t60 = xsi_get_memory(5U);
    t61 = (t55 + 32U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t53);
    t62 = (t55 + 36U);
    *((char **)t62) = t53;
    t63 = (t55 + 44U);
    *((unsigned int *)t63) = 5U;
    t64 = (t55 + 76U);
    *((char **)t64) = t60;
    t65 = (t55 + 68U);
    *((int *)t65) = 0;
    t66 = (t55 + 72U);
    t67 = (t53 + 12U);
    t57 = *((unsigned int *)t67);
    t68 = (t57 - 1);
    *((int *)t66) = t68;
    t69 = (t55 + 64U);
    t71 = (5U > 2147483644);
    if (t71 == 1)
        goto LAB5;

LAB6:    t72 = (5U + 3);
    t73 = (t72 / 16);
    t70 = t73;

LAB7:    *((unsigned int *)t69) = t70;
    t74 = (t5 + 4U);
    *((int *)t74) = t3;
    t75 = (t3 >= 0);
    if (t75 == 0)
        goto LAB8;

LAB9:    t75 = (t3 == 0);
    if (t75 != 0)
        goto LAB10;

LAB12:    t75 = (t3 < 10);
    if (t75 != 0)
        goto LAB14;

LAB15:    t75 = (t3 < 100);
    if (t75 != 0)
        goto LAB16;

LAB17:    t75 = (t3 < 1000);
    if (t75 != 0)
        goto LAB18;

LAB19:    t75 = (t3 < 10000);
    if (t75 != 0)
        goto LAB20;

LAB21:    t75 = (t3 < 100000);
    if (t75 != 0)
        goto LAB22;

LAB23:    if ((unsigned char)0 == 0)
        goto LAB24;

LAB25:
LAB11:    t7 = (t18 + 32U);
    t8 = *((char **)t7);
    t35 = *((int *)t8);
    t75 = (t35 > 0);
    if (t75 != 0)
        goto LAB26;

LAB28:
LAB27:    t7 = (t55 + 32U);
    t8 = *((char **)t7);
    t7 = (t53 + 0U);
    t35 = *((int *)t7);
    t36 = (1 - t35);
    t10 = (t18 + 32U);
    t11 = *((char **)t10);
    t47 = *((int *)t11);
    t10 = (t53 + 4U);
    t56 = *((int *)t10);
    t13 = (t53 + 8U);
    t68 = *((int *)t13);
    xsi_vhdl_check_range_of_slice(t35, t56, t68, 1, t47, 1);
    t49 = (t36 * 1U);
    t50 = (0 + t49);
    t14 = (t8 + t50);
    t16 = (t18 + 32U);
    t17 = *((char **)t16);
    t78 = *((int *)t17);
    t79 = (t78 - 1);
    t51 = (t79 * 1);
    t51 = (t51 + 1);
    t52 = (1U * t51);
    t0 = xsi_get_transient_memory(t52);
    memcpy(t0, t14, t52);
    t16 = (t18 + 32U);
    t19 = *((char **)t16);
    t80 = *((int *)t19);
    t16 = (t2 + 0U);
    t20 = (t16 + 0U);
    *((int *)t20) = 1;
    t20 = (t16 + 4U);
    *((int *)t20) = t80;
    t20 = (t16 + 8U);
    *((int *)t20) = 1;
    t81 = (t80 - 1);
    t57 = (t81 * 1);
    t57 = (t57 + 1);
    t20 = (t16 + 12U);
    *((unsigned int *)t20) = t57;

LAB1:    t7 = (t55 + 44);
    t35 = *((int *)t7);
    t8 = (t55 + 76U);
    t10 = *((char **)t8);
    xsi_put_memory(t35, t10);
    return t0;
LAB2:    t49 = 2147483647;
    goto LAB4;

LAB5:    t70 = 2147483647;
    goto LAB7;

LAB8:    t76 = (t1 + 5657);
    xsi_report(t76, 54U, (unsigned char)2);
    goto LAB9;

LAB10:    t7 = (t1 + 5711);
    t0 = xsi_get_transient_memory(1U);
    memcpy(t0, t7, 1U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 1;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t35 = (1 - 1);
    t36 = (t35 * 1);
    t36 = (t36 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t36;
    goto LAB1;

LAB13:    goto LAB11;

LAB14:    t7 = (t18 + 32U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 1;
    goto LAB11;

LAB16:    t7 = (t18 + 32U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 2;
    goto LAB11;

LAB18:    t7 = (t18 + 32U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 3;
    goto LAB11;

LAB20:    t7 = (t18 + 32U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 4;
    goto LAB11;

LAB22:    t7 = (t18 + 32U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 5;
    goto LAB11;

LAB24:    t7 = (t1 + 5712);
    xsi_report(t7, 56U, (unsigned char)2);
    goto LAB25;

LAB26:    t7 = (t18 + 32U);
    t10 = *((char **)t7);
    t47 = *((int *)t10);
    t7 = (t24 + 32U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    *((int *)t7) = t47;

LAB29:    t7 = (t12 + 32U);
    t8 = *((char **)t7);
    t35 = *((int *)t8);
    t75 = (t35 != 0);
    if (t75 != 0)
        goto LAB30;

LAB32:    goto LAB27;

LAB30:    t7 = (t12 + 32U);
    t10 = *((char **)t7);
    t47 = *((int *)t10);
    t56 = xsi_vhdl_mod(t47, 10);
    t7 = (t6 + 32U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    *((int *)t7) = t56;
    t7 = (t34 + 32U);
    t8 = *((char **)t7);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t35 = *((int *)t10);
    t47 = (t35 + 1);
    t7 = (t32 + 0U);
    t56 = *((int *)t7);
    t11 = (t32 + 8U);
    t68 = *((int *)t11);
    t78 = (t47 - t56);
    t36 = (t78 * t68);
    t13 = (t32 + 4U);
    t79 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t56, t79, t68, t47);
    t49 = (1U * t36);
    t50 = (0 + t49);
    t14 = (t8 + t50);
    t75 = *((unsigned char *)t14);
    t16 = (t55 + 32U);
    t17 = *((char **)t16);
    t16 = (t24 + 32U);
    t19 = *((char **)t16);
    t80 = *((int *)t19);
    t16 = (t53 + 0U);
    t81 = *((int *)t16);
    t20 = (t53 + 8U);
    t82 = *((int *)t20);
    t83 = (t80 - t81);
    t51 = (t83 * t82);
    t22 = (t53 + 4U);
    t84 = *((int *)t22);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t52 = (1U * t51);
    t57 = (0 + t52);
    t23 = (t17 + t57);
    *((unsigned char *)t23) = t75;
    t7 = (t12 + 32U);
    t8 = *((char **)t7);
    t35 = *((int *)t8);
    t47 = (t35 / 10);
    t7 = (t12 + 32U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t47;
    t7 = (t24 + 32U);
    t8 = *((char **)t7);
    t35 = *((int *)t8);
    t47 = (t35 - 1);
    t7 = (t24 + 32U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t47;
    goto LAB29;

LAB31:;
LAB33:;
}

char *xilinxcorelib_p_0347517956_sub_198243544_347517956(char *t1, char *t2, int t3)
{
    char t4[424];
    char t5[8];
    char t9[8];
    char t15[8];
    char t21[8];
    char t27[8];
    char t32[16];
    char t55[16];
    char *t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t56;
    char *t57;
    int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned char t77;
    char *t78;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;

LAB0:    t6 = (t4 + 4U);
    t7 = ((STD_STANDARD) + 256);
    t8 = (t6 + 48U);
    *((char **)t8) = t7;
    t10 = (t6 + 32U);
    *((char **)t10) = t9;
    xsi_type_set_default_value(t7, t9, 0);
    t11 = (t6 + 44U);
    *((unsigned int *)t11) = 4U;
    t12 = (t4 + 68U);
    t13 = ((STD_STANDARD) + 256);
    t14 = (t12 + 48U);
    *((char **)t14) = t13;
    t16 = (t12 + 32U);
    *((char **)t16) = t15;
    *((int *)t15) = t3;
    t17 = (t12 + 44U);
    *((unsigned int *)t17) = 4U;
    t18 = (t4 + 132U);
    t19 = ((STD_STANDARD) + 256);
    t20 = (t18 + 48U);
    *((char **)t20) = t19;
    t22 = (t18 + 32U);
    *((char **)t22) = t21;
    *((int *)t21) = 0;
    t23 = (t18 + 44U);
    *((unsigned int *)t23) = 4U;
    t24 = (t4 + 196U);
    t25 = ((STD_STANDARD) + 256);
    t26 = (t24 + 48U);
    *((char **)t26) = t25;
    t28 = (t24 + 32U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 44U);
    *((unsigned int *)t29) = 4U;
    t30 = (t1 + 5768);
    t33 = (t32 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = 1;
    t34 = (t33 + 4U);
    *((int *)t34) = 10;
    t34 = (t33 + 8U);
    *((int *)t34) = 1;
    t35 = (10 - 1);
    t36 = (t35 * 1);
    t36 = (t36 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t36;
    t34 = (t4 + 260U);
    t37 = ((STD_STANDARD) + 708);
    t38 = (t34 + 48U);
    *((char **)t38) = t37;
    t39 = xsi_get_memory(10U);
    t40 = (t34 + 32U);
    *((char **)t40) = t39;
    memcpy(t39, t30, 10U);
    t41 = (t34 + 36U);
    *((char **)t41) = t32;
    t42 = (t34 + 44U);
    *((unsigned int *)t42) = 10U;
    t43 = (t34 + 76U);
    *((char **)t43) = t39;
    t44 = (t34 + 68U);
    *((int *)t44) = 0;
    t45 = (t34 + 72U);
    t46 = (t32 + 12U);
    t36 = *((unsigned int *)t46);
    t47 = (t36 - 1);
    *((int *)t45) = t47;
    t48 = (t34 + 64U);
    t50 = (10U > 2147483644);
    if (t50 == 1)
        goto LAB2;

LAB3:    t51 = (10U + 3);
    t52 = (t51 / 16);
    t49 = t52;

LAB4:    *((unsigned int *)t48) = t49;
    t53 = (t1 + 5778);
    t56 = (t55 + 0U);
    t57 = (t56 + 0U);
    *((int *)t57) = 1;
    t57 = (t56 + 4U);
    *((int *)t57) = 3;
    t57 = (t56 + 8U);
    *((int *)t57) = 1;
    t58 = (3 - 1);
    t59 = (t58 * 1);
    t59 = (t59 + 1);
    t57 = (t56 + 12U);
    *((unsigned int *)t57) = t59;
    t57 = (t4 + 340U);
    t60 = ((STD_STANDARD) + 708);
    t61 = (t57 + 48U);
    *((char **)t61) = t60;
    t62 = xsi_get_memory(3U);
    t63 = (t57 + 32U);
    *((char **)t63) = t62;
    memcpy(t62, t53, 3U);
    t64 = (t57 + 36U);
    *((char **)t64) = t55;
    t65 = (t57 + 44U);
    *((unsigned int *)t65) = 3U;
    t66 = (t57 + 76U);
    *((char **)t66) = t62;
    t67 = (t57 + 68U);
    *((int *)t67) = 0;
    t68 = (t57 + 72U);
    t69 = (t55 + 12U);
    t59 = *((unsigned int *)t69);
    t70 = (t59 - 1);
    *((int *)t68) = t70;
    t71 = (t57 + 64U);
    t73 = (3U > 2147483644);
    if (t73 == 1)
        goto LAB5;

LAB6:    t74 = (3U + 3);
    t75 = (t74 / 16);
    t72 = t75;

LAB7:    *((unsigned int *)t71) = t72;
    t76 = (t5 + 4U);
    *((int *)t76) = t3;
    t77 = (t3 >= 0);
    if (t77 == 0)
        goto LAB8;

LAB9:    t77 = (t3 < 999);
    if (t77 == 0)
        goto LAB10;

LAB11:    t77 = (t3 == 0);
    if (t77 != 0)
        goto LAB12;

LAB14:    t7 = (t24 + 32U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = 3;

LAB16:    t7 = (t12 + 32U);
    t8 = *((char **)t7);
    t35 = *((int *)t8);
    t77 = (t35 != 0);
    if (t77 != 0)
        goto LAB17;

LAB19:
LAB13:    t7 = (t57 + 32U);
    t8 = *((char **)t7);
    t7 = (t55 + 12U);
    t36 = *((unsigned int *)t7);
    t36 = (t36 * 1U);
    t0 = xsi_get_transient_memory(t36);
    memcpy(t0, t8, t36);
    t10 = (t55 + 0U);
    t35 = *((int *)t10);
    t11 = (t55 + 4U);
    t47 = *((int *)t11);
    t13 = (t55 + 8U);
    t58 = *((int *)t13);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = t35;
    t16 = (t14 + 4U);
    *((int *)t16) = t47;
    t16 = (t14 + 8U);
    *((int *)t16) = t58;
    t70 = (t47 - t35);
    t49 = (t70 * t58);
    t49 = (t49 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t49;

LAB1:    t7 = (t57 + 44);
    t35 = *((int *)t7);
    t8 = (t57 + 76U);
    t10 = *((char **)t8);
    xsi_put_memory(t35, t10);
    return t0;
LAB2:    t49 = 2147483647;
    goto LAB4;

LAB5:    t72 = 2147483647;
    goto LAB7;

LAB8:    t78 = (t1 + 5781);
    xsi_report(t78, 55U, (unsigned char)2);
    goto LAB9;

LAB10:    t7 = (t1 + 5836);
    xsi_report(t7, 53U, (unsigned char)2);
    goto LAB11;

LAB12:    t7 = (t1 + 5889);
    t0 = xsi_get_transient_memory(3U);
    memcpy(t0, t7, 3U);
    t10 = (t2 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 1;
    t11 = (t10 + 4U);
    *((int *)t11) = 3;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t35 = (3 - 1);
    t36 = (t35 * 1);
    t36 = (t36 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t36;
    goto LAB1;

LAB15:    goto LAB13;

LAB17:    t7 = (t12 + 32U);
    t10 = *((char **)t7);
    t47 = *((int *)t10);
    t58 = xsi_vhdl_mod(t47, 10);
    t7 = (t6 + 32U);
    t11 = *((char **)t7);
    t7 = (t11 + 0);
    *((int *)t7) = t58;
    t7 = (t34 + 32U);
    t8 = *((char **)t7);
    t7 = (t6 + 32U);
    t10 = *((char **)t7);
    t35 = *((int *)t10);
    t47 = (t35 + 1);
    t7 = (t32 + 0U);
    t58 = *((int *)t7);
    t11 = (t32 + 8U);
    t70 = *((int *)t11);
    t80 = (t47 - t58);
    t36 = (t80 * t70);
    t13 = (t32 + 4U);
    t81 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t58, t81, t70, t47);
    t49 = (1U * t36);
    t50 = (0 + t49);
    t14 = (t8 + t50);
    t77 = *((unsigned char *)t14);
    t16 = (t57 + 32U);
    t17 = *((char **)t16);
    t16 = (t24 + 32U);
    t19 = *((char **)t16);
    t82 = *((int *)t19);
    t16 = (t55 + 0U);
    t83 = *((int *)t16);
    t20 = (t55 + 8U);
    t84 = *((int *)t20);
    t85 = (t82 - t83);
    t51 = (t85 * t84);
    t22 = (t55 + 4U);
    t86 = *((int *)t22);
    xsi_vhdl_check_range_of_index(t83, t86, t84, t82);
    t52 = (1U * t51);
    t59 = (0 + t52);
    t23 = (t17 + t59);
    *((unsigned char *)t23) = t77;
    t7 = (t12 + 32U);
    t8 = *((char **)t7);
    t35 = *((int *)t8);
    t47 = (t35 / 10);
    t7 = (t12 + 32U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t47;
    t7 = (t24 + 32U);
    t8 = *((char **)t7);
    t35 = *((int *)t8);
    t47 = (t35 - 1);
    t7 = (t24 + 32U);
    t10 = *((char **)t7);
    t7 = (t10 + 0);
    *((int *)t7) = t47;
    goto LAB16;

LAB18:;
LAB20:;
}

char *xilinxcorelib_p_0347517956_sub_989635842_347517956(char *t1, char *t2, int t3, int t4)
{
    char t5[232];
    char t6[16];
    char t10[8];
    char t15[16];
    char t38[16];
    char *t0;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
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
    int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    int t61;
    int t62;
    int t63;
    int t64;
    char *t65;
    char *t66;
    int t67;
    unsigned char t68;
    char *t69;
    int t70;
    char *t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned char t78;
    char *t79;
    char *t80;
    int t81;
    int t82;
    char *t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;

LAB0:    t7 = (t5 + 4U);
    t8 = ((STD_STANDARD) + 256);
    t9 = (t7 + 48U);
    *((char **)t9) = t8;
    t11 = (t7 + 32U);
    *((char **)t11) = t10;
    *((int *)t10) = t3;
    t12 = (t7 + 44U);
    *((unsigned int *)t12) = 4U;
    t13 = (1 - t4);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t14 = (t14 * 1U);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t4;
    t17 = (t16 + 4U);
    *((int *)t17) = 1;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (1 - t4);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 68U);
    t20 = ((STD_STANDARD) + 708);
    t21 = (t17 + 48U);
    *((char **)t21) = t20;
    t22 = xsi_get_memory(t14);
    t23 = (t17 + 32U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t15);
    t24 = (t17 + 36U);
    *((char **)t24) = t15;
    t25 = (t17 + 44U);
    *((unsigned int *)t25) = t14;
    t26 = (t17 + 76U);
    *((char **)t26) = t22;
    t27 = (t17 + 68U);
    *((int *)t27) = 0;
    t28 = (t17 + 72U);
    t29 = (t15 + 12U);
    t19 = *((unsigned int *)t29);
    t30 = (t19 - 1);
    *((int *)t28) = t30;
    t31 = (t17 + 64U);
    t33 = (t14 > 2147483644);
    if (t33 == 1)
        goto LAB2;

LAB3:    t34 = (t14 + 3);
    t35 = (t34 / 16);
    t32 = t35;

LAB4:    *((unsigned int *)t31) = t32;
    t36 = (t1 + 5892);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 2;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t41 = (2 - 1);
    t42 = (t41 * 1);
    t42 = (t42 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t42;
    t40 = (t5 + 148U);
    t43 = ((STD_STANDARD) + 708);
    t44 = (t40 + 48U);
    *((char **)t44) = t43;
    t45 = xsi_get_memory(2U);
    t46 = (t40 + 32U);
    *((char **)t46) = t45;
    memcpy(t45, t36, 2U);
    t47 = (t40 + 36U);
    *((char **)t47) = t38;
    t48 = (t40 + 44U);
    *((unsigned int *)t48) = 2U;
    t49 = (t40 + 76U);
    *((char **)t49) = t45;
    t50 = (t40 + 68U);
    *((int *)t50) = 0;
    t51 = (t40 + 72U);
    t52 = (t38 + 12U);
    t42 = *((unsigned int *)t52);
    t53 = (t42 - 1);
    *((int *)t51) = t53;
    t54 = (t40 + 64U);
    t56 = (2U > 2147483644);
    if (t56 == 1)
        goto LAB5;

LAB6:    t57 = (2U + 3);
    t58 = (t57 / 16);
    t55 = t58;

LAB7:    *((unsigned int *)t54) = t55;
    t59 = (t6 + 4U);
    *((int *)t59) = t3;
    t60 = (t6 + 8U);
    *((int *)t60) = t4;
    t61 = (t4 - 1);
    t62 = t61;
    t63 = 0;

LAB8:    if (t62 >= t63)
        goto LAB9;

LAB11:    t8 = (t17 + 32U);
    t9 = *((char **)t8);
    t8 = (t15 + 12U);
    t14 = *((unsigned int *)t8);
    t14 = (t14 * 1U);
    t0 = xsi_get_transient_memory(t14);
    memcpy(t0, t9, t14);
    t11 = (t15 + 0U);
    t13 = *((int *)t11);
    t12 = (t15 + 4U);
    t18 = *((int *)t12);
    t16 = (t15 + 8U);
    t30 = *((int *)t16);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t13;
    t21 = (t20 + 4U);
    *((int *)t21) = t18;
    t21 = (t20 + 8U);
    *((int *)t21) = t30;
    t41 = (t18 - t13);
    t19 = (t41 * t30);
    t19 = (t19 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t19;

LAB1:    t8 = (t17 + 44);
    t13 = *((int *)t8);
    t9 = (t17 + 76U);
    t11 = *((char **)t9);
    xsi_put_memory(t13, t11);
    return t0;
LAB2:    t32 = 2147483647;
    goto LAB4;

LAB5:    t55 = 2147483647;
    goto LAB7;

LAB9:    t64 = xsi_vhdl_pow(2, t62);
    t65 = (t7 + 32U);
    t66 = *((char **)t65);
    t67 = *((int *)t66);
    t68 = (t64 > t67);
    if (t68 != 0)
        goto LAB12;

LAB14:    t8 = (t40 + 32U);
    t9 = *((char **)t8);
    t8 = (t38 + 0U);
    t13 = *((int *)t8);
    t11 = (t38 + 8U);
    t18 = *((int *)t11);
    t30 = (2 - t13);
    t14 = (t30 * t18);
    t19 = (1U * t14);
    t32 = (0 + t19);
    t12 = (t9 + t32);
    t68 = *((unsigned char *)t12);
    t16 = (t17 + 32U);
    t20 = *((char **)t16);
    t41 = (t62 + 1);
    t16 = (t15 + 0U);
    t53 = *((int *)t16);
    t21 = (t15 + 8U);
    t61 = *((int *)t21);
    t64 = (t41 - t53);
    t33 = (t64 * t61);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t22 = (t20 + t35);
    *((unsigned char *)t22) = t68;
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = *((int *)t9);
    t18 = xsi_vhdl_pow(2, t62);
    t30 = (t13 - t18);
    t8 = (t7 + 32U);
    t11 = *((char **)t8);
    t8 = (t11 + 0);
    *((int *)t8) = t30;

LAB13:
LAB10:    t13 = (t62 + -1);
    t62 = t13;
    goto LAB8;

LAB12:    t65 = (t40 + 32U);
    t69 = *((char **)t65);
    t65 = (t38 + 0U);
    t70 = *((int *)t65);
    t71 = (t38 + 8U);
    t72 = *((int *)t71);
    t73 = (1 - t70);
    t74 = (t73 * t72);
    t75 = (1U * t74);
    t76 = (0 + t75);
    t77 = (t69 + t76);
    t78 = *((unsigned char *)t77);
    t79 = (t17 + 32U);
    t80 = *((char **)t79);
    t81 = (t62 + 1);
    t79 = (t15 + 0U);
    t82 = *((int *)t79);
    t83 = (t15 + 8U);
    t84 = *((int *)t83);
    t85 = (t81 - t82);
    t86 = (t85 * t84);
    t87 = (1U * t86);
    t88 = (0 + t87);
    t89 = (t80 + t88);
    *((unsigned char *)t89) = t78;
    goto LAB13;

LAB15:;
}

int xilinxcorelib_p_0347517956_sub_2029371606_347517956(char *t1, char *t2)
{
    char t3[72];
    char t4[16];
    char t5[16];
    char t12[8];
    int t0;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned char t27;
    int t28;
    int t29;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 15;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t8 = (0 - 15);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t3 + 4U);
    t10 = ((STD_STANDARD) + 256);
    t11 = (t7 + 48U);
    *((char **)t11) = t10;
    t13 = (t7 + 32U);
    *((char **)t13) = t12;
    xsi_type_set_default_value(t10, t12, 0);
    t14 = (t7 + 44U);
    *((unsigned int *)t14) = 4U;
    t15 = (t4 + 4U);
    t16 = (t2 != 0);
    if (t16 == 1)
        goto LAB3;

LAB2:    t17 = (t4 + 8U);
    *((char **)t17) = t5;
    t18 = (t7 + 32U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    *((int *)t18) = 0;
    t8 = 15;
    t20 = 0;

LAB4:    if (t8 >= t20)
        goto LAB5;

LAB7:    t6 = (t7 + 32U);
    t10 = *((char **)t6);
    t8 = *((int *)t10);
    t0 = t8;

LAB1:    return t0;
LAB3:    *((char **)t15) = *((char **)t2);
    goto LAB2;

LAB5:    t6 = (t7 + 32U);
    t10 = *((char **)t6);
    t21 = *((int *)t10);
    t22 = (2 * t21);
    t6 = (t7 + 32U);
    t11 = *((char **)t6);
    t6 = (t11 + 0);
    *((int *)t6) = t22;
    t6 = (t5 + 0U);
    t21 = *((int *)t6);
    t10 = (t5 + 8U);
    t22 = *((int *)t10);
    t23 = (t8 - t21);
    t9 = (t23 * t22);
    t11 = (t5 + 4U);
    t24 = *((int *)t11);
    xsi_vhdl_check_range_of_index(t21, t24, t22, t8);
    t25 = (1U * t9);
    t26 = (0 + t25);
    t13 = (t2 + t26);
    t16 = *((unsigned char *)t13);
    t27 = (t16 == (unsigned char)3);
    if (t27 != 0)
        goto LAB8;

LAB10:    t6 = (t5 + 0U);
    t21 = *((int *)t6);
    t10 = (t5 + 8U);
    t22 = *((int *)t10);
    t23 = (t8 - t21);
    t9 = (t23 * t22);
    t11 = (t5 + 4U);
    t24 = *((int *)t11);
    xsi_vhdl_check_range_of_index(t21, t24, t22, t8);
    t25 = (1U * t9);
    t26 = (0 + t25);
    t13 = (t2 + t26);
    t16 = *((unsigned char *)t13);
    t27 = (t16 != (unsigned char)2);
    if (t27 != 0)
        goto LAB11;

LAB12:
LAB9:
LAB6:    t21 = (t8 + -1);
    t8 = t21;
    goto LAB4;

LAB8:    t14 = (t7 + 32U);
    t18 = *((char **)t14);
    t28 = *((int *)t18);
    t29 = (t28 + 1);
    t14 = (t7 + 32U);
    t19 = *((char **)t14);
    t14 = (t19 + 0);
    *((int *)t14) = t29;
    goto LAB9;

LAB11:    if ((unsigned char)0 == 0)
        goto LAB13;

LAB14:    goto LAB9;

LAB13:    t14 = (t1 + 5894);
    xsi_report(t14, 57U, (unsigned char)1);
    goto LAB14;

LAB15:;
}

char *xilinxcorelib_p_0347517956_sub_1067201887_347517956(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[72];
    char t7[16];
    char t11[16];
    char *t0;
    int t8;
    int t9;
    unsigned int t10;
    int t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    int t29;
    char *t30;
    int t31;
    char *t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    char *t42;
    char *t43;
    int t44;
    unsigned int t45;

LAB0:    t8 = (t5 - 1);
    t9 = (0 - t8);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t10 = (t10 * 1U);
    t12 = (t5 - 1);
    t13 = (t11 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = t12;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - t12);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t6 + 4U);
    t17 = ((IEEE_P_2592010699) + 2244);
    t18 = (t14 + 48U);
    *((char **)t18) = t17;
    t19 = (char *)alloca(t10);
    t20 = (t14 + 32U);
    *((char **)t20) = t19;
    xsi_type_set_default_value(t17, t19, t11);
    t21 = (t14 + 36U);
    *((char **)t21) = t11;
    t22 = (t14 + 44U);
    *((unsigned int *)t22) = t10;
    t23 = (t7 + 4U);
    t24 = (t3 != 0);
    if (t24 == 1)
        goto LAB3;

LAB2:    t25 = (t7 + 8U);
    *((char **)t25) = t4;
    t26 = (t7 + 12U);
    *((int *)t26) = t5;
    t27 = (t4 + 0U);
    t28 = *((int *)t27);
    t29 = (t5 - 1);
    t16 = (t28 - t29);
    t30 = (t4 + 4U);
    t31 = *((int *)t30);
    t32 = (t4 + 8U);
    t33 = *((int *)t32);
    xsi_vhdl_check_range_of_slice(t28, t31, t33, t29, 0, -1);
    t34 = (t16 * 1U);
    t35 = (0 + t34);
    t36 = (t3 + t35);
    t37 = (t5 - 1);
    t38 = (0 - t37);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t40 = (1U * t39);
    t0 = xsi_get_transient_memory(t40);
    memcpy(t0, t36, t40);
    t41 = (t5 - 1);
    t42 = (t2 + 0U);
    t43 = (t42 + 0U);
    *((int *)t43) = t41;
    t43 = (t42 + 4U);
    *((int *)t43) = 0;
    t43 = (t42 + 8U);
    *((int *)t43) = -1;
    t44 = (0 - t41);
    t45 = (t44 * -1);
    t45 = (t45 + 1);
    t43 = (t42 + 12U);
    *((unsigned int *)t43) = t45;

LAB1:    return t0;
LAB3:    *((char **)t23) = *((char **)t3);
    goto LAB2;

LAB4:;
}

char *xilinxcorelib_p_0347517956_sub_4127800062_347517956(char *t1, char *t2, char *t3, char *t4, int t5)
{
    char t6[136];
    char t7[16];
    char t11[8];
    char t20[16];
    char *t0;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    int t18;
    unsigned int t19;
    char *t21;
    int t22;
    int t23;
    char *t24;
    int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    unsigned char t44;
    char *t45;
    int t46;
    char *t47;
    int t48;
    int t49;
    unsigned int t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned char t56;
    char *t57;
    char *t58;
    int t59;
    char *t60;
    int t61;
    int t62;
    unsigned int t63;
    char *t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;

LAB0:    t8 = (t6 + 4U);
    t9 = ((STD_STANDARD) + 256);
    t10 = (t8 + 48U);
    *((char **)t10) = t9;
    t12 = (t8 + 32U);
    *((char **)t12) = t11;
    *((int *)t11) = t5;
    t13 = (t8 + 44U);
    *((unsigned int *)t13) = 4U;
    t14 = (t8 + 32U);
    t15 = *((char **)t14);
    t16 = *((int *)t15);
    t17 = (t16 - 1);
    t18 = (0 - t17);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t19 = (t19 * 1U);
    t14 = (t8 + 32U);
    t21 = *((char **)t14);
    t22 = *((int *)t21);
    t23 = (t22 - 1);
    t14 = (t20 + 0U);
    t24 = (t14 + 0U);
    *((int *)t24) = t23;
    t24 = (t14 + 4U);
    *((int *)t24) = 0;
    t24 = (t14 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - t23);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t14 + 12U);
    *((unsigned int *)t24) = t26;
    t24 = (t6 + 68U);
    t27 = ((IEEE_P_2592010699) + 2244);
    t28 = (t24 + 48U);
    *((char **)t28) = t27;
    t29 = (char *)alloca(t19);
    t30 = (t24 + 32U);
    *((char **)t30) = t29;
    xsi_type_set_default_value(t27, t29, t20);
    t31 = (t24 + 36U);
    *((char **)t31) = t20;
    t32 = (t24 + 44U);
    *((unsigned int *)t32) = t19;
    t33 = (t7 + 4U);
    t34 = (t3 != 0);
    if (t34 == 1)
        goto LAB3;

LAB2:    t35 = (t7 + 8U);
    *((char **)t35) = t4;
    t36 = (t7 + 12U);
    *((int *)t36) = t5;
    t37 = (t8 + 32U);
    t38 = *((char **)t37);
    t39 = *((int *)t38);
    t40 = (t39 - 1);
    t41 = 0;
    t42 = t40;

LAB4:    if (t41 <= t42)
        goto LAB5;

LAB7:    t9 = (t24 + 32U);
    t10 = *((char **)t9);
    t9 = (t20 + 12U);
    t19 = *((unsigned int *)t9);
    t19 = (t19 * 1U);
    t0 = xsi_get_transient_memory(t19);
    memcpy(t0, t10, t19);
    t12 = (t20 + 0U);
    t16 = *((int *)t12);
    t13 = (t20 + 4U);
    t17 = *((int *)t13);
    t14 = (t20 + 8U);
    t18 = *((int *)t14);
    t15 = (t2 + 0U);
    t21 = (t15 + 0U);
    *((int *)t21) = t16;
    t21 = (t15 + 4U);
    *((int *)t21) = t17;
    t21 = (t15 + 8U);
    *((int *)t21) = t18;
    t22 = (t17 - t16);
    t26 = (t22 * t18);
    t26 = (t26 + 1);
    t21 = (t15 + 12U);
    *((unsigned int *)t21) = t26;

LAB1:    return t0;
LAB3:    *((char **)t33) = *((char **)t3);
    goto LAB2;

LAB5:    t37 = (t4 + 12U);
    t26 = *((unsigned int *)t37);
    t43 = (t26 - 1);
    t44 = (t41 <= t43);
    if (t44 != 0)
        goto LAB8;

LAB10:    t9 = (t4 + 0U);
    t17 = *((int *)t9);
    t10 = (t4 + 4U);
    t18 = *((int *)t10);
    t12 = (t4 + 8U);
    t22 = *((int *)t12);
    if (t17 > t18)
        goto LAB11;

LAB12:    if (t22 == -1)
        goto LAB16;

LAB17:    t16 = t18;

LAB13:    t13 = (t4 + 0U);
    t23 = *((int *)t13);
    t14 = (t4 + 8U);
    t25 = *((int *)t14);
    t39 = (t16 - t23);
    t19 = (t39 * t25);
    t26 = (1U * t19);
    t50 = (0 + t26);
    t15 = (t3 + t50);
    t34 = *((unsigned char *)t15);
    t21 = (t24 + 32U);
    t27 = *((char **)t21);
    t21 = (t20 + 0U);
    t40 = *((int *)t21);
    t28 = (t20 + 8U);
    t43 = *((int *)t28);
    t46 = (t41 - t40);
    t53 = (t46 * t43);
    t30 = (t20 + 4U);
    t48 = *((int *)t30);
    xsi_vhdl_check_range_of_index(t40, t48, t43, t41);
    t54 = (1U * t53);
    t63 = (0 + t54);
    t31 = (t27 + t63);
    *((unsigned char *)t31) = t34;

LAB9:
LAB6:    t16 = (t41 + 1);
    t41 = t16;
    goto LAB4;

LAB8:    t45 = (t4 + 0U);
    t46 = *((int *)t45);
    t47 = (t4 + 8U);
    t48 = *((int *)t47);
    t49 = (t41 - t46);
    t50 = (t49 * t48);
    t51 = (t4 + 4U);
    t52 = *((int *)t51);
    xsi_vhdl_check_range_of_index(t46, t52, t48, t41);
    t53 = (1U * t50);
    t54 = (0 + t53);
    t55 = (t3 + t54);
    t56 = *((unsigned char *)t55);
    t57 = (t24 + 32U);
    t58 = *((char **)t57);
    t57 = (t20 + 0U);
    t59 = *((int *)t57);
    t60 = (t20 + 8U);
    t61 = *((int *)t60);
    t62 = (t41 - t59);
    t63 = (t62 * t61);
    t64 = (t20 + 4U);
    t65 = *((int *)t64);
    xsi_vhdl_check_range_of_index(t59, t65, t61, t41);
    t66 = (1U * t63);
    t67 = (0 + t66);
    t68 = (t58 + t67);
    *((unsigned char *)t68) = t56;
    goto LAB9;

LAB11:    if (t22 == 1)
        goto LAB14;

LAB15:    t16 = t17;
    goto LAB13;

LAB14:    t16 = t18;
    goto LAB13;

LAB16:    t16 = t17;
    goto LAB13;

LAB18:;
}

char *xilinxcorelib_p_0347517956_sub_3325061799_347517956(char *t1, char *t2, char *t3, char *t4, int t5, unsigned char t6)
{
    char t7[72];
    char t8[24];
    char t27[16];
    char *t0;
    int t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    int t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    int t25;
    unsigned int t26;
    int t28;
    int t29;
    char *t30;
    int t31;
    char *t32;
    int t33;
    char *t34;
    int t35;
    int t36;
    int t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    char *t42;
    int t43;
    char *t44;
    char *t45;
    int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    int t61;
    int t62;
    char *t63;
    int t64;
    char *t65;
    int t66;
    char *t67;
    int t68;
    int t69;
    char *t70;
    int t71;
    char *t72;
    int t73;
    char *t74;
    int t75;
    char *t76;
    int t77;
    char *t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;

LAB0:    t9 = (t5 - 1);
    t11 = (t4 + 0U);
    t12 = *((int *)t11);
    t13 = (t4 + 4U);
    t14 = *((int *)t13);
    t15 = (t4 + 8U);
    t16 = *((int *)t15);
    if (t12 > t14)
        goto LAB2;

LAB3:    if (t16 == -1)
        goto LAB7;

LAB8:    t10 = t12;

LAB4:    t17 = (t9 + t10);
    t19 = (t4 + 0U);
    t20 = *((int *)t19);
    t21 = (t4 + 4U);
    t22 = *((int *)t21);
    t23 = (t4 + 8U);
    t24 = *((int *)t23);
    if (t20 > t22)
        goto LAB9;

LAB10:    if (t24 == -1)
        goto LAB14;

LAB15:    t18 = t20;

LAB11:    t25 = (t18 - t17);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t26 = (t26 * 1U);
    t28 = (t5 - 1);
    t30 = (t4 + 0U);
    t31 = *((int *)t30);
    t32 = (t4 + 4U);
    t33 = *((int *)t32);
    t34 = (t4 + 8U);
    t35 = *((int *)t34);
    if (t31 > t33)
        goto LAB16;

LAB17:    if (t35 == -1)
        goto LAB21;

LAB22:    t29 = t31;

LAB18:    t36 = (t28 + t29);
    t38 = (t4 + 0U);
    t39 = *((int *)t38);
    t40 = (t4 + 4U);
    t41 = *((int *)t40);
    t42 = (t4 + 8U);
    t43 = *((int *)t42);
    if (t39 > t41)
        goto LAB23;

LAB24:    if (t43 == -1)
        goto LAB28;

LAB29:    t37 = t39;

LAB25:    t44 = (t27 + 0U);
    t45 = (t44 + 0U);
    *((int *)t45) = t36;
    t45 = (t44 + 4U);
    *((int *)t45) = t37;
    t45 = (t44 + 8U);
    *((int *)t45) = -1;
    t46 = (t37 - t36);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t45 = (t44 + 12U);
    *((unsigned int *)t45) = t47;
    t45 = (t7 + 4U);
    t48 = ((IEEE_P_2592010699) + 2244);
    t49 = (t45 + 48U);
    *((char **)t49) = t48;
    t50 = (char *)alloca(t26);
    t51 = (t45 + 32U);
    *((char **)t51) = t50;
    xsi_type_set_default_value(t48, t50, t27);
    t52 = (t45 + 36U);
    *((char **)t52) = t27;
    t53 = (t45 + 44U);
    *((unsigned int *)t53) = t26;
    t54 = (t8 + 4U);
    t55 = (t3 != 0);
    if (t55 == 1)
        goto LAB31;

LAB30:    t56 = (t8 + 8U);
    *((char **)t56) = t4;
    t57 = (t8 + 12U);
    *((int *)t57) = t5;
    t58 = (t8 + 16U);
    *((unsigned char *)t58) = t6;
    t59 = (t45 + 32U);
    t60 = *((char **)t59);
    t59 = (t27 + 0U);
    t61 = *((int *)t59);
    t63 = (t4 + 0U);
    t64 = *((int *)t63);
    t65 = (t4 + 4U);
    t66 = *((int *)t65);
    t67 = (t4 + 8U);
    t68 = *((int *)t67);
    if (t64 > t66)
        goto LAB32;

LAB33:    if (t68 == -1)
        goto LAB37;

LAB38:    t62 = t66;

LAB34:    t47 = (t61 - t62);
    t70 = (t27 + 0U);
    t71 = *((int *)t70);
    t72 = (t27 + 4U);
    t73 = *((int *)t72);
    t74 = (t27 + 8U);
    t75 = *((int *)t74);
    if (t71 > t73)
        goto LAB39;

LAB40:    if (t75 == -1)
        goto LAB44;

LAB45:    t69 = t71;

LAB41:    t76 = (t27 + 4U);
    t77 = *((int *)t76);
    t78 = (t27 + 8U);
    t79 = *((int *)t78);
    xsi_vhdl_check_range_of_slice(t61, t77, t79, t62, t69, -1);
    t80 = (t47 * 1U);
    t81 = (0 + t80);
    t82 = (t60 + t81);
    t83 = (t4 + 12U);
    t84 = *((unsigned int *)t83);
    t84 = (t84 * 1U);
    memcpy(t82, t3, t84);
    t11 = (t27 + 0U);
    t10 = *((int *)t11);
    t13 = (t27 + 4U);
    t12 = *((int *)t13);
    t15 = (t27 + 8U);
    t14 = *((int *)t15);
    if (t10 > t12)
        goto LAB50;

LAB51:    if (t14 == -1)
        goto LAB55;

LAB56:    t9 = t12;

LAB52:    t19 = (t4 + 0U);
    t17 = *((int *)t19);
    t21 = (t4 + 4U);
    t18 = *((int *)t21);
    t23 = (t4 + 8U);
    t20 = *((int *)t23);
    if (t17 > t18)
        goto LAB57;

LAB58:    if (t20 == -1)
        goto LAB62;

LAB63:    t16 = t18;

LAB59:    t22 = (t16 + 1);
    t24 = t22;
    t25 = t9;

LAB46:    if (t24 <= t25)
        goto LAB47;

LAB49:    t11 = (t45 + 32U);
    t13 = *((char **)t11);
    t11 = (t27 + 12U);
    t26 = *((unsigned int *)t11);
    t26 = (t26 * 1U);
    t0 = xsi_get_transient_memory(t26);
    memcpy(t0, t13, t26);
    t15 = (t27 + 0U);
    t9 = *((int *)t15);
    t19 = (t27 + 4U);
    t10 = *((int *)t19);
    t21 = (t27 + 8U);
    t12 = *((int *)t21);
    t23 = (t2 + 0U);
    t30 = (t23 + 0U);
    *((int *)t30) = t9;
    t30 = (t23 + 4U);
    *((int *)t30) = t10;
    t30 = (t23 + 8U);
    *((int *)t30) = t12;
    t14 = (t10 - t9);
    t47 = (t14 * t12);
    t47 = (t47 + 1);
    t30 = (t23 + 12U);
    *((unsigned int *)t30) = t47;

LAB1:    return t0;
LAB2:    if (t16 == 1)
        goto LAB5;

LAB6:    t10 = t14;
    goto LAB4;

LAB5:    t10 = t12;
    goto LAB4;

LAB7:    t10 = t14;
    goto LAB4;

LAB9:    if (t24 == 1)
        goto LAB12;

LAB13:    t18 = t22;
    goto LAB11;

LAB12:    t18 = t20;
    goto LAB11;

LAB14:    t18 = t22;
    goto LAB11;

LAB16:    if (t35 == 1)
        goto LAB19;

LAB20:    t29 = t33;
    goto LAB18;

LAB19:    t29 = t31;
    goto LAB18;

LAB21:    t29 = t33;
    goto LAB18;

LAB23:    if (t43 == 1)
        goto LAB26;

LAB27:    t37 = t41;
    goto LAB25;

LAB26:    t37 = t39;
    goto LAB25;

LAB28:    t37 = t41;
    goto LAB25;

LAB31:    *((char **)t54) = *((char **)t3);
    goto LAB30;

LAB32:    if (t68 == 1)
        goto LAB35;

LAB36:    t62 = t64;
    goto LAB34;

LAB35:    t62 = t66;
    goto LAB34;

LAB37:    t62 = t64;
    goto LAB34;

LAB39:    if (t75 == 1)
        goto LAB42;

LAB43:    t69 = t73;
    goto LAB41;

LAB42:    t69 = t71;
    goto LAB41;

LAB44:    t69 = t73;
    goto LAB41;

LAB47:    if (t6 != 0)
        goto LAB64;

LAB66:    t11 = (t45 + 32U);
    t13 = *((char **)t11);
    t11 = (t27 + 0U);
    t9 = *((int *)t11);
    t15 = (t27 + 8U);
    t10 = *((int *)t15);
    t12 = (t24 - t9);
    t26 = (t12 * t10);
    t19 = (t27 + 4U);
    t14 = *((int *)t19);
    xsi_vhdl_check_range_of_index(t9, t14, t10, t24);
    t47 = (1U * t26);
    t80 = (0 + t47);
    t21 = (t13 + t80);
    *((unsigned char *)t21) = (unsigned char)2;

LAB65:
LAB48:    t9 = (t24 + 1);
    t24 = t9;
    goto LAB46;

LAB50:    if (t14 == 1)
        goto LAB53;

LAB54:    t9 = t10;
    goto LAB52;

LAB53:    t9 = t12;
    goto LAB52;

LAB55:    t9 = t10;
    goto LAB52;

LAB57:    if (t20 == 1)
        goto LAB60;

LAB61:    t16 = t17;
    goto LAB59;

LAB60:    t16 = t18;
    goto LAB59;

LAB62:    t16 = t17;
    goto LAB59;

LAB64:    t30 = (t4 + 0U);
    t29 = *((int *)t30);
    t32 = (t4 + 4U);
    t31 = *((int *)t32);
    t34 = (t4 + 8U);
    t33 = *((int *)t34);
    if (t29 > t31)
        goto LAB67;

LAB68:    if (t33 == -1)
        goto LAB72;

LAB73:    t28 = t31;

LAB69:    t38 = (t4 + 0U);
    t35 = *((int *)t38);
    t40 = (t4 + 8U);
    t36 = *((int *)t40);
    t37 = (t28 - t35);
    t26 = (t37 * t36);
    t47 = (1U * t26);
    t80 = (0 + t47);
    t42 = (t3 + t80);
    t55 = *((unsigned char *)t42);
    t44 = (t45 + 32U);
    t48 = *((char **)t44);
    t44 = (t27 + 0U);
    t39 = *((int *)t44);
    t49 = (t27 + 8U);
    t41 = *((int *)t49);
    t43 = (t24 - t39);
    t81 = (t43 * t41);
    t51 = (t27 + 4U);
    t46 = *((int *)t51);
    xsi_vhdl_check_range_of_index(t39, t46, t41, t24);
    t84 = (1U * t81);
    t85 = (0 + t84);
    t52 = (t48 + t85);
    *((unsigned char *)t52) = t55;
    goto LAB65;

LAB67:    if (t33 == 1)
        goto LAB70;

LAB71:    t28 = t29;
    goto LAB69;

LAB70:    t28 = t31;
    goto LAB69;

LAB72:    t28 = t29;
    goto LAB69;

LAB74:;
}

int xilinxcorelib_p_0347517956_sub_2298781826_347517956(char *t1, unsigned char t2)
{
    char t4[8];
    int t0;
    char *t5;
    unsigned char t6;

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t6 = (t2 == (unsigned char)1);
    if (t6 != 0)
        goto LAB2;

LAB4:    t0 = 0;

LAB1:    return t0;
LAB2:    t0 = 1;
    goto LAB1;

LAB3:    xsi_error(ng8);
    t0 = 0;
    goto LAB1;

LAB5:    goto LAB3;

LAB6:    goto LAB3;

}

int xilinxcorelib_p_0347517956_sub_3775457388_347517956(char *t1, int t2)
{
    char t4[8];
    int t0;
    char *t5;
    int t6;
    int t7;
    int t8;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = (t2 / 2);
    t7 = xsi_vhdl_mod(t2, 2);
    t8 = (t6 + t7);
    t0 = t8;

LAB1:    return t0;
LAB2:;
}

int xilinxcorelib_p_0347517956_sub_3707231876_347517956(char *t1, int t2)
{
    char t3[72];
    char t4[8];
    char t8[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    int t14;
    unsigned char t15;
    int t16;
    char *t17;
    char *t18;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 256);
    t7 = (t5 + 48U);
    *((char **)t7) = t6;
    t9 = (t5 + 32U);
    *((char **)t9) = t8;
    *((int *)t8) = 1;
    t10 = (t5 + 44U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;
    t12 = 30;
    t13 = 0;

LAB2:    if (t12 >= t13)
        goto LAB3;

LAB5:    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t12 = *((int *)t7);
    t0 = t12;

LAB1:    return t0;
LAB3:    t14 = xsi_vhdl_pow(2, t12);
    t15 = (t2 >= t14);
    if (t15 != 0)
        goto LAB6;

LAB8:
LAB7:
LAB4:    t14 = (t12 + -1);
    t12 = t14;
    goto LAB2;

LAB6:    t16 = (t12 + 1);
    t17 = (t5 + 32U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    *((int *)t17) = t16;
    goto LAB5;

LAB9:    goto LAB7;

LAB10:;
}

unsigned char xilinxcorelib_p_0347517956_sub_3217642252_347517956(char *t1, unsigned char t2)
{
    char t4[8];
    unsigned char t0;
    char *t5;
    char *t6;
    static char *nl0[] = {&&LAB6, &&LAB6, &&LAB3, &&LAB3, &&LAB6, &&LAB6, &&LAB5, &&LAB4, &&LAB6};

LAB0:    t5 = (t4 + 4U);
    *((unsigned char *)t5) = t2;
    t6 = (char *)((nl0) + t2);
    goto **((char **)t6);

LAB2:    xsi_error(ng9);
    t0 = 0;

LAB1:    return t0;
LAB3:    t0 = t2;
    goto LAB1;

LAB4:    t0 = (unsigned char)3;
    goto LAB1;

LAB5:    t0 = (unsigned char)2;
    goto LAB1;

LAB6:    t0 = (unsigned char)1;
    goto LAB1;

LAB7:    goto LAB2;

LAB8:    goto LAB2;

LAB9:    goto LAB2;

LAB10:    goto LAB2;

}

int xilinxcorelib_p_0347517956_sub_47691855_347517956(char *t1, char *t2, char *t3)
{
    char t4[136];
    char t5[16];
    char t15[16];
    char t36[8];
    char t60[16];
    int t0;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    unsigned char t40;
    char *t41;
    int t42;
    char *t43;
    int t44;
    char *t45;
    int t46;
    char *t47;
    int t48;
    char *t49;
    int t50;
    char *t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned char t57;
    unsigned char t58;
    unsigned char t59;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;

LAB0:    t7 = (t3 + 0U);
    t8 = *((int *)t7);
    t9 = (t3 + 4U);
    t10 = *((int *)t9);
    t11 = (t3 + 8U);
    t12 = *((int *)t11);
    if (t8 > t10)
        goto LAB2;

LAB3:    if (t12 == -1)
        goto LAB7;

LAB8:    t6 = t10;

LAB4:    t13 = (0 - t6);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t14 = (t14 * 1U);
    t17 = (t3 + 0U);
    t18 = *((int *)t17);
    t19 = (t3 + 4U);
    t20 = *((int *)t19);
    t21 = (t3 + 8U);
    t22 = *((int *)t21);
    if (t18 > t20)
        goto LAB9;

LAB10:    if (t22 == -1)
        goto LAB14;

LAB15:    t16 = t20;

LAB11:    t23 = (t15 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = t16;
    t24 = (t23 + 4U);
    *((int *)t24) = 0;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (0 - t16);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t24 = (t4 + 4U);
    t27 = ((IEEE_P_2592010699) + 2244);
    t28 = (t24 + 48U);
    *((char **)t28) = t27;
    t29 = (char *)alloca(t14);
    t30 = (t24 + 32U);
    *((char **)t30) = t29;
    xsi_type_set_default_value(t27, t29, t15);
    t31 = (t24 + 36U);
    *((char **)t31) = t15;
    t32 = (t24 + 44U);
    *((unsigned int *)t32) = t14;
    t33 = (t4 + 68U);
    t34 = ((STD_STANDARD) + 256);
    t35 = (t33 + 48U);
    *((char **)t35) = t34;
    t37 = (t33 + 32U);
    *((char **)t37) = t36;
    *((int *)t36) = 0;
    t38 = (t33 + 44U);
    *((unsigned int *)t38) = 4U;
    t39 = (t5 + 4U);
    t40 = (t2 != 0);
    if (t40 == 1)
        goto LAB17;

LAB16:    t41 = (t5 + 8U);
    *((char **)t41) = t3;
    t43 = (t3 + 0U);
    t44 = *((int *)t43);
    t45 = (t3 + 4U);
    t46 = *((int *)t45);
    t47 = (t3 + 8U);
    t48 = *((int *)t47);
    if (t44 > t46)
        goto LAB21;

LAB22:    if (t48 == -1)
        goto LAB26;

LAB27:    t42 = t46;

LAB23:    t49 = (t3 + 0U);
    t50 = *((int *)t49);
    t51 = (t3 + 8U);
    t52 = *((int *)t51);
    t53 = (t42 - t50);
    t26 = (t53 * t52);
    t54 = (1U * t26);
    t55 = (0 + t54);
    t56 = (t2 + t55);
    t57 = *((unsigned char *)t56);
    t58 = xilinxcorelib_p_0347517956_sub_3217642252_347517956(t1, t57);
    t59 = (t58 == (unsigned char)3);
    if (t59 != 0)
        goto LAB18;

LAB20:    t7 = (t24 + 32U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    t11 = (t3 + 12U);
    t14 = *((unsigned int *)t11);
    t14 = (t14 * 1U);
    memcpy(t7, t2, t14);

LAB19:    t7 = (t3 + 0U);
    t8 = *((int *)t7);
    t9 = (t3 + 4U);
    t10 = *((int *)t9);
    t11 = (t3 + 8U);
    t12 = *((int *)t11);
    if (t8 > t10)
        goto LAB32;

LAB33:    if (t12 == -1)
        goto LAB37;

LAB38:    t6 = t10;

LAB34:    t13 = t6;
    t16 = 0;

LAB28:    if (t13 >= t16)
        goto LAB29;

LAB31:    t7 = (t3 + 0U);
    t8 = *((int *)t7);
    t9 = (t3 + 4U);
    t10 = *((int *)t9);
    t11 = (t3 + 8U);
    t12 = *((int *)t11);
    if (t8 > t10)
        goto LAB49;

LAB50:    if (t12 == -1)
        goto LAB54;

LAB55:    t6 = t10;

LAB51:    t17 = (t3 + 0U);
    t13 = *((int *)t17);
    t19 = (t3 + 8U);
    t16 = *((int *)t19);
    t18 = (t6 - t13);
    t14 = (t18 * t16);
    t26 = (1U * t14);
    t54 = (0 + t26);
    t21 = (t2 + t54);
    t40 = *((unsigned char *)t21);
    t57 = xilinxcorelib_p_0347517956_sub_3217642252_347517956(t1, t40);
    t58 = (t57 == (unsigned char)3);
    if (t58 != 0)
        goto LAB46;

LAB48:
LAB47:    t7 = (t33 + 32U);
    t9 = *((char **)t7);
    t6 = *((int *)t9);
    t0 = t6;

LAB1:    return t0;
LAB2:    if (t12 == 1)
        goto LAB5;

LAB6:    t6 = t8;
    goto LAB4;

LAB5:    t6 = t10;
    goto LAB4;

LAB7:    t6 = t8;
    goto LAB4;

LAB9:    if (t22 == 1)
        goto LAB12;

LAB13:    t16 = t18;
    goto LAB11;

LAB12:    t16 = t20;
    goto LAB11;

LAB14:    t16 = t18;
    goto LAB11;

LAB17:    *((char **)t39) = *((char **)t2);
    goto LAB16;

LAB18:    t61 = xilinxcorelib_p_0347517956_sub_963525686_347517956(t1, t60, t2, t3);
    t62 = (t24 + 32U);
    t63 = *((char **)t62);
    t62 = (t63 + 0);
    t64 = (t60 + 12U);
    t65 = *((unsigned int *)t64);
    t65 = (t65 * 1U);
    memcpy(t62, t61, t65);
    goto LAB19;

LAB21:    if (t48 == 1)
        goto LAB24;

LAB25:    t42 = t44;
    goto LAB23;

LAB24:    t42 = t46;
    goto LAB23;

LAB26:    t42 = t44;
    goto LAB23;

LAB29:    t17 = (t33 + 32U);
    t19 = *((char **)t17);
    t18 = *((int *)t19);
    t20 = (t18 * 2);
    t17 = (t33 + 32U);
    t21 = *((char **)t17);
    t17 = (t21 + 0);
    *((int *)t17) = t20;
    t7 = (t24 + 32U);
    t9 = *((char **)t7);
    t7 = (t15 + 0U);
    t6 = *((int *)t7);
    t11 = (t15 + 8U);
    t8 = *((int *)t11);
    t10 = (t13 - t6);
    t14 = (t10 * t8);
    t17 = (t15 + 4U);
    t12 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t6, t12, t8, t13);
    t26 = (1U * t14);
    t54 = (0 + t26);
    t19 = (t9 + t54);
    t40 = *((unsigned char *)t19);
    t57 = xilinxcorelib_p_0347517956_sub_3217642252_347517956(t1, t40);
    t58 = (t57 == (unsigned char)3);
    if (t58 != 0)
        goto LAB39;

LAB41:    t7 = (t24 + 32U);
    t9 = *((char **)t7);
    t7 = (t15 + 0U);
    t6 = *((int *)t7);
    t11 = (t15 + 8U);
    t8 = *((int *)t11);
    t10 = (t13 - t6);
    t14 = (t10 * t8);
    t17 = (t15 + 4U);
    t12 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t6, t12, t8, t13);
    t26 = (1U * t14);
    t54 = (0 + t26);
    t19 = (t9 + t54);
    t40 = *((unsigned char *)t19);
    t57 = xilinxcorelib_p_0347517956_sub_3217642252_347517956(t1, t40);
    t58 = (t57 != (unsigned char)2);
    if (t58 != 0)
        goto LAB42;

LAB43:
LAB40:
LAB30:    t6 = (t13 + -1);
    t13 = t6;
    goto LAB28;

LAB32:    if (t12 == 1)
        goto LAB35;

LAB36:    t6 = t8;
    goto LAB34;

LAB35:    t6 = t10;
    goto LAB34;

LAB37:    t6 = t8;
    goto LAB34;

LAB39:    t21 = (t33 + 32U);
    t23 = *((char **)t21);
    t18 = *((int *)t23);
    t20 = (t18 + 1);
    t21 = (t33 + 32U);
    t27 = *((char **)t21);
    t21 = (t27 + 0);
    *((int *)t21) = t20;
    goto LAB40;

LAB42:    if ((unsigned char)0 == 0)
        goto LAB44;

LAB45:    goto LAB40;

LAB44:    t21 = (t1 + 5951);
    xsi_report(t21, 66U, (unsigned char)1);
    goto LAB45;

LAB46:    t23 = (t33 + 32U);
    t27 = *((char **)t23);
    t20 = *((int *)t27);
    t22 = (1 * t20);
    t25 = (-(t22));
    t23 = (t33 + 32U);
    t28 = *((char **)t23);
    t23 = (t28 + 0);
    *((int *)t23) = t25;
    goto LAB47;

LAB49:    if (t12 == 1)
        goto LAB52;

LAB53:    t6 = t8;
    goto LAB51;

LAB52:    t6 = t10;
    goto LAB51;

LAB54:    t6 = t8;
    goto LAB51;

LAB56:;
}

char *xilinxcorelib_p_0347517956_sub_1104946039_347517956(char *t1, char *t2, char *t3, char *t4)
{
    char t5[72];
    char t6[16];
    char t13[16];
    char *t0;
    char *t7;
    int t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    char *t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    char *t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    char *t41;
    int t42;
    char *t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned char t49;
    unsigned char t50;
    char *t51;
    char *t52;
    int t53;
    char *t54;
    int t55;
    int t56;
    unsigned int t57;
    char *t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t7 = (t4 + 0U);
    t8 = *((int *)t7);
    t9 = (t4 + 4U);
    t10 = *((int *)t9);
    t11 = (t10 - t8);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t12 = (t12 * 1U);
    t14 = (t4 + 0U);
    t15 = *((int *)t14);
    t16 = (t4 + 4U);
    t17 = *((int *)t16);
    t18 = (t13 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t15;
    t19 = (t18 + 4U);
    *((int *)t19) = t17;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (t17 - t15);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t5 + 4U);
    t22 = ((IEEE_P_2592010699) + 2244);
    t23 = (t19 + 48U);
    *((char **)t23) = t22;
    t24 = (char *)alloca(t12);
    t25 = (t19 + 32U);
    *((char **)t25) = t24;
    xsi_type_set_default_value(t22, t24, t13);
    t26 = (t19 + 36U);
    *((char **)t26) = t13;
    t27 = (t19 + 44U);
    *((unsigned int *)t27) = t12;
    t28 = (t6 + 4U);
    t29 = (t3 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t6 + 8U);
    *((char **)t30) = t4;
    t31 = (t4 + 8U);
    t32 = *((int *)t31);
    t33 = (t4 + 4U);
    t34 = *((int *)t33);
    t35 = (t4 + 0U);
    t36 = *((int *)t35);
    t37 = t36;
    t38 = t34;

LAB4:    t39 = (t38 * t32);
    t40 = (t37 * t32);
    if (t40 <= t39)
        goto LAB5;

LAB7:    t7 = (t19 + 32U);
    t9 = *((char **)t7);
    t7 = (t13 + 12U);
    t12 = *((unsigned int *)t7);
    t12 = (t12 * 1U);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t9, t12);
    t14 = (t13 + 0U);
    t8 = *((int *)t14);
    t16 = (t13 + 4U);
    t10 = *((int *)t16);
    t18 = (t13 + 8U);
    t11 = *((int *)t18);
    t22 = (t2 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = t8;
    t23 = (t22 + 4U);
    *((int *)t23) = t10;
    t23 = (t22 + 8U);
    *((int *)t23) = t11;
    t15 = (t10 - t8);
    t21 = (t15 * t11);
    t21 = (t21 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t21;

LAB1:    return t0;
LAB3:    *((char **)t28) = *((char **)t3);
    goto LAB2;

LAB5:    t41 = (t4 + 0U);
    t42 = *((int *)t41);
    t43 = (t4 + 8U);
    t44 = *((int *)t43);
    t45 = (t37 - t42);
    t21 = (t45 * t44);
    t46 = (1U * t21);
    t47 = (0 + t46);
    t48 = (t3 + t47);
    t49 = *((unsigned char *)t48);
    t50 = xilinxcorelib_p_0347517956_sub_3217642252_347517956(t1, t49);
    t51 = (t19 + 32U);
    t52 = *((char **)t51);
    t51 = (t13 + 0U);
    t53 = *((int *)t51);
    t54 = (t13 + 8U);
    t55 = *((int *)t54);
    t56 = (t37 - t53);
    t57 = (t56 * t55);
    t58 = (t13 + 4U);
    t59 = *((int *)t58);
    xsi_vhdl_check_range_of_index(t53, t59, t55, t37);
    t60 = (1U * t57);
    t61 = (0 + t60);
    t62 = (t52 + t61);
    *((unsigned char *)t62) = t50;

LAB6:    t8 = (t37 + t32);
    t37 = t8;
    goto LAB4;

LAB8:;
}

unsigned char xilinxcorelib_p_0347517956_sub_1419852358_347517956(char *t1, char *t2, char *t3)
{
    char t5[16];
    unsigned char t0;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 8U);
    *((char **)t8) = t3;
    t9 = (t3 + 8U);
    t10 = *((int *)t9);
    t11 = (t3 + 4U);
    t12 = *((int *)t11);
    t13 = (t3 + 0U);
    t14 = *((int *)t13);
    t15 = t14;
    t16 = t12;

LAB4:    t17 = (t16 * t10);
    t18 = (t15 * t10);
    if (t18 <= t17)
        goto LAB5;

LAB7:    t0 = (unsigned char)0;

LAB1:    return t0;
LAB3:    *((char **)t6) = *((char **)t2);
    goto LAB2;

LAB5:    t19 = (t3 + 0U);
    t20 = *((int *)t19);
    t21 = (t3 + 8U);
    t22 = *((int *)t21);
    t23 = (t15 - t20);
    t24 = (t23 * t22);
    t25 = (1U * t24);
    t26 = (0 + t25);
    t27 = (t2 + t26);
    t28 = *((unsigned char *)t27);
    t29 = xilinxcorelib_p_0347517956_sub_3217642252_347517956(t1, t28);
    t30 = (t29 == (unsigned char)1);
    if (t30 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    t12 = (t15 + t10);
    t15 = t12;
    goto LAB4;

LAB8:    t0 = (unsigned char)1;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:;
}

unsigned char xilinxcorelib_p_0347517956_sub_1419773950_347517956(char *t1, char *t2, char *t3)
{
    char t5[16];
    unsigned char t0;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 8U);
    *((char **)t8) = t3;
    t9 = (t3 + 8U);
    t10 = *((int *)t9);
    t11 = (t3 + 4U);
    t12 = *((int *)t11);
    t13 = (t3 + 0U);
    t14 = *((int *)t13);
    t15 = t14;
    t16 = t12;

LAB4:    t17 = (t16 * t10);
    t18 = (t15 * t10);
    if (t18 <= t17)
        goto LAB5;

LAB7:    t0 = (unsigned char)0;

LAB1:    return t0;
LAB3:    *((char **)t6) = *((char **)t2);
    goto LAB2;

LAB5:    t19 = (t3 + 0U);
    t20 = *((int *)t19);
    t21 = (t3 + 8U);
    t22 = *((int *)t21);
    t23 = (t15 - t20);
    t24 = (t23 * t22);
    t25 = (1U * t24);
    t26 = (0 + t25);
    t27 = (t2 + t26);
    t28 = *((unsigned char *)t27);
    t29 = xilinxcorelib_p_0347517956_sub_3217642252_347517956(t1, t28);
    t30 = (t29 == (unsigned char)2);
    if (t30 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    t12 = (t15 + t10);
    t15 = t12;
    goto LAB4;

LAB8:    t0 = (unsigned char)1;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:;
}

char *xilinxcorelib_p_0347517956_sub_1667495386_347517956(char *t1, char *t2, int t3)
{
    char t4[72];
    char t5[8];
    char t9[16];
    char *t0;
    int t6;
    int t7;
    unsigned int t8;
    int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    int t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    int t30;
    char *t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t6 = (t3 - 1);
    t7 = (0 - t6);
    t8 = (t7 * -1);
    t8 = (t8 + 1);
    t8 = (t8 * 1U);
    t10 = (t3 - 1);
    t11 = (t9 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = t10;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - t10);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t4 + 4U);
    t15 = ((IEEE_P_2592010699) + 2244);
    t16 = (t12 + 48U);
    *((char **)t16) = t15;
    t17 = (char *)alloca(t8);
    t18 = (t12 + 32U);
    *((char **)t18) = t17;
    xsi_type_set_default_value(t15, t17, t9);
    t19 = (t12 + 36U);
    *((char **)t19) = t9;
    t20 = (t12 + 44U);
    *((unsigned int *)t20) = t8;
    t21 = (t5 + 4U);
    *((int *)t21) = t3;
    t22 = (t3 - 1);
    t23 = 0;
    t24 = t22;

LAB2:    if (t23 <= t24)
        goto LAB3;

LAB5:    t11 = (t12 + 32U);
    t15 = *((char **)t11);
    t11 = (t9 + 12U);
    t8 = *((unsigned int *)t11);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t15, t8);
    t16 = (t9 + 0U);
    t6 = *((int *)t16);
    t18 = (t9 + 4U);
    t7 = *((int *)t18);
    t19 = (t9 + 8U);
    t10 = *((int *)t19);
    t20 = (t2 + 0U);
    t25 = (t20 + 0U);
    *((int *)t25) = t6;
    t25 = (t20 + 4U);
    *((int *)t25) = t7;
    t25 = (t20 + 8U);
    *((int *)t25) = t10;
    t13 = (t7 - t6);
    t14 = (t13 * t10);
    t14 = (t14 + 1);
    t25 = (t20 + 12U);
    *((unsigned int *)t25) = t14;

LAB1:    return t0;
LAB3:    t25 = (t12 + 32U);
    t26 = *((char **)t25);
    t25 = (t9 + 0U);
    t27 = *((int *)t25);
    t28 = (t9 + 8U);
    t29 = *((int *)t28);
    t30 = (t23 - t27);
    t14 = (t30 * t29);
    t31 = (t9 + 4U);
    t32 = *((int *)t31);
    xsi_vhdl_check_range_of_index(t27, t32, t29, t23);
    t33 = (1U * t14);
    t34 = (0 + t33);
    t35 = (t26 + t34);
    *((unsigned char *)t35) = (unsigned char)1;

LAB4:    t6 = (t23 + 1);
    t23 = t6;
    goto LAB2;

LAB6:;
}

char *xilinxcorelib_p_0347517956_sub_1667416978_347517956(char *t1, char *t2, int t3)
{
    char t4[72];
    char t5[8];
    char t9[16];
    char *t0;
    int t6;
    int t7;
    unsigned int t8;
    int t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    int t23;
    int t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    int t30;
    char *t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t6 = (t3 - 1);
    t7 = (0 - t6);
    t8 = (t7 * -1);
    t8 = (t8 + 1);
    t8 = (t8 * 1U);
    t10 = (t3 - 1);
    t11 = (t9 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = t10;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - t10);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t4 + 4U);
    t15 = ((IEEE_P_2592010699) + 2244);
    t16 = (t12 + 48U);
    *((char **)t16) = t15;
    t17 = (char *)alloca(t8);
    t18 = (t12 + 32U);
    *((char **)t18) = t17;
    xsi_type_set_default_value(t15, t17, t9);
    t19 = (t12 + 36U);
    *((char **)t19) = t9;
    t20 = (t12 + 44U);
    *((unsigned int *)t20) = t8;
    t21 = (t5 + 4U);
    *((int *)t21) = t3;
    t22 = (t3 - 1);
    t23 = 0;
    t24 = t22;

LAB2:    if (t23 <= t24)
        goto LAB3;

LAB5:    t11 = (t12 + 32U);
    t15 = *((char **)t11);
    t11 = (t9 + 12U);
    t8 = *((unsigned int *)t11);
    t8 = (t8 * 1U);
    t0 = xsi_get_transient_memory(t8);
    memcpy(t0, t15, t8);
    t16 = (t9 + 0U);
    t6 = *((int *)t16);
    t18 = (t9 + 4U);
    t7 = *((int *)t18);
    t19 = (t9 + 8U);
    t10 = *((int *)t19);
    t20 = (t2 + 0U);
    t25 = (t20 + 0U);
    *((int *)t25) = t6;
    t25 = (t20 + 4U);
    *((int *)t25) = t7;
    t25 = (t20 + 8U);
    *((int *)t25) = t10;
    t13 = (t7 - t6);
    t14 = (t13 * t10);
    t14 = (t14 + 1);
    t25 = (t20 + 12U);
    *((unsigned int *)t25) = t14;

LAB1:    return t0;
LAB3:    t25 = (t12 + 32U);
    t26 = *((char **)t25);
    t25 = (t9 + 0U);
    t27 = *((int *)t25);
    t28 = (t9 + 8U);
    t29 = *((int *)t28);
    t30 = (t23 - t27);
    t14 = (t30 * t29);
    t31 = (t9 + 4U);
    t32 = *((int *)t31);
    xsi_vhdl_check_range_of_index(t27, t32, t29, t23);
    t33 = (1U * t14);
    t34 = (0 + t33);
    t35 = (t26 + t34);
    *((unsigned char *)t35) = (unsigned char)2;

LAB4:    t6 = (t23 + 1);
    t23 = t6;
    goto LAB2;

LAB6:;
}


void ieee_p_2592010699_sub_3130575329_2592010699();

extern void xilinxcorelib_p_0347517956_init()
{
	static char *se[] = {(void *)xilinxcorelib_p_0347517956_sub_1016476178_347517956,(void *)xilinxcorelib_p_0347517956_sub_2119828665_347517956,(void *)xilinxcorelib_p_0347517956_sub_1670819029_347517956,(void *)xilinxcorelib_p_0347517956_sub_963525686_347517956,(void *)xilinxcorelib_p_0347517956_sub_3181201577_347517956,(void *)xilinxcorelib_p_0347517956_sub_4293977645_347517956,(void *)xilinxcorelib_p_0347517956_sub_104102386_347517956,(void *)xilinxcorelib_p_0347517956_sub_2922511006_347517956,(void *)xilinxcorelib_p_0347517956_sub_800221961_347517956,(void *)xilinxcorelib_p_0347517956_sub_3668885349_347517956,(void *)xilinxcorelib_p_0347517956_sub_1579754207_347517956,(void *)xilinxcorelib_p_0347517956_sub_1911765124_347517956,(void *)xilinxcorelib_p_0347517956_sub_422448596_347517956,(void *)xilinxcorelib_p_0347517956_sub_198243544_347517956,(void *)xilinxcorelib_p_0347517956_sub_989635842_347517956,(void *)xilinxcorelib_p_0347517956_sub_2029371606_347517956,(void *)xilinxcorelib_p_0347517956_sub_1067201887_347517956,(void *)xilinxcorelib_p_0347517956_sub_4127800062_347517956,(void *)xilinxcorelib_p_0347517956_sub_3325061799_347517956,(void *)xilinxcorelib_p_0347517956_sub_2298781826_347517956,(void *)xilinxcorelib_p_0347517956_sub_3775457388_347517956,(void *)xilinxcorelib_p_0347517956_sub_3707231876_347517956,(void *)xilinxcorelib_p_0347517956_sub_3217642252_347517956,(void *)xilinxcorelib_p_0347517956_sub_47691855_347517956,(void *)xilinxcorelib_p_0347517956_sub_1104946039_347517956,(void *)xilinxcorelib_p_0347517956_sub_1419852358_347517956,(void *)xilinxcorelib_p_0347517956_sub_1419773950_347517956,(void *)xilinxcorelib_p_0347517956_sub_1667495386_347517956,(void *)xilinxcorelib_p_0347517956_sub_1667416978_347517956};
	xsi_register_didat("xilinxcorelib_p_0347517956", "isim/_tmp/xilinxcorelib/p_0347517956.didat");
	xsi_register_subprogram_executes(se);
	xsi_register_resolution_function(1, 0, (void *)ieee_p_2592010699_sub_3130575329_2592010699, 10);
}
