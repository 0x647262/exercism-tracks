/*
 * Write a program that reads a 5 x 5 array of integers, and then prints the
 * row sums and the column sums:
 *
 *      Enter row 1: 8 3 9 0 10
 *      Enter row 2: 3 5 17 1 1
 *      Enter row 3: 2 8 6 23 1
 *      Enter row 4: 15 7 3 2 9
 *      Enter row 5: 6 14 2 6 0
 *
 *      Row totals: 30 27 40 36 28
 *      Column totals: 34 37 37 32 21
 */

#include <stdio.h>

int main(void) {
  int a[5][5];
  int sum = 0;

  for (int i = 0; i < 5; i += 1) {
    printf("Enter row %d: ", i + 1);
    scanf("%d %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
  }

  printf("Row totals: ");
  for (int i = 0; i < 5; i += 1) {
    sum = 0;
    for (int j = 0; j < 5; j += 1) {
      sum += a[i][j];
    }
    printf("%d ", sum);
  }
  printf("\n");

  printf("Column totals: ");
  for (int j = 0; j < 5; j += 1) {
    sum = 0;
    for (int i = 0; i < 5; i += 1) {
      sum += a[i][j];
    }
    printf("%d ", sum);
  }
  printf("\n");

  return 0;
}
