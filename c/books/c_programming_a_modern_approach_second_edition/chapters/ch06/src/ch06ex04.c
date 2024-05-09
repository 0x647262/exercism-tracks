/*
 * ##### squares2.c
 * Prints a table of squares using a for statement.
 */

#include <stdio.h>

int main(void) {
  int n;

  printf("This program prints a table of squares.\n");
  printf("Enter the number of entries for the table: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i += 1) {
    printf("%10d%10d\n", i, i * i);
  }

  return 0;
}
