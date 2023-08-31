/*
 * main.c
 *
 * Created: 8/31/2023 3:11:40 PM
 *  Author: Huy
 */ 
#define F_CPU 16000000UL
#include <xc.h>
#include <util/delay.h>

int main(void)
{
    while(1)
    {
        //TODO:: Please write your application code 
		PORTB = 0xFF;
		_delay_ms(500);
		PORTB = 0x00;
		_delay_ms(500);
    }
}