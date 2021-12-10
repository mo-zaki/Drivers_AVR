/*
 * BIT_MATH.h
 *
 *  Created on: Dec 10, 2021
 *      Author: zaki
 */

#ifndef COTS_BIT_MATH_H_
#define COTS_BIT_MATH_H_

#define SET_BIT(REG,BIT_NUM)     (REG |= (1<<BIT_NUM))
#define CLEAR_BIT(REG,BIT_NUM)   (REG &= ~(1<<BIT_NUM))
#define TOGGLE_BIT(REG,BIT_NUM)  (REG ^= (1<<BIT_NUM))
#define CHECK_BIT(REG,BIT_NUM)   ((REG>>BIT_NUM) &1)

#endif /* COTS_BIT_MATH_H_ */
