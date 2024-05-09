/*
 * Write a program that prints a one-month calendar. THe user specifies the
 * number of days in the month, and the day of the week on which the month
 * begins:
 *
 *      Enter the number of days in this month: 31
 *      Enter the starting day of the week (1 = sun, 7 = sat): 3
 *
 *               1  2  3  4  5
 *         6  7  8  9 10 11 12
 *        13 14 15 16 17 18 19
 *        20 21 22 23 24 25 26
 *        27 28 29 30 31
 *
 * Hint: This program isn't as hard as it looks. THe most important part is a
 * for statement that uses a variable i to count from 1 to n, there n is the
 * number of days in the month, printing each value of i. Inside the loop, an
 * if statement tests whether i is the last day in a week; if so, it prints a
 * new-line character.
 */

#include <stdio.h>

int main(void) {
  int i;
  int days;
  int start;

  printf("Enter the number of days this month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start);

  for (i = 1; i < start; i++) {
    printf("   ");
  }
  for (int j = 1; j <= days; i++, j++) {
    printf("%3d", j);
    if (i % 7 == 0) {
      printf("\n");
    }
  }
  printf("\n");

  return 0;
}
