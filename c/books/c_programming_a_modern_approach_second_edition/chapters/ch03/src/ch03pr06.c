/*
 * Modify the addfrac.c program of section 3.2 so that the user enters both
 * fractions at the same time seperated by a plus sign:
 *
 *      Enter two fractions seperated by a plus sign: 5/6 + 3/4
 *      The sum is: 38/24
 */

#include <stdio.h>

int main(void) {
  int num1, num2;
  int den1, den2;
  int result_num;
  int result_den;

  printf("Enter 2 fractions (x/x + x/x): ");
  scanf("%d/%d + %d/%d", &num1, &den1, &num2, &den2);

  result_num = num1 * den2 + num2 * den1;
  result_den = den1 * den2;
  printf("The sum is: %d/%d\n", result_num, result_den);

  return 0;
}
