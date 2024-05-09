/*
 * If you take the value of N as computed in exercise 2, subtract 621,049 from
 * it, and then take that result modulo 7, you get a number from 0 to 6 that
 * represents the day of the week (Saturday - Sunday respectively) on which the
 * particular day falls. For example, the value of N computer for August 8,
 * 2004, is 732,239 as derived previously. 732,239 - 621,049 gives 111,190 and
 * 111,190 % 7 gives 2, indicating that this date falls on a Tuesday.
 *
 * Use the functions developed in the previous exercise to develop a program
 * that displays the day of the week on which a particular date falls. Make
 * certain that the programdisplays the day of the week in English (such as
 * "Monday").
 *
 * #####        Notes     #####
 *
 * Due to the fact that the last program was not at all accurate, this program
 * will likely not allign to what the book says as well.
 */

#include <stdio.h>

struct date {
  int year;
  int month;
  int day;
};

int calc_f(int year, int month);
int calc_g(int month);
int calc_N(struct date some_date);
struct date get_date(void);
void calc_day(int n);

int calc_f(int year, int month) {
  int f;

  if (month <= 2) {
    f = year - 1;
  } else {
    f = year;
  }

  return f;
}

int calc_g(int month) {
  int g;

  if (month <= 2) {
    g = month + 13;
  } else {
    g = month + 1;
  }

  return g;
}

int calc_N(struct date n) {
  int f = calc_f(n.year, n.month);
  int g = calc_g(n.month);
  int N = 1461 * f / 4 + 153 * g / 5 + n.day;

  if (n.year <= 1900 && n.month <= 2 && n.day <= 28 && n.year >= 1800 &&
      n.month >= 3 && n.day >= 1) {
    N += 1;
  } else if (n.year <= 1800 && n.month <= 1 && n.day <= 28 && n.year >= 1700 &&
             n.month <= 3 && n.day <= 1) {
    N += 2;
  }

  return N;
}

struct date get_date(void) {
  struct date input;
  printf("Please enter your date (yyyy/mm/dd): ");
  scanf("%i/%i/%i", &input.year, &input.month, &input.day);

  return input;
}

void calc_day(int n) {
  int result;
  result = (n - 621049) % 7;

  switch (result) {
  case 0:
    printf("Sunday\n");
    break;
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  default:
    printf("Something went wrong\n");
    break;
  }
}

int main(void) {
  int day;
  struct date input_date;
  printf("Enter a date (yyyy/mm/dd): ");
  input_date = get_date();

  day = calc_N(input_date);

  calc_day(day);

  return 0;
}
