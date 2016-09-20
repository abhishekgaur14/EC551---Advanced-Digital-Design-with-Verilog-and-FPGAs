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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000645410552_0816887120_init();
    work_m_00000000000049587890_0971838261_init();
    work_m_00000000001459805720_0257546793_init();
    work_m_00000000002062895504_3805416069_init();
    work_m_00000000002692777243_1799415082_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002692777243_1799415082");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
