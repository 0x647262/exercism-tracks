/*
 * ##### squares2.c
 * Prints a table of squares using an odd method.
 */

#include <stdio.h>

int main(void) {
  int n;
  int i = 1;
  int odd = 3;

  printf("This program prints a table of squares.\n");
  printf("Enter the number of entries for the table: ");
  scanf("%d", &n);

  for (int square = 1; i <= n; odd += 2) {
    printf("%10d%10d\n", i, square);
    i += 1;
    square += odd;
  }
  return 0;
}
