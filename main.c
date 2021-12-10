/*
 * main.c
 *
 *  Created on: Dec 10, 2021
 *      Author: zaki
 */

#include  "DIO_interface.h"
#include  "BUTTON_interface.h"
#include  "util/delay.h"
int main ()
{
	DIO_enum_ConfigChannel(DIO_u8GROUPC, DIO_u8PIN7, DIO_u8_OUTPUT);
	BUTTON_enum_InitButton();
	Boolean_T Local_Boolean_CheckPress =FALSE;
while (1)
{

	BUTTON_enum_Pressed(& Local_Boolean_CheckPress);
	while (Local_Boolean_CheckPress==FALSE)
	{
		DIO_enum_WriteChannel(DIO_u8GROUPC, DIO_u8PIN7, DIO_u8_HIGH);
		if(Local_Boolean_CheckPress==TRUE)
		{
			DIO_enum_WriteChannel(DIO_u8GROUPC, DIO_u8PIN7, DIO_u8_LOW);
			break;
		}
	}


}
	return 0;
}
