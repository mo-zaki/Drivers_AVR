/*
 * main.c
 *
 *  Created on: Dec 10, 2021
 *      Author: zaki
 */

#include  "DIO_interface.h"
#include  "util/delay.h"
int main ()
{
	DIO_enum_ConfigChannel(DIO_u8GROUPC, DIO_u8PIN2, DIO_u8_OUTPUT);
while (1)
{

DIO_enum_WriteChannel(DIO_u8GROUPC, DIO_u8PIN2, DIO_u8_HIGH);
_delay_ms(200);
DIO_enum_WriteChannel(DIO_u8GROUPC, DIO_u8PIN2, DIO_u8_LOW);
_delay_ms(200);

}
	return 0;
}
