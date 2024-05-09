/*
 * Write a program that asks the user for a 12-hour time, then displays the
 * time in 24-hour form:
 *
 *      Enter a 12-hour time: 9:11 PM
 *      Equivalent 24-hour time: 2:11
 *
 * See Programming Project 8 for a description of the input format.
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int hour, mins;
  char ampm;

  printf("Enter a 12-hour time: ");
  scanf("%2d:%2d %1c", &hour, &mins, &ampm);
  switch (toupper(ampm)) {
  case 'P':
    hour += 12;
    break;
  case 'A':
    break;
  default:
    printf("Invalid input!\n");
    return 0;
  }
  printf("Equivalent 24-hour time is: %2d:%2d\n", hour, mins);

  return 0;
}
