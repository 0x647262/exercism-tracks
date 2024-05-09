/*
 * Program to print the number of days in a month.
 */

#include <stdio.h>

enum month {
  January = 1,
  Febuary,
  March,
  April,
  May,
  June,
  July,
  August,
  September,
  October,
  November,
  December
};

int main(void) {
  enum month a_month;
  int days;

  printf("Enter a month's number (1-12): ");
  scanf("%i", &a_month);

  switch (a_month) {
  case January:
  case March:
  case May:
  case July:
  case August:
  case October:
  case December:
    days = 31;
    break;
  case April:
  case June:
  case September:
  case November:
    days = 30;
    break;
  case Febuary:
    days = 28;
    break;
  default:
    printf("Invalid input!\n");
    days = 0;
    break;
  }
  if (days != 0) {
    printf("Number of days: %i\n", days);
  }
  if (days == 28) {
    printf("...or 28 if it's a leap year!\n");
  }

  return 0;
}
