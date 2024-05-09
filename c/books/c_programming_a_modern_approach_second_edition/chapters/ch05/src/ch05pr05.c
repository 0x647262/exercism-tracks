/*
 * In one state, single residents are subject to the following income tax:
 *
 *      Income          Amount of tax
 *      Not over $750   1% of income
 *      $750-$2,250     $7.50   plus 2% of amount over $750
 *      $2,250-$3,750   $37.50  plus 3% of amount over $2,250
 *      $3,750-$5,250   $82.50  plus 4% of amount over $3,750
 *      $5,250-$7,000   $142.50 plus 5% of amount over $5,250
 *      Over $7,000     $230.00 plus 6% of amount over %7,000
 *
 * Write a program that asks the user to enter the amount of taxable income,
 * then displays the tax due.
 */

#include <stdio.h>

int main(void) {
  float income;
  float taxes;

  printf("Enter your income: ");
  scanf("%f", &income);

  if (income < 750.00f) {
    taxes = income * 0.01f;
  } else if (income < 2250.00f) {
    taxes = (income - 750) * 0.02f + 7.50f;
  } else if (income < 3750.00f) {
    taxes = (income - 2250) * 0.03f + 37.50f;
  } else if (income < 5250.00f) {
    taxes = (income - 3750) * 0.04f + 82.50f;
  } else if (income < 7000.00f) {
    taxes = (income - 5250) * 0.05f + 142.50f;
  } else {
    taxes = (income - 7000) * 0.06f + 230.00f;
  }

  printf("Taxes due: $%.2f\n", taxes);

  return 0;
}
