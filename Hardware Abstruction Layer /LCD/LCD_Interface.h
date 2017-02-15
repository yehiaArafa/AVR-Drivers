#ifndef _LCD_INTERFACE_H_
#define _LCD_INTERFACE_H_

extern void LCD_INIT(void);
extern void LCD_clearScreen(void);
extern void LCD_displayOff(void);
extern void LCD_writeCommand(u8 command);
extern void LCD_writeChar(u8 data);
extern void LCD_writeString(u8 *ptrToString);

#endif