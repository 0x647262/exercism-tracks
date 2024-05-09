/*
 * Write a program that evaluates the following expression, and displays the
 * result. (Remember to use exponential format to display the result)
 */

#include <stdio.h>

int main(void) {
  double result;

  result = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);
  printf("The result of (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8) is: %e\n",
         result);

  return 0;
}
