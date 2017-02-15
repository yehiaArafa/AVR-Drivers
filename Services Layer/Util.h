#ifndef _Util_H_
#define _Util_H_

#define SET_BIT(reg,bitNum)           reg |=(1<<bitNum) 
#define CLR_BIT(reg,bitNum)           reg &=~(1<<bitNum)
#define TOGGLE_BIT(reg,bitNum)        reg ^=(1<<bitNum)
#define GET_BIT(reg,bitNum)           (reg & (1<<bitNum))>> bitNum
#define ASSIGN_BIT(reg,bitNum,value)  reg = ((reg &~(1<<bitNum)) | (value<<bitNum)) 

#endif
