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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//ad/eng/users/a/r/aravinds/My Documents/Xilinx Projects/lab3_1/ALU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {16U, 0U};
static unsigned int ng4[] = {59U, 0U};
static unsigned int ng5[] = {18U, 0U};
static unsigned int ng6[] = {19U, 0U};
static unsigned int ng7[] = {20U, 0U};
static unsigned int ng8[] = {21U, 0U};
static unsigned int ng9[] = {32U, 0U};
static unsigned int ng10[] = {50U, 0U};
static unsigned int ng11[] = {51U, 0U};
static unsigned int ng12[] = {52U, 0U};
static unsigned int ng13[] = {53U, 0U};
static unsigned int ng14[] = {57U, 0U};
static unsigned int ng15[] = {60U, 0U};
static unsigned int ng16[] = {1U, 0U};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_41_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
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

LAB0:    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4096);
    *((int *)t2) = 1;
    t3 = (t0 + 3560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t7, 6);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t3 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 6, t3, 6);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:
LAB37:    goto LAB2;

LAB7:    goto LAB37;

LAB9:    xsi_set_current_line(47, ng0);
    t9 = (t0 + 1480U);
    t10 = *((char **)t9);
    t9 = (t0 + 2200);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 32);
    goto LAB37;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1480U);
    t7 = *((char **)t4);
    t4 = (t0 + 1640U);
    t9 = *((char **)t4);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t7, 32, t9, 32);
    t4 = (t0 + 2200);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    goto LAB37;

LAB15:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    goto LAB37;

LAB17:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t3 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = (t11 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t9);
    t17 = (t15 | t16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB38;

LAB39:
LAB40:    t35 = (t0 + 2200);
    xsi_vlogvar_assign_value(t35, t11, 0, 0, 32);
    goto LAB37;

LAB19:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 & t13);
    *((unsigned int *)t11) = t14;
    t3 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = (t11 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t9);
    t17 = (t15 | t16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB41;

LAB42:
LAB43:    t35 = (t0 + 2200);
    xsi_vlogvar_assign_value(t35, t11, 0, 0, 32);
    goto LAB37;

LAB21:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    goto LAB37;

LAB23:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    goto LAB37;

LAB25:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t4, 32, t7, 32);
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t11, 0, 0, 32);
    goto LAB37;

LAB27:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t3 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = (t11 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t9);
    t17 = (t15 | t16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB44;

LAB45:
LAB46:    t35 = (t0 + 2200);
    xsi_vlogvar_assign_value(t35, t11, 0, 0, 32);
    goto LAB37;

LAB29:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1480U);
    t4 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 & t13);
    *((unsigned int *)t11) = t14;
    t3 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = (t11 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t9);
    t17 = (t15 | t16);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB47;

LAB48:
LAB49:    t35 = (t0 + 2200);
    xsi_vlogvar_assign_value(t35, t11, 0, 0, 32);
    goto LAB37;

LAB31:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB37;

LAB33:    goto LAB37;

LAB38:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t8 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t8));
    t32 = (~(t30));
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t34 & t32);
    goto LAB40;

LAB41:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t23);
    t32 = (~(t31));
    t8 = (t25 & t27);
    t30 = (t29 & t32);
    t33 = (~(t8));
    t34 = (~(t30));
    t36 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t36 & t33);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t34);
    t38 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t38 & t33);
    t39 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t39 & t34);
    goto LAB43;

LAB44:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t8 = (t26 & t25);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t7);
    t30 = (t29 & t28);
    t31 = (~(t8));
    t32 = (~(t30));
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t34 & t32);
    goto LAB46;

LAB47:    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t10);
    *((unsigned int *)t11) = (t20 | t21);
    t22 = (t4 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t31 = *((unsigned int *)t23);
    t32 = (~(t31));
    t8 = (t25 & t27);
    t30 = (t29 & t32);
    t33 = (~(t8));
    t34 = (~(t30));
    t36 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t36 & t33);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t34);
    t38 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t38 & t33);
    t39 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t39 & t34);
    goto LAB49;

}

static void Cont_62_2(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 3776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2200);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 4294967295U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t23, 8);

LAB16:    t24 = (t0 + 4192);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 0);
    t37 = (t0 + 4112);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t23 = ((char*)((ng16)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t23, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}


extern void work_m_00000000001776455425_0886308060_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_41_1,(void *)Cont_62_2};
	xsi_register_didat("work_m_00000000001776455425_0886308060", "isim/CPU_tb_isim_beh.exe.sim/work/m_00000000001776455425_0886308060.didat");
	xsi_register_executes(pe);
}
