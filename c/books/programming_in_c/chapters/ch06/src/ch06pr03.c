/*
 * Program 6.2 permits only 20 responses to be entered. Modify that program so
 * that any number of can be entered. So that the user does not have to count
 * the number of responses in the list, set up the program so that the value
 * 999 can be keyed in by the user to indicate that the last response has been
 * entered. (Hint: You can use the break statement here if you want to exit
 * your loop.)
 */

#include <stdio.h>

int main(void) {
  int i, response;
  int rating_counters[11];

  for (i = 1; i <= 10; ++i) {
    rating_counters[i] = 0;
  }

  printf("Enter your responses\n");
  while (1) {
    scanf("%i", &response);
    if (response < 1 || response > 10) {
      if (response == 999) {
        break;
      } else {
        printf("Bad response %i\n", response);
      }
    } else {
      ++rating_counters[response];
    }
  }
  printf("\n\nRating   Number of Responses\n");
  printf("------   -------------------\n");
  for (i = 1; i <= 10; ++i) {
    printf("%4i%14i\n", i, rating_counters[i]);
  }

  return 0;
}
