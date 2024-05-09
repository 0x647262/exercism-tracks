/*
 * Create a program that will allow you to enter events organizable by hour.
 * There must be menu options of some form, and you must be able to easily
 * edit, add, and delete events without directly changing the source code.
 *
 * Note: that by menu i dont necessarily mean gui. as long as you can easily
 * access the different options and receive prompts and instructions telling
 * you how to use the program, it will probably be fine)
 */

#include <stdio.h>

#define MAX_STRLEN 80
#define MAX_EVENTS 24

typedef struct {
  char scheduled;
  int hr;
  char event[MAX_STRLEN];
} Event;

void add_event(Event events[MAX_EVENTS]);
void delete_event(Event events[MAX_EVENTS]);
void view_events(Event events[MAX_EVENTS]);

void add_event(Event events[MAX_EVENTS]) {
  printf("Enter the hour you would like to schedule: ");
  int i;
  scanf(" %d", &i);

  if (events[i].scheduled == 'y') {
    printf("Something is already scheduled for this hour!\n");
    printf("Please free this hour before rescheduling!\n");
    return;
  } else {
    events[i].scheduled = 'y';
    printf("Enter an event: ");
    scanf(" %s", events[i].event);
    printf("%s", events[i].event);
  }
}

void delete_event(Event events[MAX_EVENTS]) {
  printf("Please enter the hour you wish to free ");
  int i;
  scanf(" %d", &i);

  if (i >= 0 && i <= 23) {
    events[i].scheduled = 'n';
  } else {
    printf("Invalid entry! Returning to menu...");
  }
}

void view_events(Event events[MAX_EVENTS]) {
  for (int i = 0; i < MAX_EVENTS; i += 1) {
    if (events[i].scheduled == 'y') {
      printf("Hour: %02d\tEvent: %s\n", i, events->event);
    }
  }
}

int main(void) {
  Event events[MAX_EVENTS];

  printf(" --- Daily organizer ---\n");
  for (;;) {
    printf("Options:\n");
    printf("0 - View events\n");
    printf("1 - Add an event\n");
    printf("2 - Delete an event\n");
    printf("3 - Quit\n");
    printf("Enter an option: ");
    char c;
    scanf(" %c", &c);
    switch (c) {
    case '0':
      view_events(events);
      break;
    case '1':
      add_event(events);
      break;
    case '2':
      delete_event(events);
      break;
    case '3':
      printf("Exiting...\n");
      return 0;
    default:
      printf("Unknown option!\n");
    }
  }
}
