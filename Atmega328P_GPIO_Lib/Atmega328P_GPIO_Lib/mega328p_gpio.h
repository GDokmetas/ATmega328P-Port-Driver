/*
 * mega328p_gpio.h
 *
 * Created: 28.11.2021 12:45:43
 *  Author: GokhanDokmetas
 */ 


#ifndef MEGA328P_GPIO_H_
#define MEGA328P_GPIO_H_
#include <stdint.h>
// GPIOD
typedef struct{
	uint8_t bit0:1; // 0
	uint8_t bit1:1; // 1
	uint8_t bit2:1; // 2
	uint8_t bit3:1; // 3
	uint8_t bit4:1; // 4
	uint8_t bit5:1; // 5
	uint8_t bit6:1; // 6
	uint8_t bit7:1; // 7
}d_port_bits;

typedef union dportbits{
	d_port_bits bits;
	uint8_t all;
} portd, ddrd, pind;

typedef struct{
	pind* pin;
	ddrd* ddr;
	portd* port;
}gpiod_regs;

extern gpiod_regs gpiod;
// GPIOB
typedef struct{
	uint8_t bit0:1; // 0
	uint8_t bit1:1; // 1
	uint8_t bit2:1; // 2
	uint8_t bit3:1; // 3
	uint8_t bit4:1; // 4
	uint8_t bit5:1; // 5
	uint8_t bit6:1; // 6
	uint8_t bit7:1; // 7
}b_port_bits;

typedef union bportbits{
	b_port_bits bits;
	uint8_t all;
} portb, ddrb, pinb;

typedef struct{
	pinb* pin;
	ddrb* ddr;
	portb* port;
}gpiob_regs;

extern gpiob_regs gpiob;
//GPIOC
typedef struct{
	uint8_t bit0:1; // 0
	uint8_t bit1:1; // 1
	uint8_t bit2:1; // 2
	uint8_t bit3:1; // 3
	uint8_t bit4:1; // 4
	uint8_t bit5:1; // 5
	uint8_t bit6:1; // 6
	uint8_t rsvd:1; // 7
}c_port_bits;

typedef union cportbits{
	c_port_bits bits;
	uint8_t all;
} portc, ddrc, pinc;

typedef struct{
	pinc* pin;
	ddrc* ddr;
	portc* port;
}gpioc_regs;

extern gpioc_regs gpioc;

#endif /* MEGA328P_GPİO_H_ */