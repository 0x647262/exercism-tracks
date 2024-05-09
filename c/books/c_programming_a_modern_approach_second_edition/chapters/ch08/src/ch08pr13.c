/*
 * Modify Programming Project 11 from Chapter 7 so that the program labels it's
 * output:
 *
 *      Enter a first and last name: Lloyd Fosdick
 *      You entered the name: Fosdick, L.
 *
 * The program will need to store the last name (but not the first name) in an
 * array of characters until it can be printed. You may assume that the last
 * name is no more than 20 characters long.
 *
 * ##### Spec:
 *
 * Write a program that takes a first name and last name entered by the user
 * and displays the last name, a comma, and the first initial, followed by a
 * period:
 *
 *      Enter a first and last name: Lloyd Fosdick
 *      Fosdick, L.
 *
 * The user's input may contain extra spaces before the first name, between the
 * first and last names, and after the last name. (up to [20 - name] chars)
 */

#include <stdio.h>

int main(void) {
  char ln[20];
  int fi;

  printf("Enter your first and last name: ");
  while ((fi = getchar()) == ' ') {
    if (fi != ' ') {
      break;
    }
  }
  while (getchar() != ' ') {
  }
  for (int i = 0; i <= 20; i += 1) {
    scanf("%c", &ln[i]);
    if (ln[i] == '\n') {
      break;
    }
  }

  printf("You entered the name: ");
  for (int i = 0; i <= 20; i += 1) {
    printf("%c", ln[i]);
    if (ln[i + 1] == '\n') {
      break;
    }
  }
  printf(", %c.\n", fi);

  return 0;
}
