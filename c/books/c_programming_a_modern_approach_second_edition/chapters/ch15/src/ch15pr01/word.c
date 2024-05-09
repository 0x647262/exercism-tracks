#include "word.h"
#include <stdio.h>

int read_char(void);

int read_char(void) {
  int ch = getchar();

  return (ch == '\n' || ch == '\t') ? ' ' : ch;
}

int read_word(char *word, int len) {
  int ch;
  while ((ch = read_char()) == ' ') {
    continue;
  }

  int pos = 0;
  while (ch != ' ' && ch != EOF) {
    if (pos < len) {
      word[pos] = ch;
      pos += 1;
    }
    ch = read_char();
  }
  word[pos] = '\0';
  return pos;
}
