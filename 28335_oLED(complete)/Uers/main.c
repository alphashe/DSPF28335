/****************OLED**************************
 *      SCL  GPIO32
 *      SDI  GPIO33
 *      x:0-128
 *      y:0-7
 *      when (int)a=48,ShowChar(a) is 0.
 *      the char can show is start at 32(Dec).
 *      ascii 	dec
 *      0		48
 *      9		57
 *      A		65
 *      Z		90
 *      a		97
 *      z		122
 ************************************************
 */

#include "DSP2833x_Device.h"
#include "DSP2833x_Examples.h"
#include "Oled.h"
#include "leds.h"

void main()
{
	InitSysCtrl();	//initialize system clock =150Mhz
	Led_Init();
	OLED_Init();
	OLED_Clear();
//	OLED_On();
	int t='0';
	int a=48;
	float b=12.34;
	while(1)
	{

//		OLED_ShowString(8,1,"alphashe",16);
		OLED_ShowChar(16,6,t,16);
		OLED_ShowChar(16,4,a,16);
		OLED_ShowNum(0,0,b,2,2,16);
		OLED_ShowNum(0,2,b,2,1,16);
		OLED_ShowNum(64,2,b,3,3,16);
		t++;
		if(t>'z')
			t='0';
		Delay_1ms(1000);
		LED0_TOG;
	}

}
