/*
 * Write a program that asks the user to enter a dollars-and-cents amount, then
 * displays the amount with a 5% tax added:
 *
 *      Enter an amount: 100.00
 *      With tax added:  105.00
 */

#include <stdio.h>

#define tax 1.05f

int main(void) {
  float cost;

  printf("Enter the item's cost: ");
  scanf("%f", &cost);
  printf("Your item costs: $%.2f after tax!\n", (cost * tax));

  return 0;
}
