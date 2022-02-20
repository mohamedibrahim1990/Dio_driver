/*
 * MDIO_Program.c
 *
 * Created: 2/19/2022 11:22:21 PM
 *  Author: Hamada
 */ 

#include "../../LIB/LBIT_Math.h"
#include "../../LIB/LSTD_TYPES.h"

#include "MDIO_Interface.h"
#include "MDIO_Private.h"


Error_State MDIO_Set_Pin_Direction(u8 Copy_u8MDIO_PORT, u8 Copy_u8PIN, u8 Copy_u8Direction)
{
	Error_State Loc_Error_State = OK;
	switch(Copy_u8MDIO_PORT){
		case MDIO_PORTA: {
			switch(Copy_u8Direction){
				case PIN_OUTPUT:{
					SET_BIT(DDRA,Copy_u8PIN);
				}break;
				case PIN_INPUT: {
					CLR_BIT(DDRA,Copy_u8PIN);
				}break;
				default:{
					Loc_Error_State=NOK;
				}
			}
		}break;
		case MDIO_PORTB: {
			switch(Copy_u8Direction){
				case PIN_OUTPUT:{
					SET_BIT(DDRB,Copy_u8PIN);	
				}break;
				case PIN_INPUT: {
					CLR_BIT(DDRB,Copy_u8PIN);	
				}break;
				default:{
					Loc_Error_State=NOK;
				}
			}
		}break;
		case MDIO_PORTC: {
			switch(Copy_u8Direction){
				case PIN_OUTPUT:{
					SET_BIT(DDRC,Copy_u8PIN);
				}break;
				case PIN_INPUT: {
					CLR_BIT(DDRC,Copy_u8PIN);
				}break;
				default:{
					Loc_Error_State=NOK;
				}
			}
		}break;
		case MDIO_PORTD: {
			switch(Copy_u8Direction){
				case PIN_OUTPUT:{
					SET_BIT(DDRD,Copy_u8PIN);
				}break;
				case PIN_INPUT: {
					CLR_BIT(DDRD,Copy_u8PIN);
				}break;
				default:{
					Loc_Error_State=NOK;
				}
			}
		}break;
		default:{
			Loc_Error_State=NOK;
		}
	}
	return Loc_Error_State;
}
Error_State MDIO_Set_Pin_Value(u8 Copy_u8MDIO_PORT, u8 Copy_u8PIN, u8 Copy_u8value)
{
	Error_State Loc_Error_State = OK;
	switch(Copy_u8MDIO_PORT){
		case MDIO_PORTA: {
			switch(Copy_u8value){
				case PIN_HIGH:{
					SET_BIT(PORTA,Copy_u8PIN);
				}break;
				case PIN_LOW: {
					CLR_BIT(PORTA,Copy_u8PIN);
				}break;
				default:{
					Loc_Error_State=NOK;
				}
			}
		}break;
		case MDIO_PORTB: {
			switch(Copy_u8value){
				case PIN_HIGH:{
					SET_BIT(PORTB,Copy_u8PIN);
				}break;
				case PIN_LOW: {
					CLR_BIT(PORTB,Copy_u8PIN);
				}break;
				default:{
					Loc_Error_State=NOK;
				}
			}
		}break;
		case MDIO_PORTC: {
			switch(Copy_u8value){
				case PIN_HIGH:{
					SET_BIT(PORTC,Copy_u8PIN);
				}break;
				case PIN_LOW: {
					CLR_BIT(PORTC,Copy_u8PIN);
				}break;
				default:{
					Loc_Error_State=NOK;
				}
			}
		}break;
		case MDIO_PORTD: {
			switch(Copy_u8value){
				case PIN_HIGH:{
					SET_BIT(PORTD,Copy_u8PIN);
				}break;
				case PIN_LOW: {
					CLR_BIT(PORTD,Copy_u8PIN);
				}break;
				default:{
					Loc_Error_State=NOK;
				}
			}
		}break;
		default:{
			Loc_Error_State=NOK;
		}
	}
	return Loc_Error_State;
	
}
Error_State MDIO_Read_Pin_Value(u8 Copy_u8MDIO_PORT, u8 Copy_u8PIN, u8* p_u8PinValue)
{
	Error_State Loc_Error_State = OK;
	switch(Copy_u8MDIO_PORT){
		case MDIO_PORTA: {
			*p_u8PinValue = GET_BIT(PINA,Copy_u8PIN);
		}break;
		case MDIO_PORTB: {
			*p_u8PinValue = GET_BIT(PINB,Copy_u8PIN);
		}break;
		case MDIO_PORTC: {
			*p_u8PinValue = GET_BIT(PINC,Copy_u8PIN);
		}break;
		case MDIO_PORTD: {
			*p_u8PinValue = GET_BIT(PIND,Copy_u8PIN);
		}break;
		default:{
			Loc_Error_State=NOK;
		}
	}
	return Loc_Error_State;
	
}