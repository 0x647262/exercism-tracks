/*
 * Modify Programming Project 9 from Chapter 5 so that each date entered by the
 * user is stored in a date structure (see Exercise 5). Incorperate the
 * compare_dates() function of Exercise 5 into your program.
 *
 *      Enter first date (mm/dd/yy): 3/6/08
 *      Enter second date (mm/dd/yy): 5/17/07
 *      5/17/07 is earlier than 3/6/08
 */

#include <stdio.h>

typedef struct {
  int year;
  int month;
  int day;
} Date;

int compare_dates(Date date1, Date date2);

int compare_dates(Date date1, Date date2) {
  int total1 = date1.year + date1.month + date1.day;
  int total2 = date2.year + date2.month + date2.day;

  if (total1 < total2) {
    return -1;
  } else if (total1 > total2) {
    return 1;
  } else {
    return 0;
  }
}

int main(void) {
  Date date1;
  printf("Enter 1st date (yyyy/mm/dd): ");
  scanf("%d/%d/%d", &date1.year, &date1.month, &date1.day);

  Date date2;
  printf("Enter 2nd date (yyyy/mm/dd): ");
  scanf("%d/%d/%d", &date2.year, &date2.month, &date2.day);

  if (compare_dates(date1, date2) == -1) {
    printf("%04d/%02d/%02d is earlier than %04d/%02d/%02d\n", date1.year,
           date1.month, date1.day, date2.year, date2.month, date2.day);
  } else if (compare_dates(date1, date2) == 1) {
    printf("%04d/%02d/%02d is earlier than %04d/%02d/%02d\n", date2.year,
           date2.month, date2.day, date1.year, date1.month, date1.day);
  } else {
    printf("%04d/%02d/%02d and %04d/%02d/%02d are the same.\n", date1.year,
           date1.month, date1.day, date2.year, date2.month, date2.day);
  }

  return 0;
}
