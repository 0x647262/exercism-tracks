/*
 * Write a macro IS_DIGIT that gives a nonzero value if a character is a digit
 * '0' through '9'. Use this macro in the definition of another macro
 * IS_SPECIAL, which gives a non-zero result if a character is a special
 * character; that is, non-alphabetic and not a digit. Be certain to use the
 * IS_ALPHABETIC macro developed in exercise 7.
 */

#include "ch12.h"
#include <stdio.h>

int main(void) {
  char c = '1';
  int flag;

  printf("1 = Uppercase ASCII\n");
  printf("2 = Lowercase ASCII\n");
  printf("3 = Digit     ASCII\n");
  printf("4 = Special   ASCII\n");
  IS_DIGIT(c, flag)
  printf("%c is %i\n", c, flag);

  c = '|';
  IS_SPECIAL(c, flag)
  printf("%c is %i\n", c, flag);

  return 0;
}
