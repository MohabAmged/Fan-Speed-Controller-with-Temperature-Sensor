/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		  PWM.C
 *  Module:  	  Timer
 *
 *  Description:  Src file for the PWM
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *	Author: 	  Mohab Amged
 *	Date:		  6/10/2022
 *********************************************************************************************************************/


/**************************************************************************************************************************************
*
*                                                 INCLUDES
*
**************************************************************************************************************************************/
#include "PWM.h"


/**************************************************************************************************************************************
*
*                                                Functions Prototypes
*
**************************************************************************************************************************************/

/* Timer PWM Start Function With The given Duty Cycle */
void PWM_Timer0_Start(uint8 duty_cycle)
{
   /* init Variable */
	uint8 speed=0;
	/* Setting The Timer Mode To PWM*/
	SET_BIT(TCCR0,WGM01);
	SET_BIT(TCCR0,WGM00);
	/* Setting Non Inverting Mode */
	SET_BIT(TCCR0,COM01);
	CLEAR_BIT(TCCR0,COM00);
	/* Select Prescaler */
	SET_BIT(TCCR0,CS01);
	CLEAR_BIT(TCCR0,CS00);
	CLEAR_BIT(TCCR0,CS02);
	/* Initial value 0*/
	TCNT0=0;

	 /* Set OC0 As an output */
	    GPIO_setupPinDirection(PORTIDB,3, POUTPUT);

if(duty_cycle>=0 && duty_cycle<=100)
  {
	/* Mapping the Input To The Register Value */
	speed= (uint8) ( ((float) 255* ( duty_cycle))/(100));

	/* Adding The Value To the Register */
	OCR0=speed;


    }
else
{

	/* do nothing */
}




}




