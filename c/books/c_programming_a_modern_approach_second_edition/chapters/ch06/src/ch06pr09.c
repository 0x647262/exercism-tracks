/*
 * Programming Project 8 in Chapter 2 asked you to write a program that
 * calculates the remaining balance on a loan after the first, second, and
 * third monthly payments. Modify the program so that it also asks the user to
 * enter the number of payments, and then displays the balance remaining after
 * each of these payments.
 */

#include <stdio.h>

int main(void) {
  int i;
  float loan;
  float rate;
  float payment;
  float monthly_rate;

  printf("Enter the loan amount: ");
  scanf("%f", &loan);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  monthly_rate = (rate / 100.0f) / 12.0f;
  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  printf("Enter the number of payments: ");
  scanf("%d", &i);

  while (i != 0) {
    loan = (loan - payment) + (loan * monthly_rate);
    printf("After payment %d, $%.02f is owed\n", i, loan);
    i -= 1;
  }
  return 0;
}
