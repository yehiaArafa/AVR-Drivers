#ifndef _LCD_INTERFACE_H_
#define _LCD_INTERFACE_H_

extern void LCD_INIT(void);
extern void LCD_clearScreen(void);
extern void LCD_displayOff(void);
extern void LCD_cursorAtFirstLine(void);
extern void LCD_cursorBlinking(void);
extern void LCD_cursorON(void);
extern u8 LCD_cursorAtSecondLine(void);
extern void LCD_writeCommand(u8);
extern void LCD_writeChar(u8);
extern void LCD_writeString(u8 *);

#endif