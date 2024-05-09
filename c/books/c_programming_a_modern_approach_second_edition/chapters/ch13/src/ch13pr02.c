/*
 * Improve the remind.c progam of section 13.5 in the following ways:
 *
 *      a. Have the progam print an error messgae and ignore a reminder if the
 *      corresponding day is negative or larger than 31.
 *
 *      b. Allow the user to enter a day, a 24-hour time, and a reminder. The
 *      printed reminder list should be sorted first by day, then by time. (The
 *      original program allows the user to enter a time, but it's treated as
 *      part of the reminder)
 *
 *      c. Have the program print a one-year reminder list. Require the user to
 *      enter days in the form month/day
 *
 * ##### Checklist:
 *
 *      [Y] a - Print errors for invalid day values.
 *      [Y] b - Allow 24-hour time.
 *      [Y] b - Sort the reminder list (day, then time).
 *      [Y] c - Allow a full year of reminders.
 *      [Y] c - Require months + days in the format: mm/dd.
 *      [Y] ? - Make sure things don't break along the way.
 *
 * ##### Notes:
 *
 * Jumped to a 2-string method. This allows us to revise (edit) either part of
 * the reminder (date / message) and spit it back out with ease. If needed, we
 * can strcat() them together at the expense of a bit more memory.
 *
 * This also means we must be vigilant when sorting the messages. It would be
 * easy to simply sort the dates, and leave the messages out-of-order.
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_REMINDERS 365
#define MSG_LEN 69
#define DATE_LEN 12

int read_line(char str[], int max);
void get_reminders(char date[MAX_REMINDERS][DATE_LEN],
                   char message[MAX_REMINDERS][MSG_LEN], int *reminder);
void swap(char dest_str[], char src_str[]);
void sort_reminders(char date[MAX_REMINDERS][DATE_LEN],
                    char message[MAX_REMINDERS][MSG_LEN], int *reminders);
void print_reminders(char date[MAX_REMINDERS][DATE_LEN],
                     char message[MAX_REMINDERS][MSG_LEN], int *reminders);

int read_line(char str[], int max) {
  int ch = 0;
  int len = 0;

  while ((ch = getchar()) != '\n') {
    if (len < max) {
      str[len] = (char)ch;
      len += 1;
    }
  }
  str[len] = '\0';

  return len;
}

void get_reminders(char date[MAX_REMINDERS][DATE_LEN],
                   char message[MAX_REMINDERS][MSG_LEN], int *reminder) {
  int month = 0;
  int day = 0;
  int hour = 0;
  int minute = 0;

  for (*reminder = 0; *reminder < MAX_REMINDERS; *reminder += 1) {
    if (*reminder == MAX_REMINDERS) {
      printf("--- No space left ---\n");
      break;
    }
    printf("Enter a date (mm/dd hh:mm), and a reminder: ");
    scanf("%2d/%2d %2d:%2d", &month, &day, &hour, &minute);
    if (month == 0) {
      break;
    }
    if (day < 0 || day > 31) {
      printf("Invalid date!\n");
      continue;
    }
    sprintf(date[*reminder], "%02d/%02d %02d:%02d", month, day, hour, minute);
    read_line(message[*reminder], MSG_LEN);
  }
}

void swap(char dest_str[], char src_str[]) {
  char temp[DATE_LEN + MSG_LEN];

  strcpy(temp, dest_str);
  strcpy(dest_str, src_str);
  strcpy(src_str, temp);
}

/* Bubble sort... Shoot me. */
void sort_reminders(char date[MAX_REMINDERS][DATE_LEN],
                    char message[MAX_REMINDERS][MSG_LEN], int *reminders) {
  for (int i = 0; i < *reminders; i += 1) {
    for (int j = i; j < *reminders; j += 1) {
      if (strcmp(date[i], date[j]) > 0) {
        swap(date[i], date[j]);
        swap(message[i], message[j]);
      }
    }
  }
}

void print_reminders(char date[MAX_REMINDERS][DATE_LEN],
                     char message[MAX_REMINDERS][MSG_LEN], int *reminders) {
  printf("\n-+- Date\t  Reminder\n");
  for (int i = 0; i < *reminders; i += 1) {
    printf("-!- %s -%s\n", date[i], message[i]);
  }
}

int main(void) {
  char date_str[MAX_REMINDERS][DATE_LEN];
  char msg_str[MAX_REMINDERS][MSG_LEN];
  int reminders = 0;

  get_reminders(date_str, msg_str, &reminders);
  sort_reminders(date_str, msg_str, &reminders);
  print_reminders(date_str, msg_str, &reminders);

  return 0;
}
