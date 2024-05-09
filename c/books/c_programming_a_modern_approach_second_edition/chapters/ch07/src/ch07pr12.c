/*
 * Write a program that evaluates an expression:
 *
 *      Enter an expression: 1 + 2.5 * 3
 *      Value of expression: 10.5
 *
 * The operands in the expression are floating-point numbers; the operators are
 * +,-,*, and /. The expression is evaluated from left to right (no operator
 * takes precedence over any other operator).
 */

#include <stdio.h>

int main(void) {
  float operand1;
  float operand2;
  float operand3;
  float value;
  char operator1;
  char operator2;

  printf("THIS PROGRAM DOES NOT FOLLOW ORDER OF OPERATIONS!\n");
  printf("Enter a 3 operand equation: ");
  scanf("%f %c %f %c %f", &operand1, &operator1, &operand2, &operator2,
        &operand3);

  value = operand1;
  switch (operator1) {
  case '*':
    value *= operand2;
    break;
  case '/':
    value /= operand2;
    break;
  case '+':
    value += operand2;
    break;
  case '-':
    value -= operand2;
    break;
  }
  switch (operator2) {
  case '*':
    value *= operand3;
    break;
  case '/':
    value /= operand3;
    break;
  case '+':
    value += operand3;
    break;
  case '-':
    value -= operand3;
    break;
  }
  printf("Value of your expression is: %f\n", value);

  return 0;
}
