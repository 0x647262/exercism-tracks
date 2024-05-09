/*
 * Smallest multiple
 *
 * Problem 5
 * Published on Friday, 30th November 2001, 06:00 pm; Difficulty rating: 5%
 *
 * 2520 is the smallest number that can be divided by each of the numbers from
 * 1 to 10 without any remainder.What is the smallest positive number that is
 * evenly divisible by all of the numbers from 1 to 20?
 */

#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int sm_mult = 20;
  // TODO: Find a starting value.
  int max = 20;
  // TODO: Is there a way to find a "highest" value?

  int found = false;
  while (found == false) {
    printf("%d\n", sm_mult);
    for (int i = 2; i <= max + 1; i += 1) {
      if (i == max + 1) {
        found = true;
      } else if (sm_mult % i == 0) {
        continue;
      } else {
        break;
      }
    }
    if (found == false) {
      // TODO: Find a better value to increment by?
      sm_mult += 20;
    }
  }
  printf("%d\n", sm_mult);

  return 0;
}
