#ifndef LCD_H_
#define LCD_H_
#include <avr/io.h>
#include <util/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO.h"
 
 
#define LCD_DATA_GROUP   GROUP_A
#define LCD_CTRL_GROUP   GROUP_B
#define LCD_CTRL_RS      0
#define LCD_CTRL_RW      1
#define LCD_CTRL_EN      2
 
 
 
 
/*LCD Intialiazattion Function*/
void LCD_Init(void);

/*LCD Send Data Function*/
void  LCD_SendData(u8 Data);

/*LCD Send Command Function*/
void  LCD_SendCommand(u8 Command);



 
#endif