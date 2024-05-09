#include "readline.h"

int read_line(char str[], int n) {
  int ch = 0;
  int len = 0;

  while ((ch = getchar()) != '\n') {
    if (len < n) {
      str[len] = (char)ch;
      len += 1;
    }
  }
  str[len] = '\0';

  return len;
}
