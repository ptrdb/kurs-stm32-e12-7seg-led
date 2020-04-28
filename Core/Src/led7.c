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

#include "led7.h"
#include "led7_char.h"


/**
  * @brief  Set an active display.
  * @param  disp_num Display position to be activated.
  * @retval None
  */
void led7_set_disp(uint8_t disp_num) {
	/* clear all displays */
	GPIO_DISP_PORT->ODR |= (GPIO_DISP_PIN_MASK << GPIO_DISP_FIRST_PIN);

	/* set display */
	GPIO_DISP_PORT->ODR &= ((GPIO_DISP_PIN_MASK ^ (1 << disp_num)) << GPIO_DISP_FIRST_PIN);
}

/**
  * @brief  Display a single character from array char_code.
  * @param  num Character position in the char_code array.
  * @param	dp_en Enable an decimal point on display.
  * @retval None
  */
void led7_set_char_num(uint8_t num, uint8_t dp_en) {
	/* clear all segments */
	GPIO_SEG_PORT->ODR |= (GPIO_SEG_PIN_MASK << GPIO_SEG_FIRST_PIN);

	/* set character */
	if(!dp_en)
	{
		/* without decimal point */
		GPIO_SEG_PORT->ODR &= (~char_code[num] << GPIO_SEG_FIRST_PIN);
	}
	else
	{
		/* with decimal point */
		GPIO_SEG_PORT->ODR &= (~(char_code[num] | DP_PIN) << GPIO_SEG_FIRST_PIN);
	}
}

/**
  * @brief  Display single character based on an enum number.
  * @param  ch Char_enum value.
  * @param	dp_en Enable an decimal point on display.
  * @retval None
  */
void led7_set_char(enum char_enum ch, uint8_t dp_en) {
	led7_set_char_num(ch, dp_en);
}

/**
  * @brief  Clear all displays.
  * @param  None
  * @retval None
  */
void led7_clear_disp(void) {
	/* clear all */
	GPIO_DISP_PORT->ODR |= (GPIO_DISP_PIN_MASK << GPIO_DISP_FIRST_PIN);
}

/**
  * @brief  Clear all segments.
  * @param  None
  * @retval None
  */
void led7_clear_seg(void) {
	/* clear all */
	GPIO_SEG_PORT->ODR |= (GPIO_SEG_PIN_MASK << GPIO_SEG_FIRST_PIN);
}
