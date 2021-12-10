/*
 * DIO_private.h
 *
 *  Created on: Dec 10, 2021
 *      Author: zaki
 */

#ifndef MCAL_DIO_DIO_INC_DIO_PRIVATE_H_
#define MCAL_DIO_DIO_INC_DIO_PRIVATE_H_

#include  "STD_TYPES.h"
/* Group A Registers */
#define DIO_PORTA_REG  (*((volatile u8*)0x3B))
#define DIO_DDRA_REG   (*((volatile u8*)0x3A))
#define DIO_PINA_REG   (*((volatile u8*)0x39))

/* Group B Registers */
#define DIO_PORTB_REG   (*((volatile u8*)0x38))
#define DIO_DDRB_REG    (*((volatile u8*)0x37))
#define DIO_PINB_REG    (*((volatile u8*)0x36))

/* Group C Registers */
#define DIO_PORTC_REG   (*((volatile u8*)0x35))
#define DIO_DDRC_REG   	(*((volatile u8*)0x34))
#define DIO_PINC_REG    (*((volatile u8*)0x33))

/* Group D Registers */
#define DIO_PORTD_REG   (*((volatile u8*)0x32))
#define DIO_DDRD_REG    (*((volatile u8*)0x31))
#define DIO_PIND_REG    (*((volatile u8*)0x30))

/* Configuration of Direction mode */
#define DIO_u8_INPUT   0
#define DIO_u8_OUTPUT  1
/*Level*/
#define  DIO_u8_LOW   0
#define  DIO_u8_HIGH  1
/*Groups */
#define  DIO_u8GROUPA  0
#define  DIO_u8GROUPB  1
#define  DIO_u8GROUPC  2
#define  DIO_u8GROUPD  3

/*PINs*/
#define  DIO_u8PIN0  0
#define  DIO_u8PIN1  1
#define  DIO_u8PIN2  2
#define  DIO_u8PIN3  3
#define  DIO_u8PIN4  4
#define  DIO_u8PIN5  5
#define  DIO_u8PIN6  6
#define  DIO_u8PIN7  7
/*Configuration of pin state*/
#define  DIO_u8_PULLDOWN 0
#define  DIO_u8_PULLUP   1

#endif /* MCAL_DIO_DIO_INC_DIO_PRIVATE_H_ */
