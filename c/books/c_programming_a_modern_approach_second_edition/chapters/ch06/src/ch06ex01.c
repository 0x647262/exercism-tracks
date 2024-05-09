/*
 * ##### square.c
 * Prints a table of squares using a while statement
 */

#include <stdio.h>

int main(void) {
  int i = 1;
  int n;

  printf("This program prints a table of squares.\n");
  printf("Enter the number of entries for the table: ");
  scanf("%d", &n);

  while (i <= n) {
    printf("%10d%10d\n", i, i * i);
    i = i + 1;
  }

  return 0;
}
