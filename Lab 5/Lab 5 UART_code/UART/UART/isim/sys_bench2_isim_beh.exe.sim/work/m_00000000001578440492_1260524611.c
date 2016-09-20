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
static const char *ng0 = "//ad/eng/users/a/b/abhigaur/Desktop/Lab5 551/Lab 5 UART_code/UART/UART/systolic.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static int ng12[] = {4, 0};



static void Always_19_0(char *t0)
{
    char t18[8];
    char t19[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 5192);
    *((int *)t2) = 1;
    t3 = (t0 + 4904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 2432U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(22, ng0);

LAB9:    xsi_set_current_line(24, ng0);
    t11 = (t0 + 3952);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);

LAB10:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t14, 4);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 4, t2, 4);
    if (t15 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(85, ng0);

LAB41:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB31:    goto LAB8;

LAB11:    xsi_set_current_line(26, ng0);

LAB32:    xsi_set_current_line(27, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 3632);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 4);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2992);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2272U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 16, t2, 8, t4, 8);
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t18, 0, 0, 16);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB31;

LAB13:    xsi_set_current_line(33, ng0);

LAB33:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 3312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 2272U);
    t14 = *((char **)t12);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 16, t11, 8, t14, 8);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t5, 16, t18, 16);
    t12 = (t0 + 3312);
    xsi_vlogvar_assign_value(t12, t19, 0, 0, 16);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 3632);
    xsi_vlogvar_assign_value(t11, t18, 0, 0, 4);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB31;

LAB15:    xsi_set_current_line(39, ng0);

LAB34:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 3312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2272U);
    t14 = *((char **)t12);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 16, t11, 8, t14, 8);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t5, 16, t18, 16);
    t12 = (t0 + 3312);
    xsi_vlogvar_assign_value(t12, t19, 0, 0, 16);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 3632);
    xsi_vlogvar_assign_value(t11, t18, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB31;

LAB17:    xsi_set_current_line(45, ng0);

LAB35:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 3312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 2272U);
    t14 = *((char **)t12);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 16, t11, 8, t14, 8);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t5, 16, t18, 16);
    t12 = (t0 + 3312);
    xsi_vlogvar_assign_value(t12, t19, 0, 0, 16);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 3632);
    xsi_vlogvar_assign_value(t11, t18, 0, 0, 4);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB31;

LAB19:    xsi_set_current_line(51, ng0);

LAB36:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 3312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng7)));
    t12 = (t0 + 2272U);
    t14 = *((char **)t12);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 16, t11, 8, t14, 8);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t5, 16, t18, 16);
    t12 = (t0 + 3312);
    xsi_vlogvar_assign_value(t12, t19, 0, 0, 16);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 3632);
    xsi_vlogvar_assign_value(t11, t18, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB31;

LAB21:    xsi_set_current_line(57, ng0);

LAB37:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 3312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 2272U);
    t14 = *((char **)t12);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 16, t11, 8, t14, 8);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t5, 16, t18, 16);
    t12 = (t0 + 3312);
    xsi_vlogvar_assign_value(t12, t19, 0, 0, 16);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 3632);
    xsi_vlogvar_assign_value(t11, t18, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB31;

LAB23:    xsi_set_current_line(63, ng0);

LAB38:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 3312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2272U);
    t14 = *((char **)t12);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 16, t11, 8, t14, 8);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t5, 16, t18, 16);
    t12 = (t0 + 3312);
    xsi_vlogvar_assign_value(t12, t19, 0, 0, 16);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 3632);
    xsi_vlogvar_assign_value(t11, t18, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB31;

LAB25:    xsi_set_current_line(69, ng0);

LAB39:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 3312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 2272U);
    t14 = *((char **)t12);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 16, t11, 8, t14, 8);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t5, 16, t18, 16);
    t12 = (t0 + 3312);
    xsi_vlogvar_assign_value(t12, t19, 0, 0, 16);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 3632);
    xsi_vlogvar_assign_value(t11, t18, 0, 0, 4);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB31;

LAB27:    xsi_set_current_line(75, ng0);

LAB40:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 3312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2272U);
    t14 = *((char **)t12);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 16, t11, 8, t14, 8);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t5, 16, t18, 16);
    t12 = (t0 + 3152);
    xsi_vlogvar_assign_value(t12, t19, 0, 0, 16);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 2272U);
    t12 = *((char **)t11);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 16, t5, 8, t12, 8);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t4, 16, t18, 16);
    t11 = ((char*)((ng12)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_rshift(t20, 16, t19, 16, t11, 32);
    t14 = (t0 + 3792);
    xsi_vlogvar_assign_value(t14, t20, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3312);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2992);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 3632);
    xsi_vlogvar_assign_value(t11, t18, 0, 0, 4);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB31;

}


extern void work_m_00000000001578440492_1260524611_init()
{
	static char *pe[] = {(void *)Always_19_0};
	xsi_register_didat("work_m_00000000001578440492_1260524611", "isim/sys_bench2_isim_beh.exe.sim/work/m_00000000001578440492_1260524611.didat");
	xsi_register_executes(pe);
}
