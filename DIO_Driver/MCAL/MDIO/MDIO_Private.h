/*
 * MDIO_Private.h
 *
 * Created: 2/19/2022 11:22:01 PM
 *  Author: Hamada
 */ 


#ifndef MDIO_PRIVATE_H_
#define MDIO_PRIVATE_H_


//TODO^ get addresses from data sheet
#define PORTA  *((volatile u8*)0xFF)
#define DDRA  *((volatile u8*)0xFF)
#define PINA  *((volatile u8*)0xFF)

#define PORTB  *((volatile u8*)0xFF)
#define DDRB  *((volatile u8*)0xFF)
#define PINB  *((volatile u8*)0xFF)

#define PORTC  *((volatile u8*)0xFF)
#define DDRC  *((volatile u8*)0xFF)
#define PINC  *((volatile u8*)0xFF)

#define PORTD  *((volatile u8*)0xFF)
#define DDRD  *((volatile u8*)0xFF)
#define PIND  *((volatile u8*)0xFF)


#endif /* MDIO_PRIVATE_H_ */