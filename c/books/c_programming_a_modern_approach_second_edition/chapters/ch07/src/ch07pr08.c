/*
 * Modify Programming Project 8 from Chapter 5 so that the user enters a time
 * using the 12-hour clock. The input will have the form:
 *
 *      hours:minutes A/P/AM/PM
 *
 * (Either lower-case or upper-case). White space is allowed (but not required)
 * between the numerical time, and the AM/PM indicator. Examples of valid
 * input:
 *
 *      1:15P
 *      1:15PM
 *      1:15p
 *      1:15pm
 *      1:15 P
 *      1:15 PM
 *      1:15 p
 *      1:15 pm
 *
 * You may assume that the input has one of these forms; there is no need to
 * test for errors.
 *
 * ##### NOTE:
 * How will I handle the _optional_ existence of a space?
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int hours;
  int minutes;
  int mins_from_midnight;
  int eight_am = 8 * 60;
  int nine_43_am = 9 * 60 + 43;
  int eleven_19_am = 11 * 60 + 19;
  int twelve_47_pm = 12 * 60 + 47;
  int two_pm = 14 * 60;
  int three_45_pm = 15 * 60 + 45;
  int seven_pm = 19 * 60;
  int nine_45_pm = 21 * 60 + 45;
  char ampm;

  printf("Enter a time (XX:XX AM/PM): ");
  scanf("%d:%d %c", &hours, &minutes, &ampm);
  switch (toupper(ampm)) {
  case 'P':
    hours += 12;
    break;
  case 'A':
    break;
  default:
    printf("Invalid input!\n");
    return 0;
  }
  mins_from_midnight = hours * 60 + minutes;

  printf("Closest departure time is: ");
  if (mins_from_midnight >= 1 && mins_from_midnight < eight_am) {
    printf("8:00am arriving at 10:16am\n");
  }
  if (mins_from_midnight >= eight_am && mins_from_midnight < nine_43_am) {
    if (nine_43_am - mins_from_midnight < mins_from_midnight - eight_am) {
      printf("9:43am arriving at 11:52am\n");
    } else {
      printf("8:00am arriving at 10:16am\n");
    }
  }
  if (mins_from_midnight >= nine_43_am && mins_from_midnight < eleven_19_am) {
    if (eleven_19_am - mins_from_midnight < mins_from_midnight - nine_43_am) {
      printf("11:19am arriving at 1:31pm\n");
    } else {
      printf("9:43am arriving at 11:52am\n");
    }
  }
  if (mins_from_midnight >= eleven_19_am && mins_from_midnight < twelve_47_pm) {
    if (twelve_47_pm - mins_from_midnight < mins_from_midnight - eleven_19_am) {
      printf("12:47pm arriving at 3:00pm\n");
    } else {
      printf("11:19am arriving at 1:31pm\n");
    }
  }
  if (mins_from_midnight >= twelve_47_pm && mins_from_midnight < two_pm) {
    if (two_pm - mins_from_midnight < mins_from_midnight - twelve_47_pm) {
      printf("2:00pm arriving at 4:08pm\n");
    } else {
      printf("12:47pm arriving at 3:00pm\n");
    }
  }
  if (mins_from_midnight >= two_pm && mins_from_midnight < three_45_pm) {
    if (three_45_pm - mins_from_midnight < mins_from_midnight - two_pm) {
      printf("3:45pm arriving at 5:55pm\n");
    } else {
      printf("2:00pm arriving at 4:08pm\n");
    }
  }
  if (mins_from_midnight >= three_45_pm && mins_from_midnight < seven_pm) {
    if (seven_pm - mins_from_midnight < mins_from_midnight - three_45_pm) {
      printf("7:00pm arriving at 9:20\n");
    } else {
      printf("3:45pm arriving at 5:55pm\n");
    }
  }
  if (mins_from_midnight >= seven_pm && mins_from_midnight < nine_45_pm) {
    if (nine_45_pm - mins_from_midnight < mins_from_midnight - seven_pm) {
      printf("9:45pm arriving at 11:58pm\n");
    } else {
      printf("7:00pm arriving at 9:20\n");
    }
  }
  return 0;
}
