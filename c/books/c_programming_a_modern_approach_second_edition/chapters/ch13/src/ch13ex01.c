/*
 * ##### remind.c
 * Prints a one-month reminder list.
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_REMINDERS 50
#define MSG_LENGTH 81

int read_line(char str[], int n);

int read_line(char str[], int n) {
  int ch = 0;
  int len = 0;

  while ((ch = getchar()) != '\n') {
    if (len < n) {
      str[len] = (char)ch;
      len += 1;
    }
  }
  str[len] = '\0';

  return len;
}

int main(void) {
  char reminder[MAX_REMINDERS][MSG_LENGTH];
  char day_string[3];
  char msg_string[MSG_LENGTH];
  int day = 0;
  int reminders = 0;
  int i = 0;

  while (true) {
    if (reminders == MAX_REMINDERS) {
      printf("--- No space left ---\n");
      break;
    }

    printf("Enter a day, and a reminder: ");
    scanf("%2d", &day);
    if (day == 0) {
      break;
    }
    sprintf(day_string, "%2d", day);
    read_line(msg_string, MSG_LENGTH);

    for (i = 0; i < reminders; i += 1) {
      if (strcmp(day_string, reminder[i]) < 0) {
        break;
      }
    }
    for (int j = reminders; j > i; j -= 1) {
      strcpy(reminder[j], reminder[j - 1]);
    }
    strcpy(reminder[i], day_string);
    strcat(reminder[i], msg_string);

    reminders += 1;
  }

  printf("\nDay Reminder\n");
  for (i = 0; i < reminders; i += 1) {
    printf(" %s\n", reminder[i]);
  }

  return 0;
}
