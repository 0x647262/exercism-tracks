/*
 * Modify program 7.4 so the value of triangularNumber is returned by the
 * function. Then go back to Program 4.5 and change that program so that it
 * calls the new version of the triangularNumber() function.
 */

#include <stdio.h>

int calc_tri_num(int num);

int calc_tri_num(int num) {
  int i;
  int tri_num = 0;

  for (i = 1; i <= num; ++i) {
    tri_num += i;
  }

  return tri_num;
}

int main(void) {
  printf("Triangular number 10: %i\n", calc_tri_num(10));
  printf("Triangular number 20: %i\n", calc_tri_num(20));
  printf("Triangular number 50: %i\n", calc_tri_num(50));

  return 0;
}
