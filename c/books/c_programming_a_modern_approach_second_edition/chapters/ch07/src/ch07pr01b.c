/*
 * See ch07pr01a.c
 */

#include <stdio.h>

int main(void) {
  /* Using short */
  short i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter the number of entries in table: ");
  scanf("%hd", &n);

  for (i = 1; i <= n; i++) {
    printf("%10hd\t%10d\n", i, i * i);
  }

  return 0;
}
