/**
  ************************************************************************************************************************
  * @file    eas_lcd.h
  * @author  Erisson Siqueira
	* @version	v1.0
  ************************************************************************************************************************
 */
 
#ifndef __LCD_H__
#define __LCD_H__

/* Includes ------------------------------------------------------------------------------------------------------------*/
#include "main.h"

/* Defines -------------------------------------------------------------------------------------------------------------*/
#define LCD_PORT		GPIOF

#define LCD_E(x)		((x) ? 	(HAL_GPIO_WritePin(GPIOE,LCD_E_Pin,  		ON)):(HAL_GPIO_WritePin(GPIOE,LCD_E_Pin,  	 OFF)));
#define LCD_RW(x)   ((x) ? 	(HAL_GPIO_WritePin(LCD_PORT,LCD_RW_Pin, ON)):(HAL_GPIO_WritePin(LCD_PORT,LCD_RW_Pin, OFF)));				
#define LCD_RS(x)   ((x) ? 	(HAL_GPIO_WritePin(LCD_PORT,LCD_RS_Pin,	ON)):(HAL_GPIO_WritePin(LCD_PORT,LCD_RS_Pin, OFF)));
#define LCD_D4(x)		((x) ? 	(HAL_GPIO_WritePin(LCD_PORT,LCD_D4_Pin, ON)):(HAL_GPIO_WritePin(LCD_PORT,LCD_D4_Pin, OFF)));
#define LCD_D5(x)		((x) ? 	(HAL_GPIO_WritePin(LCD_PORT,LCD_D5_Pin, ON)):(HAL_GPIO_WritePin(LCD_PORT,LCD_D5_Pin, OFF)));
#define LCD_D6(x)		((x) ? 	(HAL_GPIO_WritePin(LCD_PORT,LCD_D6_Pin, ON)):(HAL_GPIO_WritePin(LCD_PORT,LCD_D6_Pin, OFF)));
#define LCD_D7(x)		((x) ? 	(HAL_GPIO_WritePin(LCD_PORT,LCD_D7_Pin, ON)):(HAL_GPIO_WritePin(LCD_PORT,LCD_D7_Pin, OFF)));

/* Enumeration ---------------------------------------------------------------------------------------------------------*/	

/* Structs -------------------------------------------------------------------------------------------------------------*/

/* Function Prototypes -------------------------------------------------------------------------------------------------*/
void vLCD_Init(void);
void vLCD_Screen(uint8_t screen);

#endif	/* __LCD_H__ */
