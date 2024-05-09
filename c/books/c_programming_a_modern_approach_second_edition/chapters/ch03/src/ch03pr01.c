/*
 * Write a program that accepts a date from the user in the form mm/dd/yy anf
 * then displays it in the form yymmdd:
 *
 *      Enter a date: (mm/dd/yy): 2/17/2011
 *      You entered the date: 20110217
 */

#include <stdio.h>

int main(void) {
  int dd, mm, yy;

  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &mm, &dd, &yy);
  printf("You entered the date: %.4d/%.2d/%.2d\n", yy, mm, dd);

  return 0;
}
