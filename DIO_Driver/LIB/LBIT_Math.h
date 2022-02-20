/*
 * IncFile1.h
 *
 * Created: 2/19/2022 11:46:15 PM
 *  Author: Hamada
 */ 


#ifndef INCFILE1_H_
#define INCFILE1_H_

#define SET_BIT(VAL,BIT)    VAL|=(1<<BIT)
#define CLR_BIT(VAL,BIT)    VAL&=(~(1<<BIT))
#define TGL_BIT(VAL,BIT)    VAL^=(1<<BIT)

//#define GET_BIT(VAL,BIT)    (VAL>>BIT)&0x01
#define GET_BIT(VAL,BIT)    ((VAL & (1<<BIT))>>BIT)





#endif /* INCFILE1_H_ */