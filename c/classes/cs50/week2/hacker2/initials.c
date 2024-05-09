// Here's where I get to fix two assumptions... Lazy coding does NOT pay off :(

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
  int i = 0;
  while (name[i] == ' ') {
    i += 1;
  }
  initials[x] = name[i];
  x += 1;

  while (name[i] != '\0') {
    i += 1;
    if (name[i] == ' ') {
      while (name[i] == ' ') {
        i += 1;
      }
      initials[x] = name[i];
      x += 1;
      if (x == 3) {
        break;
      }
    }
  }
  initials[x] = '\0';

  for (i = 0; initials[i] != '\0'; i += 1) {
    printf("%c", toupper(initials[i]));
  }
  printf("\n");
}

int main(void) {
  string full_name = GetString();
  print_initials(full_name);

  return 0;
}
