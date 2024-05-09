/*
 * ##### numdigits.c
 * Calculates the number of digits in an integer
 */

#include <stdio.h>

int main(void) {
  int digits = 0;
  int n;

  printf("Enter a nonnegative integer: ");
  scanf("%d", &n);

  do {
    n /= 10;
    digits += 1;
  } while (n > 0);

  printf("The number has %d digit(s).\n", digits);

  return 0;
}
