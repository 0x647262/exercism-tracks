/*
 * Write a function that computes the of the following polynomial:
 *
 *      3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 *
 * Write a program that asks the user to enter a value for x, calls the
 * function to compute the value of the polynomial, and then displays the value
 * returned by the function.
 */

#include <stdio.h>

double calc_polynomial(double);

double calc_polynomial(double x) {
  double polynomial = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) -
                      5 * (x * x * x) - x * x + 7 * x - 6;

  return polynomial;
}

int main(void) {
  int x;

  printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
  printf("Enter a value for x: ");
  scanf("%d", &x);
  printf("Polynomial: %.2f\n", calc_polynomial(x));

  return 0;
}
