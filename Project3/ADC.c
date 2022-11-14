
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		  ADC.C
 *  Module:  	  ADC
 *
 *  Description:  Src file for the ADC
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
#include "ADC.h"
/**************************************************************************************************************************************
*
*                                                Functions definition
*
**************************************************************************************************************************************/

/* ADC Init Function */
  void ADC_init(const ADC_ConfigType * Config_Ptr)
 {
	 /*   Setting The Ref Selection Bits    */
        ADMUX=(ADMUX&0x3F)|(Config_Ptr->ref_volt);

     /* Setting ADLR =0 */
        CLEAR_BIT(ADMUX,ADLAR);

        /*  Enable ADC */
        SET_BIT(ADCSRA,ADEN);

     /* Setting Prescaler       */
      ADCSRA=(ADCSRA&0xF8)|(Config_Ptr->prescaler);



 }


 /* ADC Read Channel Function */
  uint16 ADC_ReadChannel(ADC_Channel Channel)
  {
 	 /*   Setting The Channel Selection Bits    */
         ADMUX=(ADMUX&0xE0)|(Channel&0x1F);

      /* Start Conversation */
         SET_BIT(ADCSRA,ADSC);

       /* Wait Till Flag Raise */
      while(!GET_BIT(ADCSRA,ADIF));
      /* Clear Flag */
      SET_BIT(ADCSRA,ADIF);

      /* Get Data From ADC Register */

      return ADC;

  }



