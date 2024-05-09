/*
 * Rearrange the square3.c program so that the for loop intializes i, tests i,
 * and increments i. Don't rewrite the program; in particular, don't use any
 * multiplications.
 */

#include <stdio.h>

int main(void) {
  int n;
  int odd = 3;
  int square = 1;

  printf("This program prints a table of squares.\n");
  printf("Enter the number of entries you would like: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i += 1) {
    printf("%10d%10d\n", i, square);
    square += odd;
    odd += 2;
  }
  return 0;
}
