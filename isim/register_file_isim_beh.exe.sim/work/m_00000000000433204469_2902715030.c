/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Vipul/ALUproject/fulladder.v";



static void Always_28_0(char *t0)
{
    char t7[8];
    char t22[8];
    char t70[8];
    char t101[8];
    char t132[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    int t124;
    int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t21);
    t25 = (t23 ^ t24);
    *((unsigned int *)t22) = t25;
    t20 = (t7 + 4);
    t26 = (t21 + 4);
    t27 = (t22 + 4);
    t28 = *((unsigned int *)t20);
    t29 = *((unsigned int *)t26);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB9;

LAB10:
LAB11:    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t22, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB12;

LAB13:
LAB14:    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    t20 = (t0 + 1368U);
    t26 = *((char **)t20);
    t42 = *((unsigned int *)t21);
    t43 = *((unsigned int *)t26);
    t44 = (t42 & t43);
    *((unsigned int *)t22) = t44;
    t20 = (t21 + 4);
    t27 = (t26 + 4);
    t35 = (t22 + 4);
    t45 = *((unsigned int *)t20);
    t46 = *((unsigned int *)t27);
    t47 = (t45 | t46);
    *((unsigned int *)t35) = t47;
    t48 = *((unsigned int *)t35);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB15;

LAB16:
LAB17:    t71 = *((unsigned int *)t7);
    t72 = *((unsigned int *)t22);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = (t7 + 4);
    t75 = (t22 + 4);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t74);
    t78 = *((unsigned int *)t75);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = *((unsigned int *)t76);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB18;

LAB19:
LAB20:    t98 = (t0 + 1208U);
    t99 = *((char **)t98);
    t98 = (t0 + 1368U);
    t100 = *((char **)t98);
    t102 = *((unsigned int *)t99);
    t103 = *((unsigned int *)t100);
    t104 = (t102 & t103);
    *((unsigned int *)t101) = t104;
    t98 = (t99 + 4);
    t105 = (t100 + 4);
    t106 = (t101 + 4);
    t107 = *((unsigned int *)t98);
    t108 = *((unsigned int *)t105);
    t109 = (t107 | t108);
    *((unsigned int *)t106) = t109;
    t110 = *((unsigned int *)t106);
    t111 = (t110 != 0);
    if (t111 == 1)
        goto LAB21;

LAB22:
LAB23:    t133 = *((unsigned int *)t70);
    t134 = *((unsigned int *)t101);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = (t70 + 4);
    t137 = (t101 + 4);
    t138 = (t132 + 4);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB24;

LAB25:
LAB26:    t160 = (t0 + 1928);
    xsi_vlogvar_assign_value(t160, t132, 0, 0, 1);
    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    goto LAB8;

LAB9:    t33 = *((unsigned int *)t22);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t22) = (t33 | t34);
    goto LAB11;

LAB12:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t18 | t19);
    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    t25 = *((unsigned int *)t11);
    t28 = (~(t25));
    t29 = *((unsigned int *)t4);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (~(t31));
    t36 = (t24 & t28);
    t37 = (t30 & t32);
    t33 = (~(t36));
    t34 = (~(t37));
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t33);
    t39 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t39 & t34);
    t40 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t40 & t33);
    t41 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t41 & t34);
    goto LAB14;

LAB15:    t50 = *((unsigned int *)t22);
    t51 = *((unsigned int *)t35);
    *((unsigned int *)t22) = (t50 | t51);
    t52 = (t21 + 4);
    t53 = (t26 + 4);
    t54 = *((unsigned int *)t21);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t26);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t64);
    t67 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t67 & t65);
    t68 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t68 & t64);
    t69 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t69 & t65);
    goto LAB17;

LAB18:    t82 = *((unsigned int *)t70);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t70) = (t82 | t83);
    t84 = (t7 + 4);
    t85 = (t22 + 4);
    t86 = *((unsigned int *)t84);
    t87 = (~(t86));
    t88 = *((unsigned int *)t7);
    t89 = (t88 & t87);
    t90 = *((unsigned int *)t85);
    t91 = (~(t90));
    t92 = *((unsigned int *)t22);
    t93 = (t92 & t91);
    t94 = (~(t89));
    t95 = (~(t93));
    t96 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t96 & t94);
    t97 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t97 & t95);
    goto LAB20;

LAB21:    t112 = *((unsigned int *)t101);
    t113 = *((unsigned int *)t106);
    *((unsigned int *)t101) = (t112 | t113);
    t114 = (t99 + 4);
    t115 = (t100 + 4);
    t116 = *((unsigned int *)t99);
    t117 = (~(t116));
    t118 = *((unsigned int *)t114);
    t119 = (~(t118));
    t120 = *((unsigned int *)t100);
    t121 = (~(t120));
    t122 = *((unsigned int *)t115);
    t123 = (~(t122));
    t124 = (t117 & t119);
    t125 = (t121 & t123);
    t126 = (~(t124));
    t127 = (~(t125));
    t128 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t128 & t126);
    t129 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t129 & t127);
    t130 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t130 & t126);
    t131 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t131 & t127);
    goto LAB23;

LAB24:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t70 + 4);
    t147 = (t101 + 4);
    t148 = *((unsigned int *)t146);
    t149 = (~(t148));
    t150 = *((unsigned int *)t70);
    t151 = (t150 & t149);
    t152 = *((unsigned int *)t147);
    t153 = (~(t152));
    t154 = *((unsigned int *)t101);
    t155 = (t154 & t153);
    t156 = (~(t151));
    t157 = (~(t155));
    t158 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t158 & t156);
    t159 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t159 & t157);
    goto LAB26;

}


extern void work_m_00000000000433204469_2902715030_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000000433204469_2902715030", "isim/register_file_isim_beh.exe.sim/work/m_00000000000433204469_2902715030.didat");
	xsi_register_executes(pe);
}
