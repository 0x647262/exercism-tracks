/*
 * Write a program that asks the user to enter the numbers from 1 to 16 (in any
 * order) and then displays the numbers in a 4 by 4 arrangement, followed bt
 * the sums of the rows, columns, and diagonals:
 *
 *      Enter the numbers from 1 to 16 in any order:
 *      16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
 *
 *      16   3   2   13
 *       5  10  11    8
 *       9   6   7   12
 *       4  15  14    1
 *
 *       Row sums: 34 34 34 34
 *       Column sums: 34 34 34 34
 *       Diagonal sums: 34 34
 *
 * If the row, column, and diagonal sums are all the same (as they are in this
 * example), the numbers are said to form a magic square. The magic square
 * shown here appears in a 1514 engraving by artist and mathematician Albrecht
 * Durer. (Note that that middle numbers in the last row give the date of the
 * engraving.)
 */

#include <stdio.h>

int main(void) {
  int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;

  printf("Enter numbers 1-16 in any order (x, x, x...): ");
  scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &a,
        &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
  printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f,
         g, h, i, j, k, l, m, n, o, p);
  printf("[%-2d][%-2d][%-2d][%-2d]\n\
                [%-2d][%-2d][%-2d][%-2d]\n\
                [%-2d][%-2d][%-2d][%-2d]\n\
                [%-2d][%-2d][%-2d][%-2d]\n",
         a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);

  printf("First row sum: %d\n", (a + b + c + d));
  printf("Second row sum: %d\n", (e + f + g + h));
  printf("Third row sum: %d\n", (i + j + k + l));
  printf("Fourth row sum %d\n", (m + n + o + p));

  printf("First column sum: %d\n", (a + e + i + m));
  printf("Second column sum: %d\n", (b + f + j + n));
  printf("Third column sum: %d\n", (c + g + k + o));
  printf("Forth column sum: %d\n", (d + h + l + p));

  printf("Top left to bottom right sum: %d\n", (a + f + k + p));
  printf("Top right to bottom left sum: %d\n", (d + g + j + m));

  return 0;
}
