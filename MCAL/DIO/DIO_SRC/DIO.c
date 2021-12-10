/*
 * DIO.c
 *
 *  Created on: Dec 10, 2021
 *      Author: zaki
 */
#include "DIO_interface.h"

ES_T DIO_enum_ConfigChannel (u8 Copy_U8GroupID ,u8 Copy_u8PinID ,u8 Copy_u8Direction)
{
ES_T Local_enumErrorState =ES_NOK;
if (Copy_U8GroupID <=DIO_u8GROUPD && Copy_u8PinID <=DIO_u8PIN7 && Copy_u8Direction <=DIO_u8_OUTPUT)
{
	switch (DIO_u8GROUPD)
	{
	case DIO_u8GROUPA :
		if (Copy_u8Direction ==DIO_u8_INPUT)
		{
			CLEAR_BIT(DIO_DDRA_REG,Copy_u8PinID);
		}
		else
		{
			SET_BIT(DIO_DDRA_REG,Copy_u8PinID)	;
		}
		break;
	case DIO_u8GROUPB :
		if (Copy_u8Direction ==DIO_u8_INPUT)
		{
			CLEAR_BIT(DIO_DDRB_REG,Copy_u8PinID);
		}
		else
		{
			SET_BIT(DIO_DDRB_REG,Copy_u8PinID)	;
		}
		break;
	case DIO_u8GROUPC :
		if (Copy_u8Direction ==DIO_u8_INPUT)
		{
			CLEAR_BIT(DIO_DDRC_REG,Copy_u8PinID);
		}
		else
		{
			SET_BIT(DIO_DDRC_REG,Copy_u8PinID)	;
		}
		break;
	case DIO_u8GROUPD :
		if (Copy_u8Direction ==DIO_u8_INPUT)
		{
			CLEAR_BIT(DIO_DDRD_REG,Copy_u8PinID);
		}
		else
		{
			SET_BIT(DIO_DDRD_REG,Copy_u8PinID)	;
		}
		break;
	}

	Local_enumErrorState=ES_OK ;
}
else
{
	Local_enumErrorState =ES_OUT_OF_RANGE ;
}

return Local_enumErrorState;

}

ES_T DIO_enum_ConfigBand (u8 Copy_U8GroupID,u8 Copy_u8Mask ,u8 Copy_u8Direction)

{
	ES_T Local_enum_ErrorState =ES_NOK ;

	if (Copy_U8GroupID <=DIO_u8GROUPD && Copy_u8Direction <=DIO_u8_OUTPUT && Copy_u8Mask > 0x00)
	{
		switch (DIO_u8GROUPD)
		{
		case DIO_u8GROUPA :
			if (Copy_u8Direction==DIO_u8_INPUT)
			{
				DIO_DDRA_REG= (DIO_DDRA_REG & ~Copy_u8Mask);
			}
			else
			{
				DIO_DDRA_REG=(DIO_DDRA_REG | Copy_u8Mask);

			}
			break;
		case DIO_u8GROUPB :
			if (Copy_u8Direction==DIO_u8_INPUT)
			{
				DIO_DDRB_REG= (DIO_DDRB_REG & ~Copy_u8Mask);
			}
			else
			{
				DIO_DDRB_REG=(DIO_DDRB_REG | Copy_u8Mask);

			}
			break;
		case DIO_u8GROUPC :
			if (Copy_u8Direction==DIO_u8_INPUT)
			{
				DIO_DDRC_REG= (DIO_DDRC_REG & ~Copy_u8Mask);
			}
			else
			{
				DIO_DDRC_REG=(DIO_DDRC_REG | Copy_u8Mask);

			}
			break;
		case DIO_u8GROUPD :
			if (Copy_u8Direction==DIO_u8_INPUT)
			{
				DIO_DDRD_REG= (DIO_DDRD_REG & ~Copy_u8Mask);
			}
			else
			{
				DIO_DDRD_REG=(DIO_DDRD_REG | Copy_u8Mask);

			}
			break;

		}
		Local_enum_ErrorState = ES_OK ;
	}
	else
	{
		Local_enum_ErrorState = ES_OUT_OF_RANGE ;
	}
	return Local_enum_ErrorState ;
}

ES_T DIO_enum_WriteChannel (u8 Copy_U8GroupID,u8 Copy_u8PinID, u8 Copy_u8Level)
{
	ES_T Local_enum_ErrorState =ES_NOK ;
	if (Copy_U8GroupID <=DIO_u8GROUPD && Copy_u8PinID <=DIO_u8PIN7 && Copy_u8Level <=DIO_u8_HIGH)
	{
		switch (Copy_U8GroupID)
		{
		case DIO_u8GROUPA :
			if (Copy_u8Level==DIO_u8_LOW)
			{
				CLEAR_BIT(DIO_PORTA_REG ,Copy_u8PinID);
			}
			else
			{
				SET_BIT(DIO_PORTA_REG ,Copy_u8PinID);
			}
			break ;
		case DIO_u8GROUPB :
			if (Copy_u8Level==DIO_u8_LOW)
			{
				CLEAR_BIT(DIO_PORTB_REG ,Copy_u8PinID);
			}
			else
			{
				SET_BIT(DIO_PORTB_REG ,Copy_u8PinID);
			}
			break ;
		case DIO_u8GROUPC :
			if (Copy_u8Level==DIO_u8_LOW)
			{
				CLEAR_BIT(DIO_PORTC_REG ,Copy_u8PinID);
			}
			else
			{
				SET_BIT(DIO_PORTC_REG ,Copy_u8PinID);
			}
			break ;
		case DIO_u8GROUPD :
			if (Copy_u8Level==DIO_u8_LOW)
			{
				CLEAR_BIT(DIO_PORTD_REG ,Copy_u8PinID);
			}
			else
			{
				SET_BIT(DIO_PORTD_REG ,Copy_u8PinID);
			}
			break ;
		}
		Local_enum_ErrorState =ES_OK ;
	}
	else
	{
		Local_enum_ErrorState =ES_OUT_OF_RANGE;
	}
	return Local_enum_ErrorState ;
}

ES_T DIO_enum_WriteBand (u8 Copy_U8GroupID,u8 Copy_u8Mask,u8 Copy_u8Value)
{
	ES_T Local_u8_ErrorState = ES_NOK ;
	if (Copy_U8GroupID <=DIO_u8GROUPD && Copy_u8Mask > 0x00 && Copy_u8Value <= 0xFF)
	{
		switch (Copy_U8GroupID)
		{
		case DIO_u8GROUPA :

				DIO_PORTA_REG=(DIO_PORTA_REG & ~ Copy_u8Mask)|(Copy_u8Value & Copy_u8Mask);
			break ;
		case DIO_u8GROUPB :
			DIO_PORTB_REG=(DIO_PORTB_REG & ~ Copy_u8Mask)|(Copy_u8Value & Copy_u8Mask);
			break ;
		case DIO_u8GROUPC :
			DIO_PORTC_REG=(DIO_PORTC_REG & ~ Copy_u8Mask)|(Copy_u8Value & Copy_u8Mask);
			break ;
		case DIO_u8GROUPD :
			DIO_PORTC_REG=(DIO_PORTC_REG & ~ Copy_u8Mask)|(Copy_u8Value & Copy_u8Mask);
			break ;
		}
		Local_u8_ErrorState =ES_OK ;
	}
	else
	{
		Local_u8_ErrorState =ES_OUT_OF_RANGE ;
	}
	return Local_u8_ErrorState ;
}

ES_T DIO_enum_ReadChannel (u8 Copy_U8GroupID ,u8 Copy_u8PinID ,u8 *Copy_Pu8Value)
{
	ES_T Local_enum_ErrorState =ES_NOK;
	if (Copy_Pu8Value !=NULL)
	{
		if (Copy_U8GroupID <=DIO_u8GROUPD && Copy_u8PinID <=DIO_u8PIN7)
		{
			switch (Copy_U8GroupID)
			{
			case DIO_u8GROUPA :
				*Copy_Pu8Value=CHECK_BIT(DIO_PORTA_REG,Copy_u8PinID);
				break;
			case DIO_u8GROUPB :
				*Copy_Pu8Value=CHECK_BIT(DIO_PORTB_REG,Copy_u8PinID);
				break;
			case DIO_u8GROUPC :
				*Copy_Pu8Value=CHECK_BIT(DIO_PORTC_REG,Copy_u8PinID);
				break;
			case DIO_u8GROUPD :
				*Copy_Pu8Value=CHECK_BIT(DIO_PORTD_REG,Copy_u8PinID);
				break;
			}
			Local_enum_ErrorState =ES_OK;
		}
		else
		{
			Local_enum_ErrorState =ES_OUT_OF_RANGE ;
		}
	}
	else
	{
		Local_enum_ErrorState =ES_NULL_POINTER;
	}
	return Local_enum_ErrorState;
}

ES_T DIO_enum_ToggleChannel (u8 Copy_U8GroupID ,u8 Copy_u8PinID)
{
	ES_T Local_enum_ErrorState =ES_NOK;
	if (Copy_U8GroupID <=DIO_u8GROUPD && Copy_u8PinID <=DIO_u8PIN7)
	{
		switch (Copy_U8GroupID)
		{
		case DIO_u8GROUPA :
			TOGGLE_BIT(DIO_PORTA_REG,Copy_u8PinID);
			break;
		case DIO_u8GROUPB :
			TOGGLE_BIT(DIO_PORTB_REG,Copy_u8PinID);
			break;
		case DIO_u8GROUPC :
			TOGGLE_BIT(DIO_PORTC_REG,Copy_u8PinID);
			break;
		case DIO_u8GROUPD :
			TOGGLE_BIT(DIO_PORTD_REG,Copy_u8PinID);
			break;
		}
		Local_enum_ErrorState =ES_OK ;
	}
	else
	{
		Local_enum_ErrorState =ES_OUT_OF_RANGE ;
	}
return Local_enum_ErrorState ;
}
