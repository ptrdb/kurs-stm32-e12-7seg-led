/* The MIT License
 *
 * Copyright (c) 2020 Piotr Duba
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef INC_LED7_H_
#define INC_LED7_H_

#include <stdio.h>
#include "stm32f3xx_hal.h"

#define GPIO_DISP_PORT	GPIOA	/* GPIO of displays */
#define GPIO_DISP_FIRST_PIN	6	/* First display pin */
#define GPIO_DISP_PIN_MASK	0x0F /* Number of pins 0x0F = 0b1111 -> 4 pins */

#define GPIO_SEG_PORT	GPIOC	/* GPIO of segments */
#define GPIO_SEG_FIRST_PIN	0	/* First pin - PC0 */
#define GPIO_SEG_PIN_MASK	0xFF	/* Number of pins 0xFF = 0b11111111 -> 8 pins */

#define DP_PIN 0b10000000	/* Decimal point pin */

/* Enumerate characters address */
enum char_enum {n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, A, b, c, d, E, F, o, r, minus, BLANK};

/* Single character structure */
struct disp_char {
	enum char_enum code;
	uint8_t dp_en;
};

/* led7 functions */
void led7_set_disp(uint8_t disp_num);
void led7_set_char_num(uint8_t num, uint8_t dp_en);
void led7_set_char(enum char_enum ch, uint8_t dp_en);
void led7_clear_disp(void);
void led7_clear_seg(void);

#endif /* INC_LED7_H_ */
