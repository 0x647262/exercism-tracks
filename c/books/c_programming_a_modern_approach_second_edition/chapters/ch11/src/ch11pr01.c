/*
 * Modify Programming Project 7 form Chapter 2 so that it includes the
 * following function:
 *
 *      void pay_amount(int dollars, int *twenties, int *tens,
 *                      int *fives int *ones);
 *
 * The function determines the smallest number of $20, $10, $5, and $1 dollar
 * bills necessary to pay the amount represented by the dollars parameter. The
 * twenties parameter points to a variable in which the function will store the
 * number of $20 bills required. The tens, fives, and singles parameters are
 * similar.
 *
 * ##### Spec:
 *
 * Write a program that asks the user to enter a U.S. dollar amount and then
 * shows you how to pay that amount using the smallest number of $20, &10, $5,
 * and $1 bills:
 *
 *      Enter a dollar amount: 93
 *      $20 bills: 4
 *      $10 bills: 1
 *      $5  bills: 0
 *      $1  bills: 3
 *
 * Hint: Divide the amount by 20 to determine the number of $20 bills needed,
 * and then reduce the amount by the total value of the $20 bills. Repeat for
 * the other bill sizes. Be sure to use integer values throughout, not
 * floating-point numbers.
 */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives,
                int *singles);

void pay_amount(int dollars, int *twenties, int *tens, int *fives,
                int *singles) {
  *twenties = dollars / 20;
  dollars -= (*twenties * 20);

  *tens = dollars / 10;
  dollars -= (*tens * 10);

  *fives = dollars / 5;
  dollars -= (*fives * 5);

  *singles = dollars;
}

int main(void) {
  int singles, fives, tens, twenties, change;

  printf("Enter the total change amount: ");
  scanf("%d", &change);
  pay_amount(change, &twenties, &tens, &fives, &singles);

  printf("$20 Bills: %d\n", twenties);
  printf("$10 Bills: %d\n", tens);
  printf("$ 5 Bills: %d\n", fives);
  printf("$ 1 Bills: %d\n", singles);

  return 0;
}
