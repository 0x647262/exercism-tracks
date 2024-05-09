/*
 * Program to generate a table of triangular numbers
 */

#include <stdio.h>

int main(void) {
  int n, tri_num;

  printf("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf("  n     Sum from 1 to n\n");
  printf(" ---   -----------------\n");

  tri_num = 0;
  for (n = 1; n <= 10; ++n) {
    tri_num += n;
    printf(" %2i     %i\n", n, tri_num);
  }
  return 0;
}
