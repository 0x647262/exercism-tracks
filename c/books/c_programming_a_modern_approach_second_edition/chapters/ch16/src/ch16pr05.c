/*
 * Modify Programming Project 8 from Chapter 5 so that the times are stored in
 * a single array. The elements of the array will be structures, each
 * containing a departure time and the corresponding arrival time. (Each time
 * will be an integer, representing the number of minutes since midnight) The
 * program will use a loop to search the array for the departure time closest
 * to the time entered by the user.
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
 */

#include <stdio.h>

#define FLIGHTS 8

typedef struct {
  int depart;
  int arrive;
} Flight;

static const Flight flight_times[FLIGHTS] = {
    {480, 616}, {583, 712},  {679, 811},   {767, 900},
    {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438},
};

int main(void) {
  int hours;
  int minutes;
  int mfm;

  printf("Enter a time (24H format): ");
  scanf(" %2d:%2d", &hours, &minutes);
  mfm = hours * 60 + minutes;

  int i = 0;
  while (mfm > flight_times[i].depart) {
    i += 1;
  }

  // Jotting down a note. This code will not work properly!
  printf("Closest departure time is: ");
  if (i == 0) {
    printf("%02d:%02d arriving at %02d:%02d\n", flight_times[i].depart / 60,
           flight_times[i].depart % 60, flight_times[i].arrive / 60,
           flight_times[i].arrive % 60);
    //} else if (mfm >= flight_times[i - 1].depart && mfm <
    // flight_times[i].depart) {
  } else {
    if (flight_times[i].depart - mfm < mfm - flight_times[i - i].depart) {
      printf("%02d:%02d arriving at %02d:%02d\n", flight_times[i].depart / 60,
             flight_times[i].depart % 60, flight_times[i].arrive / 60,
             flight_times[i].arrive % 60);
    } else {
      printf("%02d:%02d arriving at %02d:%02d\n",
             flight_times[i - 1].depart / 60, flight_times[i - 1].depart % 60,
             flight_times[i - 1].arrive / 60, flight_times[i - 1].arrive % 60);
    }
  }
  return 0;
}
