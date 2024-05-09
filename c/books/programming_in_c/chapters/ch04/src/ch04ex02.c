/*
 * Program to calculate the 200th triangular number.
 *
 * Introduction to the for statement
 */

#include <stdio.h>

int main(void) {
  int n, tri_num = 0;

  for (n = 1; n <= 200; n = n + 1) {
    tri_num = tri_num + n;
  }
  printf("The 200th triangular number is %i\n", tri_num);

  return 0;
}
