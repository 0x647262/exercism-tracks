/*
 * Define a macro MAX3 that gives the maximum of 3 values. Write a program to
 * test the macro definition.
 *
 * ########## Notes: ##########
 *
 * SO + #programming say this is not the best use of a macro, as returning a
 * value from a macro cannot be done. It would be better to write an inline
 * function (C99+) to handle this particular problem.
 */

#include "ch12.h"
#include <stdio.h>

int main(void) {
  printf("Max of 1, 2, 3: %i\n", MAX3(1, 2, 3));
  printf("Max of 1, 3, 2: %i\n", MAX3(1, 3, 2));
  printf("Max of 2, 1, 3: %i\n", MAX3(2, 1, 3));
  printf("Max of 2, 3, 1: %i\n", MAX3(2, 3, 1));
  printf("Max of 3, 1, 2: %i\n", MAX3(3, 1, 2));
  printf("Max of 3, 2, 1: %i\n", MAX3(3, 2, 1));

  return 0;
}
