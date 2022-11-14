/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		  Main.c
 *  Module:  	  App
 *
 *  Description:  Src file for the Application
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *	Author: 	  Mohab Amged
 *	Date:		  7/10/2022
 *********************************************************************************************************************/

/**************************************************************************************************************************************
*
*                                                 INCLUDES
*
**************************************************************************************************************************************/
#include "Macros.h"
#include "Std_Types.h"
#include "avr/io.h"
#include "ADC.h"
#include "PWM.h"
#include "LCD.h"
#include "DC_Motor.h"
#include "lm35_sensor.h"
#include <util/delay.h>
/**************************************************************************************************************************************
*
*                                                Main
*
**************************************************************************************************************************************/
int main (void)
{
	/* Variables Init*/
	uint8 read=0;
   /* Set Pins Directions */

   /* Init ADC Config Variable*/
   ADC_ConfigType AdcConfig;

   /* Adding Config for ADC*/
   AdcConfig.prescaler=ADC_DIV8;
   AdcConfig.ref_volt=ADC_INTERNAL;

   /*Adc Init */
	ADC_init(&AdcConfig);

   /*LCD Init  */
    LCD_Init();
    LCD_DisplayString("FAN IS ");
    LCD_MoveAndDisplayString("TEMP = ", 1, 0);

   /*Motor Init*/
    DcMotor_Init();

    /* Make ADC Channel AS Input */
    //GPIO_setupPinDirection(PORTIDA,SENSOR_CHANNEL_ID, PINPUT);




while(1)
{

	/* Get Temp */
	read=LM35_getTemperature();
	LCD_MoveCursor(1,8);
	LCD_IntegerDisplay(read);
    LCD_DisplayString(" C   ");
    if(read>=0 && read<30)
    {
    	LCD_MoveAndDisplayString("OFF", 0, 8);
    	DcMotor_Rotate(Stop,0);

    }
    else if(read>=30 && read<60)
    {
    	    	LCD_MoveAndDisplayString("ON ", 0, 8);
    	    	DcMotor_Rotate(ClockWise,25);

    }
    else if(read>=60 && read<90)
     {
     	    	LCD_MoveAndDisplayString("ON ", 0, 8);
     	    	DcMotor_Rotate(ClockWise,50);

     }
    else if(read>=90 && read<120)
     {
     	    	LCD_MoveAndDisplayString("ON ", 0, 8);
     	    	DcMotor_Rotate(ClockWise,75);

     }
    else if(read>=120)
     {
     	    	LCD_MoveAndDisplayString("ON ", 0, 8);
     	    	DcMotor_Rotate(ClockWise,100);

     }



}



	return 0;
}

