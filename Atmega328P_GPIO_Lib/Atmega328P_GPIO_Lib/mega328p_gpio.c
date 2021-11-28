/*
 * mega328p_gpio.c
 *
 * Created: 28.11.2021 13:38:06
 *  Author: GokhanDokmetas
 */ 
#include "mega328p_gpio.h"

gpiod_regs gpiod = {(pind*)0x29, (ddrd*)0x2A, (portd*)0x2B};
gpiob_regs gpiob = {(pinb*)0x23, (ddrb*)0x24, (portb*)0x25};
gpioc_regs gpioc = {(pinc*)0x26, (ddrc*)0x27, (portc*)0x28};