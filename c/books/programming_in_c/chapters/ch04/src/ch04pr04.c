/*
 * The factorial of an intrger n, written n!, is the product of the consecutive
 * integers 1 through n. For example, 5 factorial is calculated as
 *
 *      5! = 5 x 4 x 3 x 2 x 1 = 120
 *
 * write a program to generate and print the first 10 factorials.
 */

#include <stdio.h>

int main(void) {
  int n, f, factorial;

  printf("Table\n");
  printf(" n         n!\n");
  printf("---     -------\n");

  for (n = 1; n <= 10; ++n) {
    factorial = 1;
    for (f = 2; f <= n; ++f) {
      factorial *= f;
    }
    printf("%2i       %5i\n", n, factorial);
  }
  return 0;
}
