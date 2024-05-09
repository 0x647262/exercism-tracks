/*
 * Modify Programming Project 8 from Chapter 5 so that the departure times are
 * stored in an array, and the arrival times are stored in a second array. (The
 * times are integers representing the number of minutes since midnight.) The
 * program will use a loop to search the array of departure times for the one
 * closest to the time entered by the user.
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

int main(void) {
  int hours, minutes, now, i;
  int departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
  int arrival[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

  printf("Enter a time (24H format): ");
  scanf("%2d:%2d", &hours, &minutes);
  now = hours * 60 + minutes;

  printf("Closest departure time is: ");
  for (i = 0; i < 8; i += 1) {
    if (departure[i] < now) {
      continue;
    } else {
      /*
       * This part isn't printf()ing pretty. I should come back and fix
       * this at some point...
       */
      if (departure[i] - now <= now - departure[i - 1]) {
        printf("Closest departure time is %d:%d, arriving at %d:%d\n",
               departure[i] / 60, departure[i] % 60, arrival[i] / 60,
               arrival[i] % 60);
      } else {
        printf("Closest departure time is %d:%d, arriving at %d:%d\n",
               departure[i - 1] / 60, departure[i - 1] % 60,
               arrival[i - 1] / 60, arrival[i - 1] % 60);
      }
      break;
    }
  }
  return 0;
}
