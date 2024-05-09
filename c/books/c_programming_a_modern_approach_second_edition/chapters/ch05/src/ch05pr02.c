/*
 * Write a program that asks the user for a 24-hour time, then displays the
 * time in 12 hour form:
 *
 *      Enter a 24-hour time: 21:11
 *      Equivalent 12-hour time: 9:11 PM
 */

#include <stdio.h>

int main(void) {
  int hh;
  int mm;
  ;

  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &hh, &mm);

  if (hh > 12) {
    hh = hh - 12;
    printf("The time is: %2d:%2d PM\n", hh, mm);
  } else {
    printf("Equivalent 12-hour time: %2d:%2d AM\n", hh, mm);
  }

  return 0;
}
