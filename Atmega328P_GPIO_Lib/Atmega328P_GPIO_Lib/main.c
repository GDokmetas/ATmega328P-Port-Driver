/*
 * Atmega328P_GPIO_Lib.c
 *
 * Created: 28.11.2021 12:45:08
 * Author : GokhanDokmetas
 */ 

#include <avr/io.h>
#include "mega328p_gpio.h"
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
    gpiod.ddr->all=0xFF;
	gpiob.ddr->all=0xFF;
    while (1) 
    {
	gpiod.port->all = 0xFF;
	gpiob.port->all = 0xFF;
	_delay_ms(500);
	gpiod.port->all = 0x00;
	gpiob.port->all = 0x00;
	_delay_ms(500);
    }
}

