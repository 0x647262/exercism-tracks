/*
 * Write a program to evaluate the expression shown here:
 *
 * 3(x^3) - 5(x^2) + 6
 */

#include <stdio.h>

int main(void) {
  float x = 2.55f;
  float result;

  result = 3 * (x * x * x) - 5 * (x * x) + 6;
  printf("The result of 3(x^3) - 5(x^2) + 6 where x = %f is: %f\n", x, result);

  return 0;
}
