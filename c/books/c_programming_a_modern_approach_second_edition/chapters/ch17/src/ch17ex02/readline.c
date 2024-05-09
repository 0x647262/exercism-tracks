#include <ctype.h>
#include <stdio.h>

#include "readline.h"

int read_line(char str[], int n) {
  int ch;
  int i = 0;

  while (isspace(ch = getchar())) {
    ;
  }
  while (ch != '\n' && ch != EOF) {
    str[i] = ch;
    i += 1;
    ch = getchar();
  }
  str[i] = '\0';

  return i;
}
