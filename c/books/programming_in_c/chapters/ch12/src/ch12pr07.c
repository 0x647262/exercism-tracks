/*
 * Write a macro IS_ALPHABETIC that gives a non-zero value if the character is
 * an alphabetic character. Have the macro use the IS_LOWER_CASE macro defined
 * in the chapter text and the IS_UPPER_CASE macro defined in program 6.
 */

#include "ch12.h"
#include <stdio.h>

int main(void) {
  char c = 'c';
  int flag;

  IS_ALPHABETIC(c, flag)
  printf("\'%c\' = %i | 1 = alphabetic, 0 = non-alphabetic\n", c, flag);

  return 0;
}
