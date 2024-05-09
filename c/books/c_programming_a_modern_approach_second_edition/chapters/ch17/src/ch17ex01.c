/*
 * Prints a one-month reminder list (dynamic string version)
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 50
#define MAX_LEN_DAY_STR (2 + 1)
#define MAX_LEN_MSG_STR (77 + 1)

int read_line(char str[], int n);

int read_line(char str[], int n) {
  int c;
  int i = 0;

  while ((c = getchar()) != '\n') {
    if (i < n) {
      str[i] = (char)c;
      i += 1;
    }
  }
  str[i] = '\0';
  return i;
}

int main(void) {
  char *entries[MAX_ENTRIES];
  int reminders = 0;

  while (true) {
    char day_str[MAX_LEN_DAY_STR];
    char msg_str[MAX_LEN_MSG_STR];
    int i = 0;
    int day;

    if (reminders == MAX_ENTRIES) {
      printf("Maximum number of entries reached!\n");
      break;
    }

    printf("Enter day and reminder: ");
    scanf("%2d", &day);
    if (day == 0) {
      break;
    }
    sprintf(day_str, "%2d", day);
    read_line(msg_str, MAX_LEN_MSG_STR);

    for (i = 0; i < reminders; i += 1) {
      if (strcmp(day_str, entries[i]) < 0) {
        break;
      }
    }
    for (int j = reminders; j > i; j -= 1) {
      entries[j] = entries[j - 1];
    }

    entries[i] = malloc(2 + strlen(msg_str) + 1);
    if (entries[i] == NULL) {
      printf("Failed to allocate memory!\n");
      break;
    }

    strncpy(entries[i], day_str, strlen(day_str));
    strncat(entries[i], msg_str, strlen(msg_str));
    reminders += 1;
  }

  printf("Day Reminder\n");
  for (int i = 0; i < reminders; i += 1) {
    printf("%s\n", entries[i]);
  }

  for (int i = 0; i < reminders; i += 1) {
    free(entries[i]);
  }
  return 0;
}
