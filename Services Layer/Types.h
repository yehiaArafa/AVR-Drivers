#ifndef _TYPES_H_
#define _TYPES_H_

typedef unsigned char          u8; //[8 bits] from 0 to 255 decimal number + Stores ASCII char //
typedef signed char            s8; // [8 bits--> 1 bit for sign and 7 for the value] from -128 to 127 decimal number // 
typedef unsigned short int     u16; // from 0 to 65535 decimal number//
typedef signed short int       s16; // [16 bits--> 1 bit for sign and 15 for the value] from -32768 to 32767 decimal number //
typedef unsigned long int      u32; // from 0 to 2^32 decimal number//
typedef signed long int        s32; // from -2^31 to 2^31 - 1 deciaml number//
typedef unsigned long long int u64;
typedef signed long long int   s64;
typedef float                  f32;
typedef double                 d64;

#define ERROR 0
#define OK    1


/***** DIRECTION *****/
#define INPUT  0
#define OUTPUT 1

/***** VALUE *****/
#define HIGH 1
#define LOW  0


#endif 