/*
 * Write a function elapsed_time that takes as its arguments two time
 * structures, and returns a time structure that represents the elapsed time
 * (in hours, minutes, and seconds) between the two times. So the call:
 *
 *      elapsed_time(time1, time2)
 *
 * Where time1 represents 3:45:15, and time2 represents 9:44:03, should return
 * a time structure that represents 5 hours, 58 minutes, and 48 seconds. Be
 * careful with times that cross midnight.
 *
 * #####        Notes        #####
 *
 * 1.) A struct for time is needed.
 * 2.) A function to obtain time is needed
 * 3.) A function to calculate elapsed time is needed
 *      A.) This function will use the 24h format (Military time).
 *      B.) Since the author did not specify, my function assumes that time2
 *          always occurs after time1.
 *      C.) Minutes + seconds are easy, how will I calculate hours?
 *
 *              while (hours < 24)
 *                      ++hour_tally;
 *              while (hours <= time2.hour)
 *                      ++hour_tally;
 *
 *          On second thought, converting the ENTIRE time into seconds would be
 *          another option:
 *
 *              total = (foo.hours * 3600) + (foo.minutes * 60) + foo.seconds
 *
 * !!!!! Please read the comment in elapsed_time() it explains how times that
 * !!!!! cross midnight need to be handled! This method is far more effecitve
 * !!!!! than the "tally" method I described above. It keeps the function more
 * !!!!! concise.
 */

#include <stdio.h>

struct time {
  int hours;
  int minutes;
  int seconds;
};

struct time get_time(void);
struct time elapsed_time(struct time time1, struct time time2);
int abs_value(int value);

struct time get_time(void) {
  struct time input;
  scanf("%i:%i:%i", &input.hours, &input.minutes, &input.seconds);

  return input;
}

struct time elapsed_time(struct time time1, struct time time2) {
  /*
   * If the times cross midnight, the calculation needs to add 24 to
   * time2.hours. If this is not done, the difference between the two
   * times will be either negative or too large.
   */

  struct time time_elapsed;

  int total1 = (time1.hours * 3600) + (time1.minutes) + time1.seconds;
  if (time1.hours > time2.hours) {
    time2.hours += 24;
  }
  int total2 = (time2.hours * 3600) + (time2.minutes) + time2.seconds;
  int result = abs_value(total1 - total2);

  time_elapsed.hours = result / 3600;
  result /= 3600;
  time_elapsed.minutes = result / 60;
  result /= 60;
  time_elapsed.seconds = result;

  return time_elapsed;
}

int abs_value(int value) {
  if (value < 0) {
    value = -value;
  }

  return value;
}

int main(void) {
  printf("Starting time (hr:min:sec): ");
  struct time time1 = get_time();
  printf("Ending time (hr:min:sec): ");
  struct time time2 = get_time();

  struct time diff = elapsed_time(time1, time2);

  printf("The time elapsed between %i:%i:%i and %i:%i:%i is %i:%i:%i\n",
         time1.hours, time1.minutes, time1.seconds, time2.hours, time2.minutes,
         time2.seconds, diff.hours, diff.minutes, diff.seconds);

  return 0;
}
