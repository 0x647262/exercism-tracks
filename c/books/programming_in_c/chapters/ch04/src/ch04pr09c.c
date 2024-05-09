/*
 * Generate the triangular number of the user's choosing.
 */

#include <stdio.h>

int main(void) {
  int n, number, tri_num;

  printf("What triangular number do you want?\n");
  scanf("%i", &number);

  n = tri_num = 0;
  while (n <= number) {
    tri_num += n;
    ++n;
  }
  printf("Triangular number %i is %i\n", number, tri_num);

  return 0;
}
