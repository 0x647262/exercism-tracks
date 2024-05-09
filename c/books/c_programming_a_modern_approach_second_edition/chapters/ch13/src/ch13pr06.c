/*
 * Improve the planet.c progam of Section 13.7 by having it ignore case when
 * comparing command-line arguments with strings in the planets[] array.
 *
 * ##### Notes:
 *
 * I used the strcasecmp() from strings.h it functions (simply) like this:
 *
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define PLANETS 9

int strcasecmp(const char *str1, const char *str2);

int strcasecmp(const char *str1, const char *str2) {
  while (true) {
    int diff = tolower(*str1) - tolower(*str2);
    if (diff != 0 || !*str1 || !*str2) {
      return diff;
    }
    str1 += 1;
    str2 += 1;
  }
}

int main(int argc, char *argv[]) {
  char *planets[] = {"Mercury", "Venus",  "Earth",   "Mars", "Jupiter",
                     "Saturn",  "Uranus", "Neptune", "Pluto"};

  for (int i = 1; i < argc; i += 1) {
    int j;
    for (j = 0; j < PLANETS; j += 1) {
      if (strcasecmp(argv[i], planets[j]) == 0) {
        printf("%s is planet %d.\n", argv[i], j + 1);
        break;
      }
    }
    if (j == PLANETS) {
      printf("%s is not a planet.\n", argv[i]);
    }
  }
  return 0;
}
