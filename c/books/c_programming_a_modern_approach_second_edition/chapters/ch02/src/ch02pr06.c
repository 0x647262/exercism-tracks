/*
 * Modify the program of Programming Project 5 so that the polynomial is
 * evaluated using the following formula:
 *
 *      ((((3x + 2)x + 5) x - 1)x + 7)x - 6
 *
 * Note that the modified program performs fewer multiplications. This
 * technique for evaluating polynomials is known as Horner's Rule.
 */

#include <stdio.h>

int main(void) {
  int x;
  int poly;

  printf("Enter a number: ");
  scanf("%d", &x);
  poly = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("%d\n", poly);

  return 0;
}
