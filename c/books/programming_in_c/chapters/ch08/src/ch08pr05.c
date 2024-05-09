/*
 * Replace the dateUpdate() function from 8.4 with the modified one that uses
 * compound literals as presented in the text. Run the program to verify its
 * proper operation
 */

#include <stdio.h>

struct date_and_time {
  int month;
  int day;
  int year;
  int hour;
  int minute;
  int second;
};

struct date_and_time dateUpdate(struct date_and_time today);
int number_of_days(struct date_and_time d);
int is_leap_year(struct date_and_time d);
struct date_and_time clock_keeper(struct date_and_time now);

/* Function to calculate tomorrow's date */
struct date_and_time dateUpdate(struct date_and_time today) {
  struct date_and_time update;
  if (today.day != number_of_days(today)) {
    update.day = today.day + 1;
    update.month = today.month;
    update.year = today.year;
    update.hour = today.hour;
    update.minute = today.minute;
    update.second = today.second;
  } else if (today.month == 12) {
    update.day = 1;
    update.month = 1;
    update.year = today.year + 1;
    update.hour = today.hour;
    update.minute = today.minute;
    update.second = today.second;
  } else {
    update.day = 1;
    update.month = today.month + 1;
    update.year = today.year;
    update.hour = today.hour;
    update.minute = today.minute;
    update.second = today.second;
  }
  return update;
}

int number_of_days(struct date_and_time d) {
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

int is_leap_year(struct date_and_time d) {
  int leap_year_flag;

  if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
    leap_year_flag = 1;
  } else {
    leap_year_flag = 0;
  }

  return leap_year_flag;
}

struct date_and_time clock_keeper(struct date_and_time now) {
  ++now.second;

  if (now.second == 60) {
    now.second = 0;
    ++now.minute;
    if (now.minute == 60) {
      now.minute = 0;
      ++now.hour;
      if (now.hour == 24) {
        now.hour = 0;
        now = dateUpdate(now);
      }
    }
  }

  return now;
}

int main(void) {
  struct date_and_time today, new;

  printf("Enter todays date and time (mm/dd/yyyy hh:mm:ss): ");
  scanf("%i/%i/%i %i:%i:%i", &today.month, &today.day, &today.year, &today.hour,
        &today.minute, &today.second);

  new = clock_keeper(today);
  printf("The updated date and time is: %2i/%2i/%4i + %2i:%2i:%2i.\n",
         new.month, new.day, new.year, new.hour, new.minute, new.second);

  return 0;
}
