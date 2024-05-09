/*
 * Rewrite the upc.c program of Section 4.1 so that tha tuser enters 11 digits
 * at one time, instead of entering one digit, then five digits, and then
 * another five digits.
 *
 *      Enter the first 11 digits of a UPC: 01380015173
 *      Check digit: 5
 */

#include <stdio.h>

int main(void) {
  int type;
  int m1, m2, m3, m4, m5;
  int i1, i2, i3, i4, i5;
  int check;

  printf("Enter your UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &type, &m1, &m2, &m3, &m4, &m5,
        &i1, &i2, &i3, &i4, &i5, &check);

  printf("%d%d%d%d%d%d%d%d%d%d%d%d\n", type, m1, m2, m3, m4, m5, i1, i2, i3, i4,
         i5, check);

  return 0;
}
