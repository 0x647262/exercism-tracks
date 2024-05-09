/*
 * The value of the mathematical constant e can be expressed as an infinite
 * series:
 *
 *      e = 1 + 1/1! + 1/2! + 1/3! + ...
 *
 * Write a program that approximates e by computing the value of:
 *
 *      1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
 *
 * Where n is an integer entered by the user.
 */

#include <stdio.h>

int main(void) {
  int inner;
  int outer;
  int n;
  int factorial = 1;
  float series;
  float e = 1.0f;

  printf("Enter your disired n for (e = 1 + 1/n!): ");
  scanf("%d", &n);

  for (outer = 1; outer <= n; outer++) {
    for (inner = 1; inner <= outer; inner++) {
      factorial *= inner;
    }
    series = 1.0f / factorial;
    e += series;
    printf("e + %.5f (1/%d)\n", series, factorial);
    factorial = 1;
  }
  printf("e = %.5f\n", e);

  return 0;
}
