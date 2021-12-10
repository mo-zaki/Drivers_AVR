/*
 * BUTTON.c
 *
 *  Created on: Dec 10, 2021
 *      Author: zaki
 */

#include  "BUTTON_interface.h"

ES_T BUTTON_enum_InitButton()
{
ES_T Local_enum_DIOErrors[2] ,Local_enumErrorState=ES_NOK;
u8 Local_u8_Itrator=0;

Local_enum_DIOErrors[0]=DIO_enum_ConfigChannel(BUTTON_u8GROUP, BUTTON_u8PIN, DIO_u8_INPUT);
Local_enum_DIOErrors[1]=DIO_enum_WriteChannel(BUTTON_u8GROUP, BUTTON_u8PIN, BUTTON_CONNUCTION);
for (Local_u8_Itrator=0;Local_u8_Itrator <2;Local_u8_Itrator++)
{
	if(Local_enum_DIOErrors[Local_u8_Itrator]!= ES_OK)
	{
		return ES_NOK;
	}
}
Local_enumErrorState=ES_OK;
return Local_enumErrorState;

}

ES_T BUTTON_enum_Pressed (Boolean_T *Copy_PBoolean_CheckPress)
{
	ES_T Local_u8ErrorState=ES_NOK;
	if (Copy_PBoolean_CheckPress!=NULL)
	{
		Local_u8ErrorState=DIO_enum_ReadChannel(BUTTON_u8GROUP, BUTTON_u8PIN , Copy_PBoolean_CheckPress);

	}
	else
	{
		Local_u8ErrorState=ES_NULL_POINTER;
	}
	return Local_u8ErrorState;
}
