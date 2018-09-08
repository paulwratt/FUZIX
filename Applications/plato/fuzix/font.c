/**
 * Font definitions for font memories M0 and M1
 */

#include <stdint.h>

uint8_t FONT_SIZE_X = 4;
uint8_t FONT_SIZE_Y = 6;

uint8_t font[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	/* SPACE 0x20 */
	0x80, 0x80, 0x80, 0x00, 0x80, 0x00,	/* ! 0x21     */
	0xA0, 0xA0, 0x00, 0x00, 0x00, 0x00,	/* " 0x22     */
	0xA0, 0xE0, 0xA0, 0xE0, 0xA0, 0x00,	/* # 0x23     */
	0x40, 0xE0, 0xC0, 0x60, 0xE0, 0x40,	/* $ 0x24     */
	0xA0, 0x20, 0x40, 0x80, 0xA0, 0x00,	/* % 0x25     */
	0x40, 0xA0, 0x40, 0xA0, 0x60, 0x00,	/* & 0x26     */
	0x80, 0x80, 0x00, 0x00, 0x00, 0x00,	/* ' 0x27     */
	0x20, 0x40, 0x40, 0x40, 0x20, 0x00,	/* ( 0x28     */
	0x40, 0x20, 0x20, 0x20, 0x40, 0x00,	/* ) 0x29     */
	0xa0, 0x40, 0xe0, 0x40, 0xa0, 0x00,	/* * 0x2a     */
	0x00, 0x40, 0xe0, 0x40, 0x00, 0x00,	/* + 0x2b     */
	0x00, 0x00, 0x00, 0x40, 0x80, 0x00,	/* , 0x2c     */
	0x00, 0x00, 0xE0, 0x00, 0x00, 0x00,	/* - 0x2d     */
	0x00, 0x00, 0x00, 0x00, 0x80, 0x00,	/* . 0x2e     */
	0x00, 0x20, 0x60, 0xc0, 0x80, 0x00,	/* / 0x2f     */
	0x60, 0xA0, 0xA0, 0xA0, 0xC0, 0x00,	/* 0 0x30     */
	0x40, 0xC0, 0x40, 0x40, 0xE0, 0x00,	/* 1 0x31     */
	0xC0, 0x20, 0x40, 0x80, 0xE0, 0x00,	/* 2 0x32     */
	0xC0, 0x20, 0x40, 0x20, 0xC0, 0x00,	/* 3 0x33     */
	0x20, 0xA0, 0xE0, 0x20, 0x20, 0x00,	/* 4 0x34     */
	0xE0, 0x80, 0xC0, 0x20, 0xC0, 0x00,	/* 5 0x35     */
	0x40, 0x80, 0xC0, 0xA0, 0x40, 0x00,	/* 6 0x36     */
	0xE0, 0x20, 0x20, 0x40, 0x40, 0x00,	/* 7 0x37     */
	0x40, 0xA0, 0x40, 0xA0, 0x40, 0x00,	/* 8 0x38     */
	0x40, 0xA0, 0x60, 0x20, 0x40, 0x00,	/* 9 0x39     */
	0x80, 0x00, 0x00, 0x80, 0x00, 0x00,	/* : 0x3A     */
	0x40, 0x00, 0x00, 0x40, 0x80, 0x00,	/* ; 0x3B     */
	0x20, 0x40, 0x80, 0x40, 0x20, 0x00,	/* < 0x3C     */
	0x00, 0xE0, 0x00, 0xE0, 0x00, 0x00,	/* = 0x3D     */
	0x80, 0x40, 0x20, 0x40, 0x80, 0x00,	/* < 0x3E     */
	0xC0, 0x20, 0x40, 0x00, 0x40, 0x00,	/* ? 0x3F     */
	0x40, 0xA0, 0xA0, 0xA0, 0x80, 0x60,	/* @ 0x40     */
	0x40, 0xA0, 0xE0, 0xA0, 0xA0, 0x00,	/* A 0x41     */
	0xC0, 0xA0, 0xC0, 0xA0, 0xC0, 0x00,	/* B 0x42     */
	0x60, 0x80, 0x80, 0x80, 0x60, 0x00,	/* C 0x43     */
	0xC0, 0xA0, 0xA0, 0xA0, 0xC0, 0x00,	/* D 0x44     */
	0xE0, 0x80, 0xC0, 0x80, 0xE0, 0x00,	/* E 0x45     */
	0xE0, 0x80, 0xC0, 0x80, 0x80, 0x00,	/* F 0x46     */
	0x60, 0x80, 0xA0, 0xA0, 0x60, 0x00,	/* G 0x47     */
	0xA0, 0xA0, 0xE0, 0xA0, 0xA0, 0x00,	/* H 0x48     */
	0xE0, 0x40, 0x40, 0x40, 0xE0, 0x00,	/* I 0x49     */
	0x20, 0x20, 0x20, 0x20, 0xC0, 0x00,	/* J 0x4A     */
	0xA0, 0xA0, 0xC0, 0xA0, 0xA0, 0x00,	/* K 0x4B     */
	0x80, 0x80, 0x80, 0x80, 0xE0, 0x00,	/* L 0x4C     */
	0xA0, 0xE0, 0xE0, 0xA0, 0xA0, 0x00,	/* M 0x4D     */
	0xC0, 0xA0, 0xA0, 0xA0, 0xA0, 0x00,	/* N 0x4E     */
	0x40, 0xA0, 0XA0, 0xA0, 0x40, 0x00,	/* O 0x4F     */
	0xC0, 0xA0, 0xC0, 0x80, 0x80, 0x00,	/* P 0x50     */
	0x40, 0xA0, 0xA0, 0xA0, 0x40, 0x20,	/* Q 0x51     */
	0xC0, 0xA0, 0xC0, 0xA0, 0xA0, 0x00,	/* R 0x52     */
	0x60, 0x80, 0x40, 0x20, 0xC0, 0x00,	/* S 0x53     */
	0xE0, 0x40, 0x40, 0x40, 0x40, 0x00,	/* T 0x54     */
	0xA0, 0xA0, 0xA0, 0xA0, 0x40, 0x00,	/* U 0x55     */
	0xA0, 0xA0, 0xA0, 0x40, 0x40, 0x00,	/* V 0x56     */
	0xA0, 0xA0, 0xE0, 0xE0, 0xA0, 0x00,	/* W 0x57     */
	0xA0, 0xA0, 0x40, 0xA0, 0xA0, 0x00,	/* X 0x58     */
	0xA0, 0xA0, 0x40, 0x40, 0x40, 0x00,	/* Y 0x59     */
	0xE0, 0x20, 0x40, 0x80, 0xE0, 0x00,	/* Z 0x5A     */
	0xE0, 0x80, 0x80, 0x80, 0xE0, 0x00,	/* [ 0x5B     */
	0x80, 0xC0, 0x60, 0x20, 0x00, 0x00,	/* \ 0x5C     */
	0xE0, 0x20, 0x20, 0x20, 0xE0, 0x00,	/* ] 0x5D     */
	0x40, 0xA0, 0x00, 0x00, 0x00, 0x00,	/* ^ 0x5E     */
	0x00, 0x00, 0x00, 0x00, 0xE0, 0x00,	/* _ 0x5F     */
	0x80, 0x40, 0x00, 0x00, 0x00, 0x00,	/* ` 0x60     */
	0x00, 0x60, 0xA0, 0xA0, 0x60, 0x00,	/* a 0x61     */
	0x80, 0xC0, 0xA0, 0xA0, 0xC0, 0x00,	/* b 0x62     */
	0x00, 0x60, 0x80, 0x80, 0x60, 0x00,	/* c 0x63     */
	0x20, 0x60, 0xA0, 0xA0, 0x60, 0x00,	/* d 0x64     */
	0x00, 0x60, 0xA0, 0xC0, 0x60, 0x00,	/* e 0x65     */
	0x20, 0x40, 0xE0, 0x40, 0x40, 0x00,	/* f 0x66     */
	0x00, 0x60, 0xA0, 0xA0, 0x60, 0xC0,	/* g 0x67     */
	0x80, 0xC0, 0xA0, 0xA0, 0xA0, 0x00,	/* h 0x68     */
	0x40, 0x00, 0xC0, 0x40, 0xE0, 0x00,	/* i 0x69     */
	0x20, 0x00, 0x60, 0x20, 0x20, 0xC0,	/* j 0x6a     */
	0x80, 0xA0, 0xC0, 0xA0, 0xA0, 0x00,	/* k 0x6b     */
	0xC0, 0x40, 0x40, 0x40, 0xE0, 0x00,	/* l 0x6c     */
	0x00, 0xA0, 0xE0, 0xA0, 0xA0, 0x00,	/* m 0x6d     */
	0x00, 0xC0, 0xA0, 0xA0, 0xA0, 0x00,	/* n 0x6e     */
	0x00, 0x40, 0xA0, 0xA0, 0x40, 0x00,	/* o 0x6f     */
	0x00, 0x60, 0xA0, 0xA0, 0xC0, 0x80,	/* p 0x70     */
	0x00, 0x60, 0xA0, 0xA0, 0x60, 0x20,	/* q 0x71     */
	0x00, 0xC0, 0xA0, 0x80, 0x80, 0x00,	/* r 0x72     */
	0x00, 0x20, 0x40, 0x20, 0xC0, 0x00,	/* s 0x73     */
	0x40, 0xE0, 0x40, 0x40, 0x20, 0x00,	/* t 0x74     */
	0x00, 0xA0, 0xA0, 0xA0, 0x60, 0x00,	/* u 0x75     */
	0x00, 0xA0, 0xA0, 0x40, 0x40, 0x00,	/* v 0x76     */
	0x00, 0xA0, 0xA0, 0xE0, 0xA0, 0x00,	/* w 0x77     */
	0x00, 0xA0, 0x40, 0x40, 0xA0, 0x00,	/* x 0x78     */
	0x00, 0xA0, 0xA0, 0xA0, 0x60, 0xC0,	/* y 0x79     */
	0x00, 0xE0, 0x40, 0x80, 0xE0, 0x00,	/* z 0x7A     */
	0x60, 0x40, 0x80, 0x80, 0x40, 0x60,	/* { 0x7B     */
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80,	/* | 0x7C     */
	0xC0, 0x40, 0x20, 0x20, 0x40, 0xC0,	/* } 0x7D     */
	0x60, 0xC0, 0x00, 0x00, 0x00, 0x00,	/* ~ 0x7E     */
	0x00, 0xF0, 0x90, 0x90, 0xF0, 0x00,	/* BOX 0x7F   */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	/* SPACE 0xA0 */
	0x00, 0x10, 0x20, 0x40, 0x80, 0x00,	/* / 0xA1     */
	0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00,	/* EQUIV 0xA2 */
	0x00, 0x00, 0x00, 0x00, 0x60, 0xC0,	/* LOW TILDE 0xA3 */
	0x20, 0x70, 0x80, 0x70, 0x20, 0x00,	/* ASSIGN 0xA4 */
	0x20, 0xE0, 0x40, 0xE0, 0x80, 0x00,	/* nEqual 0xA5 */
	0x40, 0xE0, 0x40, 0x40, 0x00, 0x00,	/* up arrow 0xA6 */
	0x00, 0x20, 0xF0, 0x20, 0x00, 0x00,	/* rt arrow 0xA7 */
	0x40, 0x40, 0xE0, 0x40, 0x00, 0x00,	/* dn arrow 0xA8 */
	0x00, 0x40, 0xF0, 0x40, 0x00, 0x00,	/* lf arrow 0xA9 */
	0x00, 0xA0, 0x40, 0xA0, 0x00, 0x00,	/* multiply 0xAA */
	0xF0, 0x80, 0x60, 0x80, 0xF0, 0x00,	/* sigma    0xAB */
	0x00, 0x00, 0x40, 0xA0, 0xE0, 0x00,	/* delta    0xAC */
	0x00, 0x90, 0x90, 0x60, 0x00, 0x00,	/* union    0xAD */
	0x00, 0x60, 0x90, 0x90, 0x00, 0x00,	/* intrsect 0xAE */
	0x40, 0x00, 0xE0, 0x00, 0x40, 0x00,	/* divide   0xAF */
	0x00, 0x50, 0xA0, 0x70, 0x00, 0x00,	/* alpha    0xB0 */
	0x20, 0x50, 0xA0, 0x90, 0xE0, 0x80,	/* beta     0xB1 */
	0x40, 0x80, 0x40, 0xA0, 0xE0, 0x00,	/* delta    0xB2 */
	0x80, 0x40, 0x20, 0x50, 0x90, 0x00,	/* lambda   0xB3 */
	0x00, 0x00, 0x50, 0x50, 0x60, 0x80,	/* mu       0xB4 */
	0x00, 0x00, 0xF0, 0x60, 0x60, 0x00,	/* pi       0xB5 */
	0x00, 0x20, 0x50, 0x50, 0xA0, 0x80,	/* rho      0xB6 */
	0x00, 0x00, 0xE0, 0xA0, 0x40, 0x00,	/* sigma    0xB7 */
	0x00, 0x00, 0x90, 0xB0, 0x60, 0x00,	/* omega    0xB8 */
	0x20, 0x40, 0x80, 0x40, 0x20, 0x70,	/* lt ||=   0xB9 */
	0x80, 0x40, 0x20, 0x40, 0x80, 0xE0,	/* gt ||=   0xBA */
	0x40, 0xA0, 0xE0, 0xA0, 0x40, 0x00,	/* theta    0xBB */
	0x30, 0x60, 0xA0, 0x60, 0x30, 0x00,	/* l-embed  0xBC */
	0x00, 0x60, 0x90, 0x60, 0x00, 0x00,	/* degree   0xBD */
	0xC0, 0x60, 0x50, 0x60, 0xC0, 0x00,	/* r-embed  0xBE */
	0xC0, 0xA0, 0x50, 0x50, 0xA0, 0xC0,	/* arrow    0xBF */
	0xF0, 0x20, 0x40, 0x40, 0x20, 0xF0,	/* copyrig  0xC0 */
	0xA0, 0x00, 0x00, 0x00, 0x00, 0x00,	/* diaeresis 0xC1 */
	0x00, 0xE0, 0xA0, 0xE0, 0x00, 0x00,	/* box      0xC2 */
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00,	/* interpunct 0xC3 */
	0x00, 0x00, 0x60, 0xF0, 0x60, 0x00,	/* diamond  0xC4 */
	0x00, 0x90, 0x60, 0x60, 0x90, 0x00,	/* multiply 0xC5 */
	0x20, 0x40, 0x00, 0x00, 0x00, 0x00,	/* acute ac 0xC6 */
	0x00, 0x00, 0x00, 0x10, 0x20, 0x00,	/* cedilla  0xC7 */
	0xA0, 0x40, 0xA0, 0x00, 0x00, 0x00,	/* hacek    0xC8 */
	0x00, 0x00, 0x60, 0xF0, 0x60, 0x00,	/* diamond  0xC9 */
	0x40, 0x40, 0x40, 0x40, 0x40, 0x40,	/* | 0xca */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

uint8_t fontm23[768];

uint16_t fontptr[] =
    { 0, 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66, 72, 78, 84, 90, 96,
102, 108, 114, 120, 126, 132, 138, 144, 150, 156, 162, 168, 174, 180, 186, 192,
198, 204, 210, 216, 222, 228, 234, 240, 246, 252, 258, 264, 270, 276, 282, 288,
294, 300, 306, 312, 318, 324, 330, 336, 342, 348, 354, 360, 366, 372, 378, 384,
390, 396, 402, 408, 414, 420, 426, 432, 438, 444, 450, 456, 462, 468, 474, 480,
486, 492, 498, 504, 510, 516, 522, 528, 534, 540, 546, 552, 558, 564, 570, 576,
582, 588, 594, 600, 606, 612, 618, 624, 630, 636, 642, 648, 654, 660, 666, 672,
678, 684, 690, 696, 702, 708, 714, 720, 726, 732, 738, 744, 750, 756, 762, 768,
774, 780, 786, 792, 798, 804, 810, 816, 822, 828, 834, 840, 846, 852, 858, 864,
870, 876, 882, 888, 894, 900, 906, 912, 918, 924, 930, 936, 942, 948, 954 };