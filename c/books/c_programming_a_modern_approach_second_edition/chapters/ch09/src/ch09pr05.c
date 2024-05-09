/*
 * Modify Programming Project 17 from Chapter 8 so that it includes the
 * following functions:
 *
 *      void create_magic_square(int n, int magic_square[n][n]);
 *      void print_magic_square(int n, int magic_square[n][n]);
 *
 * After obtaining the number n from a user, main() will call
 * create_magic_square(), passing it an n x n array the is declared inside
 * main. create_magic_square() will fill the array with the numbers:
 * 1, 2, ..., n ^ 2 as described in the original project. main() will then call
 * print_magic_square(), which will display the array in the format described
 * in the original project.
 *
 * Note: If your compiler doesn't support variable-length arrays, declare the
 * array in main() to be 99 x 99 instead of n x n, and use the following
 * prototypes instead:
 *
 *      void create_magic_square(int n, int magic_square[99][99]);
 *      void print_magic_square(int n, int magic_square[99][99]);
 *
 *
 * ##### Spec:
 *
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

void create_magic_square(int n, int[n][n]);
void print_magic_square(int n, int[n][n]);

void create_magic_square(int n, int square[n][n]) {
  int r;
  int c;

  for (r = 0; r < n; r += 1) {
    for (c = 0; c < n; c += 1) {
      square[r][c] = 0;
    }
  }

  r = 0;
  c = n / 2;
  int magic_number = 1;
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
}

void print_magic_square(int n, int square[n][n]) {
  for (int r = 0; r < n; r += 1) {
    printf("\t");
    for (int c = 0; c < n; c += 1) {
      printf("%5d", square[r][c]);
    }
    printf("\n\n");
  }
}

int main(void) {
  int n;

  printf("This program creates a magic square of a specified size.\n");
  printf("The size must be an odd number between 1 and 99.\n");
  printf("Enter the size of the magic square: ");
  scanf("%d", &n);
  int square[n][n];

  create_magic_square(n, square);
  print_magic_square(n, square);

  return 0;
}
