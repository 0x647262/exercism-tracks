/*
 * ##### planet.c
 * Checks planet names
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define PLANETS 9

int main(int argc, char *argv[]) {
  char *planets[] = {"Mercury", "Venus",  "Earth",   "Mars", "Jupiter",
                     "Saturn",  "Uranus", "Neptune", "Pluto"};

  for (int i = 1; i < argc; i += 1) {
    int j;
    for (j = 0; j < PLANETS; j += 1) {
      if (strcmp(argv[i], planets[j]) == 0) {
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
