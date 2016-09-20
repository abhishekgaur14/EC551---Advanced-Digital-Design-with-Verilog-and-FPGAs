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
static const char *ng0 = "//ad/eng/users/a/r/aravinds/My Documents/Xilinx Projects/lab3_1/memory.v";
static int ng1[] = {0, 0};
static int ng2[] = {127, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};



static void Initial_11_0(char *t0)
{
    char t5[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
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
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    xsi_set_current_line(12, ng0);

LAB2:    xsi_set_current_line(13, ng0);
    xsi_set_current_line(13, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2704);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);

LAB3:    t1 = (t0 + 2704);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    t6 = (t3 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t3) < *((unsigned int *)t4))
        goto LAB6;

LAB7:    t9 = (t5 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:
LAB1:    return;
LAB5:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB7;

LAB6:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    xsi_set_current_line(14, ng0);

LAB11:    xsi_set_current_line(15, ng0);
    t15 = ((char*)((ng3)));
    t16 = (t0 + 2544);
    t19 = (t0 + 2544);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 2544);
    t23 = (t22 + 64U);
    t24 = *((char **)t23);
    t25 = (t0 + 2704);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t17, t18, t21, t24, 2, 1, t27, 7, 2);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t18 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(13, ng0);
    t1 = (t0 + 2704);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t3, 7, t4, 32);
    t6 = (t0 + 2704);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);
    goto LAB3;

LAB12:    t35 = *((unsigned int *)t17);
    t36 = *((unsigned int *)t18);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t18), t38);
    goto LAB13;

}

static void Always_18_1(char *t0)
{
    char t7[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t22;
    int t23;
    unsigned int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;

LAB0:    t1 = (t0 + 3872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 4192);
    *((int *)t2) = 1;
    t3 = (t0 + 3904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 2544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2544);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2544);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1824U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t15, 16, 2);
    t14 = (t0 + 2384);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t16 = *((unsigned int *)t2);
    t17 = (~(t16));
    t18 = *((unsigned int *)t3);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1664U);
    t5 = *((char **)t4);
    t4 = (t0 + 2544);
    t6 = (t0 + 2544);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2544);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 1984U);
    t14 = *((char **)t13);
    xsi_vlog_generic_convert_array_indices(t7, t21, t9, t12, 2, 1, t14, 16, 2);
    t13 = (t7 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (!(t22));
    t15 = (t21 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (!(t24));
    t26 = (t23 && t25);
    if (t26 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t27 = *((unsigned int *)t7);
    t28 = *((unsigned int *)t21);
    t29 = (t27 - t28);
    t30 = (t29 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t21), t30, 0LL);
    goto LAB10;

}


extern void work_m_00000000001815843789_2381739659_init()
{
	static char *pe[] = {(void *)Initial_11_0,(void *)Always_18_1};
	xsi_register_didat("work_m_00000000001815843789_2381739659", "isim/CPU_tb_isim_beh.exe.sim/work/m_00000000001815843789_2381739659.didat");
	xsi_register_executes(pe);
}
