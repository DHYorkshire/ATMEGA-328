/*
 * File:   newavr-main.c
 * Author: owner
 *
 * Created on 04 July 2021, 21:56
 */

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	DDRB |= (1<<DDB1);
    while (1) 
    {
	PORTB |= (1<<PORTB1);
	_delay_ms(1000);
	PORTB &= ~ (1<<PORTB1);
	_delay_ms(1000);
    }
}


