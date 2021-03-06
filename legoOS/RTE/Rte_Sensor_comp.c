/** @file     Rte_Sensor_comp.c
  * 
  * @brief    RTE Sample SWC implementation skeleton file
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

#include "Rte_Sensor_comp.h"
#include "VirtualDevices.h"

/* --------------------------------------------------------------------------- */
/* RTE Event: /Components/Sensor_comp/IB_Sensor_comp/TE_1000ms */

FUNC(void, Sensor_comp_CODE) RE_Sensor_comp_func(void)
{
   /* ... */
	int *temp = 100;
	Rte_Call_R_Sensor_comp_cs_toSensor( temp );
	//status_printf("result : %d", temp);  //이건 sync일때.

	Rte_Result_R_Sensor_comp_cs_toSensor( &temp ); //async는 result가 나와.
	status_printf("result : %d", temp);
	Rte_Write_P_Sensor_comp_sr_toStatus(temp);

}

