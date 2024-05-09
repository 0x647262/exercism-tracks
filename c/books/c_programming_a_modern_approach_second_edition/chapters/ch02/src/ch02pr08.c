/*
 * Write a program that calculates the remaining balance on a loan after the
 * first, second, and third monthly payments:
 *
 *      Enter amount of loan: 20000.00
 *      Enter interest rate: 6.0
 *      Enter monthly payment: 386.66
 *
 *      Balance remaining after first payment: 19713.34
 *      Balance remaining after second payment: 19425.25
 *      Balance remaining after third payment: 19135.71
 *
 * Display each balance with 2 digits after the decimal point. Hint: Each
 * month, the balance is decreased by the amount of the payment, but increased
 * by the balance times the monthly interest rate. To find the monthly interest
 * rate, convert the interest rate entered by the user to a percentage and
 * divide it by 12.
 */

#include <stdio.h>

int main(void) {
  float balance;
  float loan;
  float rate;
  float payment;
  float monthly_rate;

  printf("Enter the loan amount: ");
  scanf("%f", &loan);
  balance = loan;

  printf("Enter interest rate: ");
  scanf("%f", &rate);
  monthly_rate = (rate / 100.00f) / 12;

  printf("Enter monthly payment: ");
  scanf("%f", &payment);

  balance = balance - payment + balance * monthly_rate;
  printf("After the first payment: $%f is owed\n", balance);

  balance = balance - payment + balance * monthly_rate;
  printf("After the second payment: $%f is owed\n", balance);

  balance = balance - payment + balance * monthly_rate;
  printf("After the third payment: $%f is owed\n", balance);

  return 0;
}
