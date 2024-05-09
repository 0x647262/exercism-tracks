/*
 * Write a program that accepts the date in the form mm/dd/yyyy and then
 * displays it in the form month dd, yyyy, where month is the name of the
 * month:
 *
 *      Enter a date (mm/dd/yyyy): 2/17/2011
 *      You entered the date: February 17, 2011
 *
 * Store the month names in an array that contains pointers to strings.
 */

#include <stdio.h>

int main(void) {
  int day;
  int month;
  int year;
  const char *months[13];
  months[0] = "Invalid";
  months[1] = "January";
  months[2] = "February";
  months[3] = "March";
  months[4] = "April";
  months[5] = "May";
  months[6] = "June";
  months[7] = "July";
  months[8] = "August";
  months[9] = "September";
  months[10] = "October";
  months[11] = "November";
  months[12] = "December";

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("You entered: %s %d, %d\n", months[month], day, year);

  return 0;
}
