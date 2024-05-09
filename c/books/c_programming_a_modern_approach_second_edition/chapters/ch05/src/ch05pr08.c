/*
 * The following table shows the daily flights from one city to another:
 *
 *      Depature time   Arrival time
 *      8:00a.m.        10:16a.m.
 *      9:43a.m.        11:52a.m.
 *      11:19a.m.       1:31p.m.
 *      12:47p.m.       3:00p.m.
 *      2:00p.m.        4:08p.m.
 *      3:45p.m.        5.55p.m.
 *      7:00p.m.        9:20p.m.
 *      9:45p.m.        11:58p.m.
 *
 * Write a program that asks the user to enter a time (expressed in hours and
 * minutes, using the 24-hour clock). The program then displays the departure
 * and arrival times for the flight whose departure time is closest to that
 * entered by the user.
 *
 *      Enter a 24-hour time: 13:15
 *      Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 *
 * Hint: Convert the input into a time expressed in minutes since midnight, and
 * compare it to the departure times, also expressed in minutes since midnight.
 * For example: 13:15 is 13 X 60 + 15 = 795 minutes since midnight. Which is
 * closer to 12:47p.m. (767 minutes since midnight) than to any of the other
 * departure times.
 */

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

  printf("Enter a time (24H format): ");
  scanf("%2d:%2d", &hours, &minutes);
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
