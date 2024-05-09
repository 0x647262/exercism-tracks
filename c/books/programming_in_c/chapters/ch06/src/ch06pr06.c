/*
 * You dont't need to use an array to generate Fibonacci numbers. You can
 * simply use 3 variables: two to store the previous two Fibonacci numbers and
 * one to store the current one. Rewrite program 6.3 so that arrays are not
 * used. Because you're no longer using an array, you need to display each
 * Fibonacci number as you generate it.
 */

#include <stdio.h>

int main(void) {
  int i, a, b, fib;
  a = 0; /* By definition */
  b = 1; /* Ditto */

  for (i = 0; i < 15; ++i) {
    if (i <= 1) {
      fib = i;
    } else {
      fib = a + b;
      a = b;
      b = fib;
    }
    printf("%i ", fib);
  }
  printf("\n");

  return 0;
}
