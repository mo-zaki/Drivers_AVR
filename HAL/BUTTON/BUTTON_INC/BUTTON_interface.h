/*
 * BUTTON_interface.h
 *
 *  Created on: Dec 10, 2021
 *      Author: zaki
 */

#ifndef HAL_BUTTON_BUTTON_INC_BUTTON_INTERFACE_H_
#define HAL_BUTTON_BUTTON_INC_BUTTON_INTERFACE_H_

#include "Error_state.h"
#include  "STD_TYPES.h"
#include  "BIT_MATH.h"
#include "DIO_interface.h"
#include  "BUTTON_config.h"

ES_T BUTTON_enum_InitButton();
ES_T BUTTON_enum_Pressed (Boolean_T *Copy_PBoolean_CheckPress);


#endif /* HAL_BUTTON_BUTTON_INC_BUTTON_INTERFACE_H_ */
