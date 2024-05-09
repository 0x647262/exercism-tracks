/*
 * Given the definition of a date structure as defined in this chapter, write a
 * function called dateUpdate() that takes a pointer to a date structure as its
 * argument and that updates the structure to the following day (see program
 * 8.4).
 */

#include <stdbool.h>
#include <stdio.h>

struct date {
  int month;
  int day;
  int year;
};

void date_update(struct date *today);
int number_of_days(struct date *d);
int is_leap_year(struct date *d);

void date_update(struct date *today) {
  if (today->day != number_of_days(today)) {
    today->day += 1;
  } else if (today->month == 12) {
    today->day = 1;
    today->month = 1;
    today->year += 1;
  } else {
    today->day = 1;
    today->month += 1;
  }
}

int number_of_days(struct date *d) {
  int days;
  const int days_per_month[12] = {31, 28, 31, 30, 31, 30,
                                  31, 31, 30, 31, 30, 31};

  if (is_leap_year(d) == 1 && d->month == 2) {
    days = 29;
  } else {
    days = days_per_month[d->month - 1];
  }

  return days;
}

int is_leap_year(struct date *d) {
  int leap_year_flag;

  if ((d->year % 4 == 0 && d->year % 100 != 0) || d->year % 400 == 0) {
    leap_year_flag = 1;
  } else {
    leap_year_flag = 0;
  }

  return leap_year_flag;
}

int main(void) {
  struct date this_day;

  printf("Enter todays date (mm/dd/yyyy): ");
  scanf("%i/%i/%i", &this_day.month, &this_day.day, &this_day.year);

  date_update(&this_day);
  printf("Tomorrows date is %i/%i/%.2i.\n", this_day.month, this_day.day,
         this_day.year % 100);

  return 0;
}
