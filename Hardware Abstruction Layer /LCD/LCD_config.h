#ifndef _LCD_CONFIG_H_
#define _LCD_CONFIG_H_


/*****LCD PINS *****/
#define LCD_D0      PIN0
#define LCD_D1      PIN1
#define LCD_D2      PIN2
#define LCD_D3      PIN3
#define LCD_D4      PIN4
#define LCD_D5      PIN5
#define LCD_D6      PIN6
#define LCD_D7      PIN7

#define LCD_RS	    PIN8
#define LCD_RW      PIN9
#define LCD_E       PIN10

/***** CONFIGRATIONS *****/
#define LCD_READ     0
#define LCD_WRITE    1

#define LCD_COMMAND  0
#define LCD_DATA     1

#define LCD_DISABLE  0
#define LCD_ENABLE   1

#define LCD_initSTATE   LCD_DISABLE


#endif