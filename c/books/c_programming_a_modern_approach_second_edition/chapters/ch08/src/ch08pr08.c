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
  int low;
  int high;

  for (int i = 0; i < 5; i += 1) {
    printf("Enter student %d's 5 quiz scores: ", i + 1);
    scanf("%d %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
  }

  printf("Student quiz averages:\n");
  for (int i = 0; i < 5; i += 1) {
    sum = 0;
    for (int j = 0; j < 5; j += 1) {
      sum += a[i][j];
    }
    printf("Student %d's Total: %d Average: %d \n", i, sum, sum / 5);
  }

  printf("Quiz stats:\n");
  for (int j = 0; j < 5; j += 1) {
    sum = 0;
    high = 0;
    low = 101;
    for (int i = 0; i < 5; i += 1) {
      sum += a[i][j];
      if (a[i][j] > high) {
        high = a[i][j];
      }
      if (a[i][j] < low) {
        low = a[i][j];
      }
    }
    printf("Quiz %d: High: %d Low: %d Avg: %d\n", j, high, low, sum / 5);
  }

  return 0;
}
