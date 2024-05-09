/*
 * Create a program that will ask the users name, age, and reddit username.
 * Have it tell them the information back, in the format:
 *
 *      Your name is ___, you are ___ years old, and your username is ___.
 *
 * For extra credit, have the program log this information in a file to be
 * accessed later.
 */

#include <stdio.h>
#include <string.h>

#define NAME_MAX 80

void truncate_newline(char *buffer);

void truncate_newline(char *buffer) {
  size_t len = strlen(buffer);
  if (len > 0 && buffer[len - 1] == '\n') {
    buffer[len - 1] = '\0';
  }
}

int main(void) {
  FILE *file;
  file = fopen("name.txt", "w+");

  printf("Please enter your name: ");
  char name[NAME_MAX];
  fgets(name, NAME_MAX, stdin);
  truncate_newline(name);

  printf("Please enter your age: ");
  char age[NAME_MAX];
  fgets(age, NAME_MAX, stdin);
  truncate_newline(age);

  printf("Please enter your username: ");
  char username[NAME_MAX];
  fgets(username, NAME_MAX, stdin);
  truncate_newline(username);

  fprintf(file,
          "Your name is %s, you are %s years old, and your username is %s.\n",
          name, age, username);

  rewind(file);
  for (;;) {
    int c = fgetc(file);
    if (feof(file)) {
      break;
    }
    printf("%c", c);
  }
  fclose(file);

  return 0;
}
