/*
 * DIO_Driver.c
 *
 * Created: 2/19/2022 11:20:31 PM
 *  Author: Hamada
 */ 


#include "LIB/LSTD_TYPES.h"
#include "MCAL/MDIO/MDIO_Interface.h"
int main(void)
{
	MDIO_Set_Pin_Direction(MDIO_PORTA, PIN7, PIN_OUTPUT);
	MDIO_Set_Pin_Value(MDIO_PORTA, PIN7, PIN_HIGH);
    while(1)
    {
        //TODO:: Please write your application code 
    }
}