/*
 * Write a program that prompts the user to enter two dates, and then indicates
 * which date comes earlier on the calendar:
 *
 *      Enter first date (mm/dd/yy): 3/6/08
 *      Enter second date (mm/dd/yy): 5/17/07
 *      5/17/07 is earlier than 3/6/08
 */

#include <stdio.h>

int main(void) {
  int day1, month1, year1;
  int day2, month2, year2;
  int total1, total2;

  printf("Enter 1st date (yyyy/mm/dd): ");
  scanf("%d/%d/%d", &year1, &month1, &day1);
  total1 = year1 * 365 + month1 * 30 + day1;

  printf("Enter 2nd date (yyyy/mm/dd): ");
  scanf("%d/%d/%d", &year2, &month2, &day2);
  total2 = year2 * 365 + month2 * 30 + day2;

  if (total1 == total2) {
    printf("Dates are the same!\n");
  } else if (total1 < total2) {
    printf("%d/%d/%d is earlier than %d/%d/%d\n", year2, month2, day2, year1,
           month1, day1);
  } else {
    printf("%d/%d/%d is earlier than %d/%d/%d\n", year1, month1, day1, year2,
           month2, day2);
  }

  return 0;
}
