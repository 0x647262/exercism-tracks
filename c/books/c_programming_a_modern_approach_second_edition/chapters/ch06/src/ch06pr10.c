/*
 * Programming Project 9 in Chapter 5 asked you to write a program that
 * determined which of two dates came earlier on the calendar. Generalize this
 * program so that the user may enter any number of dates. The user will enter
 * 0/0/0 to indicate that no mote dates will be entered:
 *
 *      Enter a date (mm/dd/yy): 3/6/08
 *      Enter a date (mm/dd/yy): 5/17/0
 *      Enter a date (mm/dd/yy): 6/3/07
 *      Enter a date (mm/dd/yy): 0/0/0
 *      7/17/07 is the earliest date.
 */

#include <stdio.h>

int main(void) {
  int day, month, year;
  int earliest_day = 0, earliest_month = 0, earliest_year = 0;
  int total, earliest_total;

  printf("Enter a  date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  total = year * 365 + month * 30 + day;
  if (total == 0) {
    return 0;
  }

  earliest_total = total;
  while (total != 0) {
    if (total <= earliest_total) {
      earliest_day = day;
      earliest_month = month;
      earliest_year = year;
      earliest_total = total;
    }
    printf("Enter a  date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    total = year * 365 + month * 30 + day;
  }
  printf("The earliest date entered was: %d/%.2d/%.2d\n", earliest_month,
         earliest_day, earliest_year);

  return 0;
}
