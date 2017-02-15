#ifndef SEGMENT_INTERFACE_H_
#define SEGMENT_INTERFACE_H_


extern void SEGMENT_INIT(void);
extern u8 SEGMENT_clearDisplay();
extern u8 SEGMENT_display_num(u8 value);//send (0-1-2-3-4-5-6-7-8-9)
extern u8 SEGMENT_display_char(u8 value); //send UPPER CASE only (A-B-C-D-E-F)

#endif