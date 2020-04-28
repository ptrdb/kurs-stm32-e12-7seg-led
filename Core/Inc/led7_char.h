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
#ifndef INC_LED7_CHAR_H_
#define INC_LED7_CHAR_H_

/* Characters definition table */
const uint8_t char_code[] = {
		0b00111111,	/* 0 */
		0b00000110,	/* 1 */
		0b01011011,	/* 2 */
		0b01001111,	/* 3 */
		0b01100110,	/* 4 */
		0b01101101,	/* 5 */
		0b01111101,	/* 6 */
		0b00000111,	/* 7 */
		0b01111111,	/* 8 */
		0b01101111,	/* 9 */
		0b01110111,	/* A */
		0b01111100,	/* b */
		0b01011000,	/* c */
		0b01011110,	/* d */
		0b01111001,	/* E */
		0b01110001,	/* F */
		0b01011100,	/* o */
		0b01010000,	/* r */
		0b01000000, /* minus */
		0b00000000	/* blank */
};

#endif /* INC_LED7_CHAR_H_ */
