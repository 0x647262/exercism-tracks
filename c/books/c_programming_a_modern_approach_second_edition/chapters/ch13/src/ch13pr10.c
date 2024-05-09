/*
 * Modify Programming Project 11 from Chapter 7 so that it includes the
 * following function:
 *
 *      void reverse_name(const char *name);
 *
 * The functions expects name to point to a string containing a first name
 * followed by a last name. It modifies the string so that the last name comes
 * first, followed by a comma, a space, the first initial, and a period. The
 * original string may contain extra spaces before the first name, between the
 * first and last names, and after the last name.
 *
 * ##### Spec:
 *
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

#define NAME_LEN 80

void reverse_name(const char *name);

void reverse_name(const char *name) {
  int i = 0;
  char fi;

  while (name[i] == ' ') {
    i += 1;
  }
  fi = name[i];
  while (name[i] != ' ') {
    i += 1;
  }
  while (name[i] == ' ') {
    i += 1;
  }
  while (name[i] != '\n' && name[i] != ' ') {
    printf("%c", name[i]);
    i += 1;
  }
  printf(", %c.\n", fi);
}

int main(void) {
  char name[NAME_LEN];

  printf("Enter your first and last name: ");
  fgets(name, sizeof(name), stdin);

  reverse_name(name);

  return 0;
}
