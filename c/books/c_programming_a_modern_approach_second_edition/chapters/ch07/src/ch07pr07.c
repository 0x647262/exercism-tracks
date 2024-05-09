/*
 * Modify Programming Project 6 from Chapter 3 so that the user may add,
 * subtractm multiply, or divide two fractions (by entering +,-,*, or / between
 * the fractions).
 */

#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  int den1;
  int den2;
  int result_num;
  int result_den;
  char operator;

  printf("Enter 2 fractions (x/x (*, /, +, -) x/x): ");
  scanf("%d/%d %c %d/%d", &num1, &den1, &operator, & num2, &den2);
  switch (operator) {
  case '*':
    result_num = num1 * num2;
    result_den = den1 * den2;
    printf("The product is: %d/%d\n", result_num, result_den);
    break;
  case '/':
    result_num = num1 * den2;
    result_den = den1 * num2;
    printf("The quotient is: %d/%d\n", result_num, result_den);
    break;
  case '+':
    result_num = num1 * den2 + num2 * den1;
    result_den = den1 * den2;
    printf("The sum is: %d/%d\n", result_num, result_den);
    break;
  case '-':
    result_num = num1 * den2 - num2 * den1;
    result_den = den1 * den2;
    printf("The difference is: %d/%d\n", result_num, result_den);
    break;
  default:
    printf("Invalid input!");
    break;
  }
  return 0;
}
