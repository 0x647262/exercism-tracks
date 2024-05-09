/*
 * Modify Programming Project 11 so that the program continues adding terms
 * until the current term becomes less than E, where E is a small
 * (floating-point) number entered by the user.
 */

#include <stdio.h>

int main(void) {
  int inner;
  int outer;
  int n;
  int factorial = 1;
  float E;
  float current = 1.0f;
  float e = 1.0f;

  printf("Enter your disired n for (e = 1 + 1/n!): ");
  scanf("%d", &n);
  printf("Enter a small floating point number for E: ");
  scanf("%f", &E);

  for (outer = 1; outer <= n; outer++) {
    for (inner = 1; inner <= outer; inner++) {
      factorial *= inner;
    }
    current = 1.0f / factorial;
    if (current < E) {
      break;
    } else {
      e += current;
      printf("e + %.5f (1/%d)\n", current, factorial);
      factorial = 1;
    }
  }
  printf("e = %.5f\n", e);

  return 0;
}
