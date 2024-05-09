/*
 * Write a program that takes a first name and last name entered by the user
 * and displays the last name, a comma, and the first initial, followed by a
 * perdiod:
 *
 *      Enter a first and last name: Lloyd Fosdick
 *      Fosdick, L.
 *
 * The user's input may contain extra spaces before the first name, between the
 * first and last names, and after the last name.
 */

#include <stdio.h>

int main(void) {
  int ln;
  int fi;

  printf("Enter your first and last name: ");
  while ((fi = getchar()) == ' ') {
    if (fi != ' ') {
      break;
    }
  }
  while (getchar() != ' ') {
  }
  while ((ln = getchar()) != '\n') {
    if (ln != ' ') {
      printf("%c", ln);
    }
  }
  printf(", %c.\n", fi);

  return 0;
}
