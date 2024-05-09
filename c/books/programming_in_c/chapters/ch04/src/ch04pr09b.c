/*
 * Program to generate a table of triangular numbers
 */

#include <stdio.h>

int main(void) {
  int n, tri_num;

  printf("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf(" n     Sum from 1 to n\n");
  printf("---   -----------------\n");

  n = tri_num = 0;
  while (n <= 10) {
    tri_num += n;
    printf(" %i     %i\n", n, tri_num);
    ++n;
  }
  return 0;
}
