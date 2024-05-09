/*
 * Write a program that prints an n x n magic square (a square arrangement of
 * the numbers 1, 2, ..., n^2 in which the sums of the rows, columns, and
 * diagonals are all the same). The user will specify the value of n:
 *
 *      This program creates a magic square of a specified size.
 *      The size must be an odd number between 1 and 99.
 *      Enter size of magic square: 5
 *
 *      17  24   1   8  15
 *      23   5   7  14  16
 *       4   6  13  20  22
 *      10  12  19  21   3
 *      11  18  25   2   9
 *
 * Store the magic square in a 2d array. Start by placing the number 1 in the
 * middle of row 0. Place each of the remaining numbers: 2, 3, ..., n^2 bt
 * moving up one rowm and over one column. Any attempt to go outside the bounds
 * of the array should "wrap around" to the opposite side of the array. For
 * example, instead of storing the next number in row - 1, we would store it in
 * row n - 1 (the last row). Instead of storing the next number in column n, we
 * would store it in column 0. If a particular  array element is already
 * occupied, put the number directly below the previously stored number. If you
 * compiler supports variable length arrays, declare the array to have n rows
 * and n columns. If not, declare the array to have 99 rows, and 99 columns.
 */

#include <stdio.h>

int main(void) {
  int magic_number = 1;
  int n;
  int r, c;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter the size of the magic square: ");
  scanf("%d", &n);

  int square[n][n];
  for (r = 0; r < n; r += 1) {
    for (c = 0; c < n; c += 1) {
      square[r][c] = 0;
    }
  }

  r = 0;
  c = n / 2;
  while (magic_number <= n * n) {
    square[r][c] = magic_number;
    magic_number += 1;
    r -= 1;
    if (r < 0) {
      r = n - 1;
    }
    c += 1;
    if (c == n) {
      c = 0;
    }
    if (square[r][c] != 0) {
      r += 2;
      if (r > n) {
        r = 1;
      }
      c -= 1;
      if (c < 0) {
        c = n - 1;
      }
    }
  }

  for (r = 0; r < n; r += 1) {
    printf("\t");
    for (c = 0; c < n; c += 1) {
      printf("%3d", square[r][c]);
    }
    printf("\n");
  }
  return 0;
}
