/*
 * Modify Programming Project 3 from Chapter 6 so that it includes the
 * following function:
 *
 *      void reduce(int numerator, int denominator,
 *                  int *reduced_numerator,
 *                  int *reduced_denominator);
 *
 * Numerator and denominator are the the numerator and denominator of a
 * fraction. reduced_numerator and reduced_denominator  are pointers to
 * variables in which the function will store the numerator and denominator of
 * the fraction once it has been reduced to lowest terms.
 *
 * ##### Spec:
 *
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

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator);

void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator) {
  int r;
  int n = denominator;
  int m = numerator;

  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }

  numerator /= m;
  *reduced_numerator = numerator;
  denominator /= m;
  *reduced_denominator = denominator;
}

int main(void) {
  int numerator, denominator;
  int reduced_numerator, reduced_denominator;

  printf("Enter a fraction (x/y): ");
  scanf("%d/%d", &numerator, &denominator);

  reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
  printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

  return 0;
}
