/*
 * leds.h
 *
 *  Created on: Jun 23, 2020
 *      Author: 11219
 */

#ifndef LEDS_H_
#define LEDS_H_

#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#define LED0_ON GpioDataRegs.GPASET.bit.GPIO0=1;
#define LED0_OFF GpioDataRegs.GPACLEAR.bit.GPIO0=1;
#define LED0_TOG GpioDataRegs.GPATOGGLE.bit.GPIO0=1;
void Led_Init(void);


#endif /* LEDS_H_ */
