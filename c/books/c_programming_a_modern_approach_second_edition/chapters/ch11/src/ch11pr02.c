/*
 * Modify Programming Project 8 from Chapter 5 so that it includes the
 * following function:
 *
 *      void find_closest_flight(int desired_time,
 *                               int *departure,
 *                               int *arrival);
 *
 * This function will find the flight whose departure time is closest to
 * desired_time (expressed in minutes since midnight). It will store the
 * departure times and arrival times of this flight (also expressed in minutes
 * since mignight) in the variables pointed to by departure and
 * arrival, respectively.
 *
 * ##### Spec:
 *
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

void find_closest_flight(int desired_time, int *departure, int *arrival);

void find_closest_flight(int desired_time, int *departure, int *arrival) {
  int eight_am = 8 * 60;
  int nine_43_am = 9 * 60 + 43;
  int eleven_19_am = 11 * 60 + 19;
  int twelve_47_pm = 12 * 60 + 47;
  int two_pm = 14 * 60;
  int three_45_pm = 15 * 60 + 45;
  int seven_pm = 19 * 60;
  int nine_45_pm = 21 * 60 + 45;

  if (desired_time >= 1 && desired_time < eight_am) {
    *departure = 480;
    *arrival = 616;
  }
  if (desired_time >= eight_am && desired_time < nine_43_am) {
    if (nine_43_am - desired_time < desired_time - eight_am) {
      /* 9:43am arriving @ 11:52am */
      *departure = 583;
      *arrival = 712;
    } else {
      /* 8:00am arriving @ 10:16am */
      *departure = 480;
      *arrival = 616;
    }
  }
  if (desired_time >= nine_43_am && desired_time < eleven_19_am) {
    if (eleven_19_am - desired_time < desired_time - nine_43_am) {
      /* 11:19am arriving @ 1:31pm */
      *departure = 679;
      *arrival = 811;
    } else {
      /* 9:43am arriving @ 11:52am */
      *departure = 583;
      *arrival = 712;
    }
  }
  if (desired_time >= eleven_19_am && desired_time < twelve_47_pm) {
    if (twelve_47_pm - desired_time < desired_time - eleven_19_am) {
      /* printf("12:47pm arriving @ 3:00pm */
      *departure = 767;
      *arrival = 900;
    } else {
      /* 11:19am arriving @ 1:31pm */
      *departure = 679;
      *arrival = 811;
    }
  }
  if (desired_time >= twelve_47_pm && desired_time < two_pm) {
    if (two_pm - desired_time < desired_time - twelve_47_pm) {
      /* printf("2:00pm arriving @ 4:08pm */
      *departure = 840;
      *arrival = 968;
    } else {
      /* 12:47pm arriving @ 3:00pm */
      *departure = 767;
      *arrival = 900;
    }
  }
  if (desired_time >= two_pm && desired_time < three_45_pm) {
    if (three_45_pm - desired_time < desired_time - two_pm) {
      /* 3:45pm arriving @ 5:55pm */
      *departure = 945;
      *arrival = 1075;
    } else {
      /* 2:00pm arriving @ 4:08pm */
      *departure = 840;
      *arrival = 968;
    }
  }
  if (desired_time >= three_45_pm && desired_time < seven_pm) {
    if (seven_pm - desired_time < desired_time - three_45_pm) {
      /* 7:00pm arriving @ 9:20 */
      *departure = 1140;
      *arrival = 1280;
    } else {
      /* 3:45pm arriving @ 5:55pm */
      *departure = 945;
      *arrival = 1075;
    }
  }
  if (desired_time >= seven_pm && desired_time < nine_45_pm) {
    if (nine_45_pm - desired_time < desired_time - seven_pm) {
      /* 9:45pm arriving @ 11:58pm */
      *departure = 1305;
      *arrival = 1438;
    } else {
      /* 7:00pm arriving @ 9:20pm */
      *departure = 1280;
      *arrival = 1140;
    }
  }
}

int main(void) {
  int hours;
  int minutes;
  int mins_from_midnight;
  int departure = 0;
  int arrival = 0;

  printf("Enter a time (24H format): ");
  scanf("%2d:%2d", &hours, &minutes);
  mins_from_midnight = hours * 60 + minutes;

  find_closest_flight(mins_from_midnight, &departure, &arrival);
  printf("Closest flight:\n");
  printf("Deparating: %.2d:%.2d, arriving: %2d:%2d\n", departure / 60,
         departure % 60, arrival / 60, arrival % 60);

  return 0;
}
