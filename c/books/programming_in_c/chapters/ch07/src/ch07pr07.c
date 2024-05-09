/*
 * Write a function that raises an integer to a positive integer power. Call
 * the function x_to_the_n() taking two integer arguments x and n. Have the
 * function return a long int, which represents the results of calculating x^n.
 */

#include <stdio.h>

long int x_to_the_n(int x, int n);

long int x_to_the_n(int x, int n) {
  long int result;

  for (result = 1; n > 0; --n) {
    result *= x;
  }

  return result;
}

int main(void) {
  int x, n;
  printf("Enter your numbers (x, n): ");
  scanf("%i, %i", &x, &n);
  printf("%i to the %i is: %li\n", x, n, x_to_the_n(x, n));

  return 0;
}
