#include <stdio.h>

int main(void) {
  int i;
  int Fibonacci[15];

  Fibonacci[0] = 0; /* by definition */
  Fibonacci[1] = 1; /* ditto */

  for (i = 2; i < 15; ++i) {
    Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];
  }
  for (i = 0; i < 15; ++i) {
    printf("%i\n", Fibonacci[i]);
  }

  return 0;
}
