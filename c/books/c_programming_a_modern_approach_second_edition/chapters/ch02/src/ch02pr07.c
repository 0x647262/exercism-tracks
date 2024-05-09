/*
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

int main(void) {
  int fives, tens, twenties, change, total;

  printf("Enter the total change amount: ");
  scanf("%d", &change);

  twenties = change / 20;
  printf("$20 Bills: %d\n", twenties);
  total = change - (twenties * 20);

  tens = total / 10;
  printf("$10 Bills: %d\n", tens);
  total = total - (tens * 10);

  fives = total / 5;
  printf("$ 5 Bills: %d\n", fives);
  total = total - (fives * 5);

  printf("$ 1 Bills: %d\n", total);

  return 0;
}
