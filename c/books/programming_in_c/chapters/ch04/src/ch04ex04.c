/*
 * Program to calculate a triangular number from integer input
 */

#include <stdio.h>

int main(void) {
  int n, number, tri_num;

  printf("What triangular number do you want?\n");
  scanf("%i", &number);

  tri_num = 0;
  for (n = 1; n <= number; ++n) {
    tri_num += n;
  }
  printf("Triangular number %i is %i\n", number, tri_num);

  return 0;
}
