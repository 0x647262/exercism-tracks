/*
 * Write a macro IS_UPPER_CASE that gives a non-zero value if a character is an
 * uppercase letter.
 */

#include "ch12.h"
#include <stdio.h>

int main(void) {
  char c;
  int flag;

  printf("1 is uppercase, 0 is lower\n");
  c = 'a';
  IS_UPPER_CASE(c, flag)
  printf("\'%c\' = %i\n", c, flag);

  c = 'A';
  IS_UPPER_CASE(c, flag)
  printf("\'%c\' = %i\n", c, flag);

  return 0;
}
