/*
 * A minus sign placed in front of a field width specification causes the field
 * to be displayed left-justified. Substitute the following printf() statement
 * for the corresponding statement in Progam 4.2, run the program, and compare
 * the outputs produced by both programs.
 */

#include <stdio.h>

int main(void) {
  printf("Example 6 version\n");

  int n, tri_num;

  printf("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf(" n     Sum from 1 to n\n");
  printf("---   -----------------\n");

  tri_num = 0;

  for (n = 1; n <= 10; ++n) {
    tri_num += n;
    printf(" %-2i     %i\n", n, tri_num);
  }
  return 0;
}
