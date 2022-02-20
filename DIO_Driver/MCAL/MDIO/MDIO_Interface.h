/*
 * MDIO_Interface.h
 *
 * Created: 2/19/2022 11:21:22 PM
 *  Author: Hamada
 */ 


#ifndef MDIO_INTERFACE_H_
#define MDIO_INTERFACE_H_

typedef enum {
	OK,
	NOK
	}Error_State;

typedef enum{
	PIN0=0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7
	}PIN_t;

#define MDIO_PORTA    0
#define MDIO_PORTB    1
#define MDIO_PORTC    2
#define MDIO_PORTD    3

#define PIN_OUTPUT    1
#define PIN_INPUT     0

#define PIN_HIGH      1
#define PIN_LOW       0

//---------------------------------------------------------------

Error_State MDIO_Set_Pin_Direction(u8 Copy_u8MDIO_PORT, u8 Copy_u8PIN, u8 Copy_u8Direction);
Error_State MDIO_Set_Pin_Value(u8 Copy_u8MDIO_PORT, u8 Copy_u8PIN, u8 Copy_u8value);
Error_State MDIO_Read_Pin_Value(u8 Copy_u8MDIO_PORT, u8 Copy_u8PIN, u8* p_u8PinValue);





#endif /* MDIO_INTERFACE_H_ */