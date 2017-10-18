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
extern char *STD_TEXTIO;
static const char *ng1 = "meminitfile";
extern char *STD_STANDARD;



void xilinxcorelib_p_1333587386_sub_2426369954_1333587386(char *t0, char *t1, char *t2, char *t3, int t4, int t5, char *t6, char *t7, char *t8)
{
    char t9[624];
    char t10[32];
    char t18[8];
    char t30[8];
    char t36[8];
    char t42[8];
    char t48[8];
    char t53[16];
    char t78[8];
    char t86[8];
    char *t11;
    char *t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
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
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    int t51;
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
    int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    unsigned char t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    int t99;
    char *t100;
    int t101;
    unsigned char t102;
    unsigned char t104;
    unsigned char t105;
    int t106;
    int t107;

LAB0:    t11 = ((STD_TEXTIO) + 1968);
    t12 = (t3 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    t14 = (t9 + 4U);
    xsi_create_file_variable_in_buffer(t14, ng1, t11, t2, t13, 1);
    t15 = (t9 + 60U);
    t16 = ((STD_STANDARD) + 256);
    t17 = (t15 + 48U);
    *((char **)t17) = t16;
    t19 = (t15 + 32U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, 0);
    t20 = (t15 + 44U);
    *((unsigned int *)t20) = 4U;
    t21 = (t9 + 124U);
    t22 = ((STD_TEXTIO) + 1872);
    t23 = (t21 + 28U);
    *((char **)t23) = t22;
    t24 = (t21 + 20U);
    *((char **)t24) = 0;
    t25 = (t21 + 32U);
    *((int *)t25) = 1;
    t26 = (t21 + 24U);
    *((char **)t26) = 0;
    t27 = (t9 + 160U);
    t28 = ((STD_STANDARD) + 128);
    t29 = (t27 + 48U);
    *((char **)t29) = t28;
    t31 = (t27 + 32U);
    *((char **)t31) = t30;
    xsi_type_set_default_value(t28, t30, 0);
    t32 = (t27 + 44U);
    *((unsigned int *)t32) = 1U;
    t33 = (t9 + 224U);
    t34 = ((STD_STANDARD) + 0);
    t35 = (t33 + 48U);
    *((char **)t35) = t34;
    t37 = (t33 + 32U);
    *((char **)t37) = t36;
    xsi_type_set_default_value(t34, t36, 0);
    t38 = (t33 + 44U);
    *((unsigned int *)t38) = 1U;
    t39 = (t9 + 288U);
    t40 = ((STD_STANDARD) + 256);
    t41 = (t39 + 48U);
    *((char **)t41) = t40;
    t43 = (t39 + 32U);
    *((char **)t43) = t42;
    xsi_type_set_default_value(t40, t42, 0);
    t44 = (t39 + 44U);
    *((unsigned int *)t44) = 4U;
    t45 = (t9 + 352U);
    t46 = ((STD_STANDARD) + 256);
    t47 = (t45 + 48U);
    *((char **)t47) = t46;
    t49 = (t45 + 32U);
    *((char **)t49) = t48;
    xsi_type_set_default_value(t46, t48, 0);
    t50 = (t45 + 44U);
    *((unsigned int *)t50) = 4U;
    t51 = (1 - t5);
    t52 = (t51 * -1);
    t52 = (t52 + 1);
    t52 = (t52 * 1U);
    t54 = (t53 + 0U);
    t55 = (t54 + 0U);
    *((int *)t55) = t5;
    t55 = (t54 + 4U);
    *((int *)t55) = 1;
    t55 = (t54 + 8U);
    *((int *)t55) = -1;
    t56 = (1 - t5);
    t57 = (t56 * -1);
    t57 = (t57 + 1);
    t55 = (t54 + 12U);
    *((unsigned int *)t55) = t57;
    t55 = (t9 + 416U);
    t58 = ((STD_STANDARD) + 708);
    t59 = (t55 + 48U);
    *((char **)t59) = t58;
    t60 = xsi_get_memory(t52);
    t61 = (t55 + 32U);
    *((char **)t61) = t60;
    xsi_type_set_default_value(t58, t60, t53);
    t62 = (t55 + 36U);
    *((char **)t62) = t53;
    t63 = (t55 + 44U);
    *((unsigned int *)t63) = t52;
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
    t71 = (t52 > 2147483644);
    if (t71 == 1)
        goto LAB2;

LAB3:    t72 = (t52 + 3);
    t73 = (t72 / 16);
    t70 = t73;

LAB4:    *((unsigned int *)t69) = t70;
    t74 = (t4 * t5);
    t75 = (t9 + 496U);
    t76 = ((STD_STANDARD) + 256);
    t77 = (t75 + 48U);
    *((char **)t77) = t76;
    t79 = (t75 + 32U);
    *((char **)t79) = t78;
    *((int *)t78) = t74;
    t80 = (t75 + 44U);
    *((unsigned int *)t80) = 4U;
    t81 = (t7 + 12U);
    t82 = *((unsigned int *)t81);
    t83 = (t9 + 560U);
    t84 = ((STD_STANDARD) + 256);
    t85 = (t83 + 48U);
    *((char **)t85) = t84;
    t87 = (t83 + 32U);
    *((char **)t87) = t86;
    *((unsigned int *)t86) = t82;
    t88 = (t83 + 44U);
    *((unsigned int *)t88) = 4U;
    t89 = (t10 + 4U);
    t90 = (t2 != 0);
    if (t90 == 1)
        goto LAB6;

LAB5:    t91 = (t10 + 8U);
    *((char **)t91) = t3;
    t92 = (t10 + 12U);
    *((int *)t92) = t4;
    t93 = (t10 + 16U);
    *((int *)t93) = t5;
    t94 = (t10 + 20U);
    *((char **)t94) = t6;
    t95 = (t10 + 24U);
    *((char **)t95) = t7;
    t96 = (t10 + 28U);
    *((char **)t96) = t8;
    t97 = (t75 + 32U);
    t98 = *((char **)t97);
    t99 = *((int *)t98);
    t97 = (t83 + 32U);
    t100 = *((char **)t97);
    t101 = *((int *)t100);
    t102 = (t99 == t101);
    if (t102 == 0)
        goto LAB7;

LAB8:    t51 = *((int *)t8);
    t102 = (t51 > 0);
    if (t102 == 1)
        goto LAB12;

LAB13:    t90 = (unsigned char)0;

LAB14:    if (t90 != 0)
        goto LAB9;

LAB11:    t11 = (t45 + 32U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((int *)t11) = t4;

LAB10:    t11 = (t8 + 0);
    *((int *)t11) = 0;
    t11 = (t39 + 32U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((int *)t11) = 0;

LAB15:    t11 = (t9 + 4U);
    t102 = std_textio_endfile(t11);
    t104 = (!(t102));
    if (t104 == 1)
        goto LAB19;

LAB20:    t90 = (unsigned char)0;

LAB21:    if (t90 != 0)
        goto LAB16;

LAB18:
LAB1:    t11 = (t55 + 44);
    t51 = *((int *)t11);
    t12 = (t55 + 76U);
    t14 = *((char **)t12);
    xsi_put_memory(t51, t14);
    xsi_access_variable_delete(t21);
    t16 = (t9 + 4U);
    xsi_delete_file_variable(t16);
    return;
LAB2:    t70 = 2147483647;
    goto LAB4;

LAB6:    *((char **)t89) = *((char **)t2);
    goto LAB5;

LAB7:    t97 = (t0 + 2044);
    xsi_report(t97, 22U, (unsigned char)3);
    goto LAB8;

LAB9:    t68 = *((int *)t8);
    t11 = (t45 + 32U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    *((int *)t11) = t68;
    goto LAB10;

LAB12:    t56 = *((int *)t8);
    t104 = (t56 <= t4);
    t90 = t104;
    goto LAB14;

LAB16:    t12 = (t9 + 4U);
    std_textio_readline(STD_TEXTIO, t1, t12, t21);
    t11 = (t55 + 32U);
    t12 = *((char **)t11);
    t11 = (t33 + 32U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    std_textio_read13(STD_TEXTIO, t1, t21, t12, t53, t11);
    t51 = (t5 - 1);
    t56 = 0;
    t68 = t51;

LAB22:    if (t56 <= t68)
        goto LAB23;

LAB25:    t51 = *((int *)t8);
    t56 = (t51 + 1);
    t11 = (t8 + 0);
    *((int *)t11) = t56;
    t11 = (t39 + 32U);
    t12 = *((char **)t11);
    t51 = *((int *)t12);
    t56 = (t51 + t5);
    t11 = (t39 + 32U);
    t14 = *((char **)t11);
    t11 = (t14 + 0);
    *((int *)t11) = t56;
    goto LAB15;

LAB17:;
LAB19:    t51 = *((int *)t8);
    t12 = (t45 + 32U);
    t14 = *((char **)t12);
    t56 = *((int *)t14);
    t105 = (t51 < t56);
    t90 = t105;
    goto LAB21;

LAB23:    t11 = (t55 + 32U);
    t12 = *((char **)t11);
    t74 = (t56 + 1);
    t11 = (t53 + 0U);
    t99 = *((int *)t11);
    t14 = (t53 + 8U);
    t101 = *((int *)t14);
    t106 = (t74 - t99);
    t13 = (t106 * t101);
    t52 = (1U * t13);
    t57 = (0 + t52);
    t16 = (t12 + t57);
    t90 = *((unsigned char *)t16);
    t17 = (t27 + 32U);
    t19 = *((char **)t17);
    t17 = (t19 + 0);
    *((unsigned char *)t17) = t90;
    t11 = (t27 + 32U);
    t12 = *((char **)t11);
    t90 = *((unsigned char *)t12);
    t102 = (t90 == (unsigned char)49);
    if (t102 != 0)
        goto LAB26;

LAB28:    t11 = (t27 + 32U);
    t12 = *((char **)t11);
    t90 = *((unsigned char *)t12);
    t102 = (t90 == (unsigned char)48);
    if (t102 != 0)
        goto LAB29;

LAB30:    t11 = (t27 + 32U);
    t12 = *((char **)t11);
    t90 = *((unsigned char *)t12);
    t102 = (t90 == (unsigned char)88);
    if (t102 != 0)
        goto LAB31;

LAB32:    t11 = (t39 + 32U);
    t12 = *((char **)t11);
    t51 = *((int *)t12);
    t74 = (t51 + t56);
    t11 = (t7 + 0U);
    t99 = *((int *)t11);
    t14 = (t7 + 8U);
    t101 = *((int *)t14);
    t106 = (t74 - t99);
    t13 = (t106 * t101);
    t16 = (t7 + 4U);
    t107 = *((int *)t16);
    xsi_vhdl_check_range_of_index(t99, t107, t101, t74);
    t52 = (1U * t13);
    t57 = (0 + t52);
    t17 = (t6 + t57);
    *((unsigned char *)t17) = (unsigned char)0;

LAB27:
LAB24:    t51 = (t56 + 1);
    t56 = t51;
    goto LAB22;

LAB26:    t11 = (t39 + 32U);
    t14 = *((char **)t11);
    t51 = *((int *)t14);
    t74 = (t51 + t56);
    t11 = (t7 + 0U);
    t99 = *((int *)t11);
    t16 = (t7 + 8U);
    t101 = *((int *)t16);
    t106 = (t74 - t99);
    t13 = (t106 * t101);
    t17 = (t7 + 4U);
    t107 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t99, t107, t101, t74);
    t52 = (1U * t13);
    t57 = (0 + t52);
    t19 = (t6 + t57);
    *((unsigned char *)t19) = (unsigned char)3;
    goto LAB27;

LAB29:    t11 = (t39 + 32U);
    t14 = *((char **)t11);
    t51 = *((int *)t14);
    t74 = (t51 + t56);
    t11 = (t7 + 0U);
    t99 = *((int *)t11);
    t16 = (t7 + 8U);
    t101 = *((int *)t16);
    t106 = (t74 - t99);
    t13 = (t106 * t101);
    t17 = (t7 + 4U);
    t107 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t99, t107, t101, t74);
    t52 = (1U * t13);
    t57 = (0 + t52);
    t19 = (t6 + t57);
    *((unsigned char *)t19) = (unsigned char)2;
    goto LAB27;

LAB31:    t11 = (t39 + 32U);
    t14 = *((char **)t11);
    t51 = *((int *)t14);
    t74 = (t51 + t56);
    t11 = (t7 + 0U);
    t99 = *((int *)t11);
    t16 = (t7 + 8U);
    t101 = *((int *)t16);
    t106 = (t74 - t99);
    t13 = (t106 * t101);
    t17 = (t7 + 4U);
    t107 = *((int *)t17);
    xsi_vhdl_check_range_of_index(t99, t107, t101, t74);
    t52 = (1U * t13);
    t57 = (0 + t52);
    t19 = (t6 + t57);
    *((unsigned char *)t19) = (unsigned char)1;
    goto LAB27;

}

void xilinxcorelib_p_1333587386_sub_2352835911_1333587386(char *t0, char *t1, char *t2, char *t3, int t4, int t5, char *t6, char *t7, int t8)
{
    char t10[32];
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t11 = (t10 + 4U);
    t12 = (t2 != 0);
    if (t12 == 1)
        goto LAB3;

LAB2:    t13 = (t10 + 8U);
    *((char **)t13) = t3;
    t14 = (t10 + 12U);
    *((int *)t14) = t4;
    t15 = (t10 + 16U);
    *((int *)t15) = t5;
    t16 = (t10 + 20U);
    t17 = (t6 != 0);
    if (t17 == 1)
        goto LAB5;

LAB4:    t18 = (t10 + 24U);
    *((char **)t18) = t7;
    t19 = (t10 + 28U);
    *((int *)t19) = t8;
    if ((unsigned char)0 == 0)
        goto LAB6;

LAB7:    if ((unsigned char)0 == 0)
        goto LAB8;

LAB9:    if ((unsigned char)0 == 0)
        goto LAB10;

LAB11:
LAB1:    return;
LAB3:    *((char **)t11) = *((char **)t2);
    goto LAB2;

LAB5:    *((char **)t16) = *((char **)t6);
    goto LAB4;

LAB6:    t20 = (t0 + 2066);
    xsi_report(t20, 75U, (unsigned char)0);
    goto LAB7;

LAB8:    t20 = (t0 + 2141);
    xsi_report(t20, 65U, (unsigned char)0);
    goto LAB9;

LAB10:    t20 = (t0 + 2206);
    xsi_report(t20, 26U, (unsigned char)0);
    goto LAB11;

}


extern void xilinxcorelib_p_1333587386_init()
{
	static char *se[] = {(void *)xilinxcorelib_p_1333587386_sub_2426369954_1333587386,(void *)xilinxcorelib_p_1333587386_sub_2352835911_1333587386};
	xsi_register_didat("xilinxcorelib_p_1333587386", "isim/_tmp/xilinxcorelib/p_1333587386.didat");
	xsi_register_subprogram_executes(se);
}
