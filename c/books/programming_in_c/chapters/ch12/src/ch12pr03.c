/*
 * Define a macro MIN that gives the minimum of two values. Then write a
 * program to test the macro definition
 *
 * ########## Notes:
 *
 * All preprocessor directives will live in a ch12.h file.
 */

#include "ch12.h"
#include <stdio.h>

int main(void) {
  printf("Minimum of 1 & 2: %i\n", (MIN(1, 2)));

  return 0;
}
