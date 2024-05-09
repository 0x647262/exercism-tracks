/*
 * Extend the program in Programming Project 1 to handle 3 digit numbers.
 */

#include <stdio.h>

int main(void) {
  int a, b, c, d;

  printf("Enter a three digit number: ");
  scanf("%d", &a);
  b = a / 100;
  c = (a - ((a / 100) * 100)) / 10;
  d = a % 10;
  printf("Reversed: %d%d%d\n", d, c, b);

  return 0;
}
