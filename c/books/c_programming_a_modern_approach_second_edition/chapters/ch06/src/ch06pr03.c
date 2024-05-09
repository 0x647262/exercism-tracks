/*
 * Write a program that asks the user to enter a fraction, then reduces the
 * fraction to lowest terms:
 *
 *      Enter a fraction: 6/12
 *      In lowest terms: 1/2
 *
 * Hint: to reduce a fraction to lowest terms, first compute the GCD of the
 * numerator and denominator. Then divide both the numerator and denominator by
 * the GCD.
 */

#include <stdio.h>

int main(void) {
  int num, den, r;
  int m = 0;
  int n = 0;

  printf("Enter a fraction (x/y): ");
  scanf("%d/%d", &num, &den);

  m = den;
  n = num;
  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }
  num /= m;
  den /= m;
  printf("In lowest terms: %d/%d\n", num, den);

  return 0;
}
