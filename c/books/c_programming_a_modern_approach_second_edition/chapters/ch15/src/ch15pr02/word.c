#include "word.h"
#include <stdio.h>

#define MAX_WORD_LEN 20

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

  if (pos >= 20 && word[MAX_WORD_LEN] != '\0') {
    word[MAX_WORD_LEN] = '*';
    word[MAX_WORD_LEN + 1] = '\0';
  }
  return pos;
}
