/*
 * DIO_interface.h
 *
 *  Created on: Dec 10, 2021
 *      Author: zaki
 */

#ifndef MCAL_DIO_DIO_INC_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INC_DIO_INTERFACE_H_

#include "Error_state.h"
#include  "STD_TYPES.h"
#include  "DIO_private.h"
#include  "BIT_MATH.h"

ES_T DIO_enum_ConfigChannel (u8 Copy_U8GroupID ,u8 Copy_u8PinID ,u8 Copy_u8Direction);
ES_T DIO_enum_ConfigBand (u8 Copy_U8GroupID,u8 Copy_u8Mask ,u8 Copy_u8Direction);
ES_T DIO_enum_WriteChannel (u8 Copy_U8GroupID,u8 Copy_u8PinID, u8 Copy_u8Level);
ES_T DIO_enum_WriteBand (u8 Copy_U8GroupID,u8 Copy_u8Mask,u8 Copy_u8Value);
ES_T DIO_enum_ReadChannel (u8 Copy_U8GroupID ,u8 Copy_u8PinID ,u8 *Copy_Pu8Value);
ES_T DIO_enum_ToggleChannel (u8 Copy_U8GroupID ,u8 Copy_u8PinID);


#endif /* MCAL_DIO_DIO_INC_DIO_INTERFACE_H_ */
