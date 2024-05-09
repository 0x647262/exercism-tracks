/*
 * Write a macro ABSOLUTE_VALUE that computes the absolute value of its
 * argument. Make certain that an expression such as:
 *
 *      ABSOLUTE_VALUE(x + delta)
 *
 * Is properly evaluated by the macro.
 */

#include "ch12.h"
#include <stdio.h>

int main(void) {
  int x = -25;
  int delta = 5;
  int result = 0;

  result = ABSOLUTE_VALUE(x + delta);
  printf("ABSOLUTE_VALUE(x(-25) + delta(5)) = %i\n", result);

  return 0;
}
