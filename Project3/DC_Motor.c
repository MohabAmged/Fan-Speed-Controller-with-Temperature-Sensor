/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		  DC_Motor.c
 *  Module:  	  Dc Motor
 *
 *  Description:  src file for the DC Motor
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
#include "DC_Motor.h"

/**************************************************************************************************************************************
*
*                                                Functions Definition
*
**************************************************************************************************************************************/

void DcMotor_Init(void)
{

	 /* Setting Pins Direction */
		 GPIO_setupPinDirection(MOTOR_PORT, MOTOR_PIN1, POUTPUT);
		 GPIO_setupPinDirection(MOTOR_PORT, MOTOR_PIN2, POUTPUT);



}
 /* Set Direction And Speed */
 void DcMotor_Rotate(DcMotor_State State , uint8 speed )
 {



 	if(State==ClockWise)
 	{
 		// To Rotate The Motor ACW
 		GPIO_writePin(MOTOR_PORT,MOTOR_PIN1,PHIGH);
 		GPIO_writePin(MOTOR_PORT,MOTOR_PIN2,PLOW);


 	}
 	else if(State==AntiClockWise)
 	{
 		// To Rotate The Motor ACW
 		 		GPIO_writePin(MOTOR_PORT,MOTOR_PIN1,PLOW);
 		 		GPIO_writePin(MOTOR_PORT,MOTOR_PIN2,PHIGH);
 	}
 	else if(State==Stop)
 	{
 		                // To Rotate The Motor ACW
 		 		 		GPIO_writePin(MOTOR_PORT,MOTOR_PIN1,PLOW);
 		 		 		GPIO_writePin(MOTOR_PORT,MOTOR_PIN2,PLOW);

 	}

    /* Adjusting Motor Speed */
 	PWM_Timer0_Start(speed);





}
