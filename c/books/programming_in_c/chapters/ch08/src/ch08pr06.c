/*
 * Replace the dateUpdate() function from 8.4 with the modified one that uses
 * compound literals as presented in the text. Run the program to verify its
 * proper operation
 */

#include <stdio.h>

struct date {
  int month;
  int day;
  int year;
};

struct date date_update(struct date today);
int number_of_days(struct date d);
int is_leap_year(struct date d);

struct date date_update(struct date today) {
  struct date tomorrow;
  if (today.day != number_of_days(today)) {
    tomorrow = (struct date){today.month, today.day += 1, today.year};
  } else if (today.month == 12) { // end of year
    tomorrow = (struct date){1, 1, today.year += 1};
  } else {
    tomorrow = (struct date) { 1, today.month += 1, today.year }
  };

  return tomorrow;
}

int number_of_days(struct date d) {
  int days;
  const int days_per_month[12] = {31, 28, 31, 30, 31, 30,
                                  31, 31, 30, 31, 30, 31};

  if (is_leap_year(d) == 1 && d.month == 2) {
    days = 29;
  } else {
    days = days_per_month[d.month - 1];
  }

  return days;
}

int is_leap_year(struct date d) {
  int leap_year_flag;

  if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
    leap_year_flag = 1;
  } else {
    leap_year_flag = 0;
  }

  return leap_year_flag;
}

int main(void) {
  struct date this_day, next_day;

  printf("Enter todays date (mm/dd/yyyy): ");
  scanf("%i/%i/%i", &this_day.month, &this_day.day, &this_day.year);

  next_day = date_update(this_day);
  printf("Tomorrows date is %2i/%2i/%4i.\n", next_day.month, next_day.day,
         next_day.year);

  return 0;
}
