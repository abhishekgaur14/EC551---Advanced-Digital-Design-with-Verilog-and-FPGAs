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

/* This file is designed for use with ISim build 0x54af6ca1 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/ad/eng/users/a/n/anubhavg/Documents/EC551/Lab2/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {4294967295U, 4294967295U};



static void Always_37_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;

LAB0:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3272);
    *((int *)t2) = 1;
    t3 = (t0 + 2984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(42, ng0);
    t7 = (t0 + 1480U);
    t8 = *((char **)t7);
    t7 = (t0 + 2040);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB23;

LAB9:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    *((unsigned int *)t9) = t11;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB25;

LAB24:    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 4294967295U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 4294967295U);
    t8 = (t0 + 2040);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB23;

LAB11:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB23;

LAB13:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t4, 32, t7, 32);
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t9, 0, 0, 32);
    goto LAB23;

LAB15:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t18 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t18) = t15;
    t16 = *((unsigned int *)t18);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB26;

LAB27:
LAB28:    t35 = (t0 + 2040);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 32);
    goto LAB23;

LAB17:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t18 = (t9 + 4);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 | t14);
    *((unsigned int *)t18) = t15;
    t16 = *((unsigned int *)t18);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB29;

LAB30:
LAB31:    t35 = (t0 + 2040);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 32);
    goto LAB23;

LAB19:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB33;

LAB32:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB33;

LAB36:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB34;

LAB35:    t21 = (t9 + 4);
    t10 = *((unsigned int *)t21);
    t11 = (~(t10));
    t12 = *((unsigned int *)t9);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB39:    goto LAB23;

LAB25:    t12 = *((unsigned int *)t9);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t9) = (t12 | t13);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t14 | t15);
    goto LAB24;

LAB26:    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t9) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t26));
    t32 = (~(t30));
    t33 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t33 & t31);
    t34 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t34 & t32);
    goto LAB28;

LAB29:    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t9) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t27 = (~(t25));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t22);
    t32 = (~(t31));
    t26 = (t24 & t27);
    t30 = (t29 & t32);
    t33 = (~(t26));
    t34 = (~(t30));
    t36 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t36 & t33);
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & t34);
    t38 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t38 & t33);
    t39 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t39 & t34);
    goto LAB31;

LAB33:    t18 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB35;

LAB34:    *((unsigned int *)t9) = 1;
    goto LAB35;

LAB37:    xsi_set_current_line(49, ng0);
    t22 = ((char*)((ng2)));
    t35 = (t0 + 2040);
    xsi_vlogvar_assign_value(t35, t22, 0, 0, 32);
    goto LAB39;

}


extern void work_m_00103525385444702822_0886308060_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_00103525385444702822_0886308060", "isim/ALU_Test_isim_beh.exe.sim/work/m_00103525385444702822_0886308060.didat");
	xsi_register_executes(pe);
}
