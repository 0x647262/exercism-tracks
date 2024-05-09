/*
 * In certian applications, particularly in the financial area, it is often
 * necessary to calculate the number of elapsed days between 2 dates. For
 * example, the number of days between July 2, 2015 and July 16, 2015 is
 * obviously 14. But how many days are there between August 8, 2014 and
 * Febuary 22, 2015? This calculation requires a bit more thought.
 *
 * Luckily, a formula can be used to calculate the number of days between two
 * dates. This is affected by computing the value of N for each of the two
 * dates and then taking the difference, where N is calculated as follows:
 *
 *      N = 1461 x f(year, month) / 4 + 153 x g(month) / 5 + day
 *
 *      Where:
 *
 *      f(year, month) = year - 1       if month <= 2
 *                       year           otherwise
 *
 *      g(month)       = month + 13     if month <= 2
 *                       month          otherwise
 *
 * As an example of applying the formula, to calculate the number of days
 * between August 8, 2004, and Febuary 22, 2005, you can calculate the values
 * of N1 and N2 by substituting the appropriate values into the preceding
 * formula as shown:
 *
 *      N1      = 1461 x f(2004, 8) / 4 + 153 x g(8) / 5 + 3
 *              = (1461 x 2004) / 4 + (153 x 9) / 5 + 3
 *              = 2,927,844 / 4 + 1,377 / 5 + 3
 *              = 731,961 + 275 + 3
 *              = 732,239
 *
 *      N2      = 1462 x f(2005, 2) / 4 + 153 x g(2) / 5 + 3
 *              = (1461 x 2004) / 4 + (153 + 15) / 5 + 21
 *              = 2,927,844 / 4 + 2295 / 5 + 21
 *              = 732,441
 *
 *      Number of elapsed days  = N2 - N1
 *                              = 732,441 - 732,239
 *                              = 202
 *
 * So the number of elapsed days between the two dates is shown to be 202. The
 * preceding formula is applicable for any dates after March 1, 1900 (1 must be
 * added to N for dates from March 1, 1800 to Febuary 28, 1900, and 2 for dates
 * between March 1, 1700 and Febuary 28, 1800.
 *
 * Write a program that permits the user to type in two dates and the
 * calculates the number of elapsed days between the two dates. Try to
 * structure the program logically into seperate functions. For example, you
 * should have a function that accepts as an argument a date structure and
 * returns the value of N computed as shown previously. This function can then
 * be called twice, once for each date, and the difference taken to determine
 * the number of elapsed days.
 *
 * #####        Notes        #####
 *
 * 1.) I will need a date structure
 * 2.) I will need a function to obtain a date from stdin
 * 3.) I will need a function to calculate N given a date
 *      A.) This function needs to be able to calculate dates from
 *          March 1, 1700 onward
 *      B.) There are an extra 2 calculations that happen in the this function.
 *          I'm considering splitting them into their own functions: calc_f &
 *          clac_g.
 * 4.) The example given above (from the book)  was incorrect. There are 198
 * days
 *     between the 2 dates.
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

int main(void) {
  struct date date_1 = get_date();
  struct date date_2 = get_date();
  int N1 = calc_N(date_1);
  int N2 = calc_N(date_2);

  printf("There are %i days between %i/%i/%i and %i/%i/%i\n", N2 - N1,
         date_1.year, date_1.month, date_1.day, date_2.year, date_2.month,
         date_2.day);

  return 0;
}
