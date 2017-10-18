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
static const char *ng0 = "D:/Xtemp/matrix_multiplier/test_bench.vhd";
extern char *IEEE_P_1242562249;
extern char *STD_STANDARD;

unsigned char ieee_p_1242562249_sub_1936113670_1242562249(char *, char *, char *, int );
int ieee_p_1242562249_sub_2998824840_1242562249(char *, char *, char *);


static void work_a_2578365841_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1804U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2148);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1232U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1720);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2148);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1232U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1720);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2578365841_2372691052_p_1(char *t0)
{
    char t18[16];
    char t28[16];
    char t36[16];
    char t38[16];
    char t47[16];
    char t49[16];
    char t56[16];
    char t72[16];
    char t84[16];
    char t86[16];
    char t97[16];
    char t106[16];
    char t115[16];
    char t131[16];
    char t133[16];
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    int t9;
    int t10;
    int t11;
    int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned char t26;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    char *t35;
    char *t37;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t46;
    char *t48;
    char *t50;
    char *t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    char *t58;
    char *t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    char *t71;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t83;
    char *t85;
    char *t87;
    char *t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t98;
    char *t99;
    char *t100;
    int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t107;
    char *t108;
    int t109;
    unsigned int t110;
    int t111;
    char *t112;
    char *t113;
    char *t114;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t130;
    char *t132;
    char *t134;
    char *t135;
    int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;

LAB0:    t1 = (t0 + 1932U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1232U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t2 = (t0 + 1848);
    xsi_process_wait(t2, t4);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2184);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1232U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t8 = (t4 * 4);
    t2 = (t0 + 1848);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2184);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1232U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t8 = (t4 * 2);
    t2 = (t0 + 1848);
    xsi_process_wait(t2, t8);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(92, ng0);
    t9 = (3 * 5);
    t10 = (t9 - 1);
    t2 = (t0 + 3604);
    *((int *)t2) = 0;
    t3 = (t0 + 3608);
    *((int *)t3) = t10;
    t11 = 0;
    t12 = t10;

LAB16:    if (t11 <= t12)
        goto LAB17;

LAB19:    xsi_set_current_line(104, ng0);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    xsi_set_current_line(93, ng0);
    t5 = (t0 + 2220);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t13 = (t7 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1232U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t8 = (t4 * 4);
    t2 = (t0 + 1848);
    xsi_process_wait(t2, t8);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB18:    t2 = (t0 + 3604);
    t11 = *((int *)t2);
    t3 = (t0 + 3608);
    t12 = *((int *)t3);
    t9 = (t11 + 1);
    t11 = t9;
    t5 = (t0 + 3604);
    *((int *)t5) = t11;
    goto LAB16;

LAB20:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2220);
    t3 = (t2 + 32U);
    t5 = *((char **)t3);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1232U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t8 = (t4 * 6);
    t2 = (t0 + 1848);
    xsi_process_wait(t2, t8);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 812U);
    t3 = *((char **)t2);
    t9 = (4 - 1);
    t10 = (9 + t9);
    t15 = (15 - t10);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t2 = (t3 + t17);
    t5 = (t18 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 12;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t19 = (0 - 12);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t20;
    t6 = (t0 + 1168U);
    t7 = *((char **)t6);
    t6 = (t0 + 3604);
    t21 = *((int *)t6);
    t22 = (t21 - 0);
    t20 = (t22 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, *((int *)t6));
    t23 = (4U * t20);
    t24 = (0 + t23);
    t13 = (t7 + t24);
    t25 = *((int *)t13);
    t26 = ieee_p_1242562249_sub_1936113670_1242562249(IEEE_P_1242562249, t2, t18, t25);
    if (t26 == 0)
        goto LAB28;

LAB29:    goto LAB18;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    t14 = (t0 + 3612);
    t29 = ((STD_STANDARD) + 256);
    t30 = (t0 + 3604);
    t31 = xsi_int_to_mem(*((int *)t30));
    t32 = xsi_string_variable_get_image(t28, t29, t31);
    t33 = (t28 + 12U);
    t34 = *((unsigned int *)t33);
    t37 = ((STD_STANDARD) + 708);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 6;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t41 = (6 - 1);
    t42 = (t41 * 1);
    t42 = (t42 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t42;
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t14, t38, (char)97, t32, t28, (char)101);
    t40 = (t28 + 12U);
    t42 = *((unsigned int *)t40);
    t43 = (6U + t42);
    t44 = (t0 + 3618);
    t48 = ((STD_STANDARD) + 708);
    t50 = (t49 + 0U);
    t51 = (t50 + 0U);
    *((int *)t51) = 1;
    t51 = (t50 + 4U);
    *((int *)t51) = 26;
    t51 = (t50 + 8U);
    *((int *)t51) = 1;
    t52 = (26 - 1);
    t53 = (t52 * 1);
    t53 = (t53 + 1);
    t51 = (t50 + 12U);
    *((unsigned int *)t51) = t53;
    t46 = xsi_base_array_concat(t46, t47, t48, (char)97, t35, t36, (char)97, t44, t49, (char)101);
    t51 = (t28 + 12U);
    t53 = *((unsigned int *)t51);
    t54 = (6U + t53);
    t55 = (t54 + 26U);
    t57 = ((STD_STANDARD) + 256);
    t58 = (t0 + 1168U);
    t59 = *((char **)t58);
    t58 = (t0 + 3604);
    t60 = *((int *)t58);
    t61 = (t60 - 0);
    t62 = (t61 * 1);
    xsi_vhdl_check_range_of_index(0, 14, 1, *((int *)t58));
    t63 = (4U * t62);
    t64 = (0 + t63);
    t65 = (t59 + t64);
    t66 = *((int *)t65);
    t67 = xsi_int_to_mem(t66);
    t68 = xsi_string_variable_get_image(t56, t57, t67);
    t69 = (t56 + 12U);
    t70 = *((unsigned int *)t69);
    t73 = ((STD_STANDARD) + 708);
    t71 = xsi_base_array_concat(t71, t72, t73, (char)97, t46, t47, (char)97, t68, t56, (char)101);
    t74 = (t28 + 12U);
    t75 = *((unsigned int *)t74);
    t76 = (6U + t75);
    t77 = (t76 + 26U);
    t78 = (t56 + 12U);
    t79 = *((unsigned int *)t78);
    t80 = (t77 + t79);
    t81 = (t0 + 3644);
    t85 = ((STD_STANDARD) + 708);
    t87 = (t86 + 0U);
    t88 = (t87 + 0U);
    *((int *)t88) = 1;
    t88 = (t87 + 4U);
    *((int *)t88) = 19;
    t88 = (t87 + 8U);
    *((int *)t88) = 1;
    t89 = (19 - 1);
    t90 = (t89 * 1);
    t90 = (t90 + 1);
    t88 = (t87 + 12U);
    *((unsigned int *)t88) = t90;
    t83 = xsi_base_array_concat(t83, t84, t85, (char)97, t71, t72, (char)97, t81, t86, (char)101);
    t88 = (t28 + 12U);
    t90 = *((unsigned int *)t88);
    t91 = (6U + t90);
    t92 = (t91 + 26U);
    t93 = (t56 + 12U);
    t94 = *((unsigned int *)t93);
    t95 = (t92 + t94);
    t96 = (t95 + 19U);
    t98 = ((STD_STANDARD) + 256);
    t99 = (t0 + 812U);
    t100 = *((char **)t99);
    t101 = (4 - 1);
    t102 = (9 + t101);
    t103 = (15 - t102);
    t104 = (t103 * 1U);
    t105 = (0 + t104);
    t99 = (t100 + t105);
    t107 = (t106 + 0U);
    t108 = (t107 + 0U);
    *((int *)t108) = 12;
    t108 = (t107 + 4U);
    *((int *)t108) = 0;
    t108 = (t107 + 8U);
    *((int *)t108) = -1;
    t109 = (0 - 12);
    t110 = (t109 * -1);
    t110 = (t110 + 1);
    t108 = (t107 + 12U);
    *((unsigned int *)t108) = t110;
    t111 = ieee_p_1242562249_sub_2998824840_1242562249(IEEE_P_1242562249, t99, t106);
    t108 = xsi_int_to_mem(t111);
    t112 = xsi_string_variable_get_image(t97, t98, t108);
    t113 = (t97 + 12U);
    t110 = *((unsigned int *)t113);
    t116 = ((STD_STANDARD) + 708);
    t114 = xsi_base_array_concat(t114, t115, t116, (char)97, t83, t84, (char)97, t112, t97, (char)101);
    t117 = (t28 + 12U);
    t118 = *((unsigned int *)t117);
    t119 = (6U + t118);
    t120 = (t119 + 26U);
    t121 = (t56 + 12U);
    t122 = *((unsigned int *)t121);
    t123 = (t120 + t122);
    t124 = (t123 + 19U);
    t125 = (t97 + 12U);
    t126 = *((unsigned int *)t125);
    t127 = (t124 + t126);
    t128 = (t0 + 3663);
    t132 = ((STD_STANDARD) + 708);
    t134 = (t133 + 0U);
    t135 = (t134 + 0U);
    *((int *)t135) = 1;
    t135 = (t134 + 4U);
    *((int *)t135) = 1;
    t135 = (t134 + 8U);
    *((int *)t135) = 1;
    t136 = (1 - 1);
    t137 = (t136 * 1);
    t137 = (t137 + 1);
    t135 = (t134 + 12U);
    *((unsigned int *)t135) = t137;
    t130 = xsi_base_array_concat(t130, t131, t132, (char)97, t114, t115, (char)97, t128, t133, (char)101);
    t135 = (t28 + 12U);
    t137 = *((unsigned int *)t135);
    t138 = (6U + t137);
    t139 = (t138 + 26U);
    t140 = (t56 + 12U);
    t141 = *((unsigned int *)t140);
    t142 = (t139 + t141);
    t143 = (t142 + 19U);
    t144 = (t97 + 12U);
    t145 = *((unsigned int *)t144);
    t146 = (t143 + t145);
    t147 = (t146 + 1U);
    xsi_report(t130, t147, (unsigned char)2);
    goto LAB29;

LAB30:    goto LAB2;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

}


extern void work_a_2578365841_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2578365841_2372691052_p_0,(void *)work_a_2578365841_2372691052_p_1};
	xsi_register_didat("work_a_2578365841_2372691052", "isim/_tmp/work/a_2578365841_2372691052.didat");
	xsi_register_executes(pe);
}
