// This program makes some GENEROUS assumptions.
// You've been warned.

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

// First assumption
#define MAX_INITIALS 3
// Okay... This one's not _THAT_ bad

void print_initials(string name);

void print_initials(string name) {
  int initials[MAX_INITIALS];

  int x = 0;
  // Second assumption
  initials[x] = name[0];
  x += 1;
  for (int i = 0; name[i] != '\0'; i += 1) {
    if (name[i] == ' ') {
      // Third assumption
      initials[x] = name[i + 1];
      x += 1;
      if (x == 3) {
        break;
      }
    }
  }
  initials[x] = '\0';

  for (int i = 0; initials[i] != '\0'; i += 1) {
    printf("%c", toupper(initials[i]));
  }
  printf("\n");
}

int main(void) {
  string full_name = GetString();
  print_initials(full_name);

  return 0;
}
