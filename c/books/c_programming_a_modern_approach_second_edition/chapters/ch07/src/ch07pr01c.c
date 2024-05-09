/*
 * See ch07pr01a.c
 */

#include <stdio.h>

int main(void) {
  /* Using long */
  long int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter the number of entries in table: ");
  scanf("%ld", &n);

  for (i = 1; i <= n; i++) {
    printf("%10ld\t%10ld\n", i, i * i);
  }

  return 0;
}
