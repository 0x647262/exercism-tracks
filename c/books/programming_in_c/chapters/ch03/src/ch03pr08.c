/*
 * Write a program to find the largest even multiple for the following vlaues
 * of i and j:
 *      i       j
 *      365     7
 *      12,258  23
 *      996     4
 *
 * Formula:
 *
 *      i + j - i % j
 */

#include <stdio.h>

int main(void) {
  int i;
  int j;
  int even_multiple;

  i = 365;
  j = 7;
  even_multiple = i + j - i % j;
  printf("The largest even multiple of %i and %i is: %i\n", i, j,
         even_multiple);

  i = 12258;
  j = 23;
  even_multiple = i + j - i % j;
  printf("The largest even multiple of %i and %i is: %i\n", i, j,
         even_multiple);

  i = 996;
  j = 4;
  even_multiple = i + j - i % j;
  printf("The largest even multiple of %i and %i is: %i\n", i, j,
         even_multiple);

  return 0;
}
