/*
 * Function to shift an unsigned int left if the count is positive, and right
 * if negative.
 */

#include "ch12.h"
#include <stdio.h>

int main(void) {
  unsigned int w1 = 0177777u, w2 = 0444u;
  unsigned int shift(unsigned int value, int n);

  SHIFT(w1, 5)
  printf("%o\t", w1);
  w1 = 0177777u;
  printf("%o\n", w1 << 5);
  SHIFT(w1, -6)
  printf("%o\t", w1);
  w1 = 0177777u;
  printf("%o\n", w1 >> 6);
  SHIFT(w2, 0)
  printf("%o\t", w2);
  w2 = 0444u;
  printf("%o\n", w2 >> 0);
  SHIFT(w1, -3)
  SHIFT(w1, 3)
  printf("%o\n", w1);

  return 0;
}
