/*
 * leds.c
 *
 *  Created on: Jun 23, 2020
 *      Author: 11219
 */

#include "leds.h"

void Led_Init(void)
{
	EALLOW;		//unlock protect
	SysCtrlRegs.PCLKCR3.bit.GPIOINENCLK=1;	//GPIO clock

	GpioCtrlRegs.GPAMUX1.bit.GPIO0=0;	//set GPIO as common function	GPA(0-31)GPB(32-63)GPC(64-95)
	GpioCtrlRegs.GPADIR.bit.GPIO0=1;	//set GPIO as output
	GpioCtrlRegs.GPAPUD.bit.GPIO0=0;	//set pull-up resistor

	GpioDataRegs.GPASET.bit.GPIO0=1;	//GPIO output=1;

	EDIS;	//protect
}



