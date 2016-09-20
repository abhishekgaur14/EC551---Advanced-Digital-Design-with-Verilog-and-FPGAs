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
static const char *ng0 = "//ad/eng/users/a/r/aravinds/My Documents/Xilinx Projects/lab3_1/MUX.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};

static void NetReassign_60_1(char *);
static void NetReassign_61_2(char *);
static void NetReassign_62_3(char *);
static void NetReassign_63_4(char *);


static void Always_57_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4320);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(60, ng0);
    t7 = (t0 + 2088);
    xsi_set_assignedflag(t7);
    t8 = (t0 + 5952);
    *((int *)t8) = 1;
    NetReassign_60_1(t0);
    goto LAB15;

LAB9:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2088);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 5956);
    *((int *)t4) = 1;
    NetReassign_61_2(t0);
    goto LAB15;

LAB11:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 2088);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 5960);
    *((int *)t4) = 1;
    NetReassign_62_3(t0);
    goto LAB15;

LAB13:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2088);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 5964);
    *((int *)t4) = 1;
    NetReassign_63_4(t0);
    goto LAB15;

}

static void NetReassign_60_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 5952);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 4336);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 2088);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 4336);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_61_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t3 = 0;
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t2 = (t0 + 5956);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 4352);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 2088);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 4352);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_62_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t3 = 0;
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 5960);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 4368);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 2088);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 4368);
    *((int *)t6) = 1;
    goto LAB8;

}

static void NetReassign_63_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t3 = 0;
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    t2 = (t0 + 5964);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t7 = (t0 + 4384);
    *((int *)t7) = 0;

LAB8:
LAB1:    return;
LAB4:    t5 = (t0 + 2088);
    xsi_vlogvar_assignassignvalue(t5, t4, 0, 0, 0, 32, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t6 = (t0 + 4384);
    *((int *)t6) = 1;
    goto LAB8;

}


extern void work_m_00000000000938836813_2168633475_init()
{
	static char *pe[] = {(void *)Always_57_0,(void *)NetReassign_60_1,(void *)NetReassign_61_2,(void *)NetReassign_62_3,(void *)NetReassign_63_4};
	xsi_register_didat("work_m_00000000000938836813_2168633475", "isim/CPU_tb_isim_beh.exe.sim/work/m_00000000000938836813_2168633475.didat");
	xsi_register_executes(pe);
}
