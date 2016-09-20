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
    work_m_07252214636814167181_2188094372_init();
    work_m_05584263903964236627_1010895172_init();
    work_m_17602945275013315330_3068324535_init();
    work_m_00103525385444702822_0886308060_init();
    work_m_10272618223718866390_3508565487_init();
    work_m_16998974417288274043_3895195772_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_16998974417288274043_3895195772");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
