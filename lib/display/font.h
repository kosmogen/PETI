/*
 * font.h
 *
 *  Created on: 2020-11-26
 *      Author: github.com/zadammac
 */

#ifndef FONT_H_
#define FONT_H_

// ASCII offset 32, i.e. starts with SPACE. Ends with upper case Z.

const char *font8x8[] = {
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",  /*   */
  "\xFF\xE7\xE7\xE7\xE7\xFF\xE7\xFF",  /* ! */
  "\xBB\xBB\xBB\xDD\xFF\xFF\xFF\xFF",  /* " */
  "\xFF\xDB\x81\xDB\xDB\x81\xDB\xFF",  /* # */
  "\xEF\x83\xAF\x83\xEB\x83\xEF\xFF",  /* $ */
  "\xFF\xFF\x9B\x97\xEF\xD3\xB3\xFF",  /* % */
  "\x00\xEF\xD7\xEF\xD5\xBB\x85\xFF",  /* & */
  "\xEF\xEF\xEF\xFF\xFF\xFF\xFF\xFF",  /* ' */
  "\xFB\xF7\xEF\xEF\xEF\xEF\xF7\xFB",  /* ( */
  "\xDF\xEF\xF7\xF7\xF7\xF7\xEF\xDF",  /* ) */
  "\xFF\xE7\xE7\x81\xE7\xDB\x99\xFF",  /* * */
  "\xFF\xE7\xE7\x81\x81\xE7\xE7\xFF",  /* + */
  "\xFF\xFF\xFF\xFF\xFF\xE7\xE7\xCF",  /* , */
  "\xFF\xFF\xFF\xFF\xC3\xFF\xFF\xFF",  /* - */
  "\xFF\xFF\xFF\xFF\xFF\xE7\xE7\xFF",  /* . */
  "\xFE\xFD\xFB\xF7\xEF\xDF\xBF\x7F",  /* / */
  "\xFF\x81\xB9\xB5\xAD\x9D\x81\xFF",  /* 0 */
  "\xFF\xF7\xE7\xD7\xF7\xF7\xC3\xFF",  /* 1 */
  "\xFF\xC3\xBD\xFB\xE7\xDF\x81\xFF",  /* 2 */
  "\xFF\x83\xFD\xC3\xFD\xFD\x83\xFF",  /* 3 */
  "\xFF\xF3\xEB\xDB\x81\xFB\xFB\xFF",  /* 4 */
  "\xFF\x81\xBF\x83\xFD\xBD\xC3\xFF",  /* 5 */
  "\xFF\xC3\xBF\x83\xBD\xBD\xC3\xFF",  /* 6 */
  "\xFF\x81\xBD\xFB\xF7\xEF\xDF\xFF",  /* 7 */
  "\xFF\xC3\xBD\xC3\xBD\xBD\xC3\xFF",  /* 8 */
  "\xFF\xC3\xBD\xBD\xC1\xFD\xC3\xFF",  /* 9 */
  "\xFF\xE7\xE7\xFF\xFF\xE7\xE7\xFF",  /* : */
  "\xFF\xE7\xE7\xFF\xFF\xE7\xEF\xFF",  /* ; */
  "\xF9\xF7\xCF\xBF\xBF\xCF\xF7\xF9",  /* < */
  "\xFF\xFF\x81\xFF\xFF\x81\xFF\xFF",  /* = */
  "\x9F\xEF\xF3\xFD\xFD\xF3\xEF\x9F",  /* > */
  "\xFF\xC3\xBD\xFB\xE7\xFF\xE7\xFF",  /* ? */
  "\xFF\xC3\xBD\xA5\xAD\xBB\xCF\xFF",  /* @ */
  "\xFF\xC3\xBD\xBD\x81\xBD\xBD\xFF",  /* A */
  "\xFF\x83\xBD\x83\xBD\xBD\x83\xFF",  /* B */
  "\xFF\xC1\xBF\xBF\xBF\xBF\xC1\xFF",  /* C */
  "\xFF\x87\xBB\xBD\xBD\xBB\x87\xFF",  /* D */
  "\xFF\x81\xBF\x87\xBF\xBF\x81\xFF",  /* E */
  "\xFF\x81\xBF\x83\xBF\xBF\xBF\xFF",  /* F */
  "\xFF\xC3\xBD\xBF\xB1\xBD\xC3\xFF",  /* G */
  "\xFF\xBD\xBD\x81\xBD\xBD\xBD\xFF",  /* H */
  "\xFF\xC1\xF7\xF7\xF7\xF7\xC1\xFF",  /* I */
  "\xFF\x81\xFB\xFB\xFB\xBB\xC7\xFF",  /* J */
  "\xFF\xBB\xB7\x8F\xB7\xBB\xBD\xFF",  /* K */
  "\xFF\xBF\xBF\xBF\xBF\xBF\x81\xFF",  /* L */
  "\xFF\xBD\x99\xA5\xBD\xBD\xBD\xFF",  /* M */
  "\xFF\xBD\x9D\xAD\xB5\xB9\xBD\xFF",  /* N */
  "\xFF\xC3\xBD\xBD\xBD\xBD\xC3\xFF",  /* O */
  "\xFF\x83\xBD\xBD\x83\xBF\xBF\xFF",  /* P */
  "\xFF\xC3\xBD\xBD\xBD\xBB\xC5\xFF",  /* Q */
  "\xFF\x83\xBD\xBD\x83\xBB\xBD\xFF",  /* R */
  "\xFF\x81\xBF\x81\xFD\xFD\x81\xFF",  /* S */
  "\xFF\xC1\xF7\xF7\xF7\xF7\xF7\xFF",  /* T */
  "\xFF\xBD\xBD\xBD\xBD\xBD\xC3\xFF",  /* U */
  "\xFF\xBD\xBD\xDB\xDB\xD7\xEF\xFF",  /* V */
  "\xFF\xBD\xBD\xB5\xB5\xB5\xCB\xFF",  /* W */
  "\xFF\xBD\xDB\xE7\xE7\xDB\xBD\xFF",  /* X */
  "\xFF\xDD\xDD\xEB\xF7\xEF\xDF\xFF",  /* Y */
  "\xFF\x81\xFB\xF7\xEF\xDF\x81\xFF",  /* Z */
  "\xC3\xDF\xDF\xDF\xDF\xDF\xC3\xFF",  /* [ */
  "\x7F\xBF\xDF\xEF\xF7\xFB\xFD\xFE",  /* \ */
  "\xE3\xFB\xFB\xFB\xFB\xFB\xFB\xE3",  /* ] */
  "\xFF\xFF\xE7\xDB\xBD\xFF\xFF\xFF",  /* ^ */
  "\xFF\xFF\xFF\xFF\xFF\xFF\xFF\x81",  /* _ */
  "\xCF\xF7\xFF\xFF\xFF\xFF\xFF\xFF",  /* ` */
  "\xFF\xC3\xFD\xC1\xBD\xBD\xC3\xFF",  /* a */
  "\xFF\xBF\xBF\x83\xBD\xBD\x83\xFF",  /* b */
  "\xFF\xFF\xC1\xBF\xBF\xBF\xC1\xFF",  /* c */
  "\xFF\xFD\xFD\xC1\xBD\xBD\xC1\xFF",  /* d */
  "\xFF\xFF\xC3\xBD\x83\xBF\xC3\xFF",  /* e */
  "\xFF\xC3\xBD\xBF\x8F\xBF\xBF\xFF",  /* f */
  "\xFF\xC3\xBD\xB9\xC5\xFD\xFD\xC3",  /* g */
  "\xFF\xFF\xBF\xBF\x83\xBD\xBD\xFF",  /* h */
  "\xFF\xFF\xF7\xFF\xF7\xF7\xF7\xFF",  /* i */
  "\xFF\xFF\xF7\xFF\xF7\xF7\xB7\xCF",  /* j */
  "\xFF\xBF\xB7\xAF\x9F\xA7\xBB\xFF",  /* k */
  "\xFF\xEF\xEF\xEF\xEF\xEF\xF7\xFF",  /* l */
  "\xFF\xFF\xFF\xC9\xB5\xB5\xB5\xFF",  /* m */
  "\xFF\xFF\xFF\x83\xBD\xBD\xBD\xFF",  /* n */
  "\xFF\xFF\xFF\xE7\xDB\xDB\xE7\xFF",  /* o */
  "\xFF\xFF\xFF\x87\xBB\x83\xBF\xBF",  /* p */
  "\xFF\xFF\xFF\xC1\xBD\x81\xFC\xFD",  /* q */
  "\xFF\xFF\xFF\xC7\xBB\xBF\xBF\xFF",  /* r */
  "\xFF\xFF\xC7\xBF\xC7\xFB\xC7\xFF",  /* s */
  "\xFF\xFF\xDF\x81\xDF\xDD\xE3\xFF",  /* t */
  "\xFF\xFF\xFF\xBD\xBD\xBD\xC3\xFF",  /* u */
  "\xFF\xFF\xFF\xBD\xBD\xDB\xE7\xFF",  /* v */
  "\xFF\xFF\xFF\xBB\xAB\xAB\xD7\xFF",  /* w */
  "\xFF\xFF\xFF\xDB\xE7\xE7\xDB\xFF",  /* x */
  "\xFF\xFF\xFF\xDB\xDB\xE7\xFB\xE7",  /* y */
  "\xFF\xFF\xFF\xC3\xF7\xEF\xC3\xFF",  /* z */
  "\xE3\xEF\xEF\xDF\xDF\xEF\xEF\xE3",  /* { */
  "\xF7\xF7\xF7\xF7\xF7\xF7\xF7\xF7",  /* | */
  "\xC7\xF7\xF7\xFB\xFB\xF7\xF7\xC7",  /* } */
  "\xFF\xFF\xCE\xB6\x79\xFF\xFF\xFF",  /* ~ */
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
  "\x00\x00\x00\x00\x00\x00\x00\x00",
};

#endif /* FONT_H_ */
