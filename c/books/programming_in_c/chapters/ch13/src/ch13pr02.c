/*
 * Write a function called: month_name()that takes a value of type: enum month
 * (as defined in this chapter) and returns a pointer to a character string
 * containing the name of the month. In this way, you can display the value of
 * an enum month variable with a statement such as:
 *
 * 	printf("%s\n", month_name(month);
 */

#include <stdio.h>

enum months {
  January = 1,
  Febuary = 2,
  March = 3,
  April = 4,
  May = 5,
  June = 6,
  July = 7,
  August = 8,
  September = 9,
  November = 10,
  December = 11
};

const char *month_name(enum months);

const char *month_name(enum months m) {
  switch (m) {
  case January:
    return "January";
  case Febuary:
    return "Febuary";
  case March:
    return "March";
  case April:
    return "April";
  case May:
    return "May";
  case June:
    return "June";
  case July:
    return "July";
  case August:
    return "August";
  case September:
    return "September";
  case November:
    return "November";
  case December:
    return "December";
  default:
    printf("ERROR: Invalid input!\n");
    return "Error";
  }
}

int main(void) {
  enum months month = 1;
  printf("The month is: %s\n", month_name(month));

  month = Febuary;
  printf("The month is: %s\n", month_name(month));

  month = 3;
  printf("The month is: %s\n", month_name(month));

  month = April;
  printf("The month is: %s\n", month_name(month));

  month = 5;
  printf("The month is: %s\n", month_name(month));

  month = June;
  printf("The month is: %s\n", month_name(month));

  return 0;
}
