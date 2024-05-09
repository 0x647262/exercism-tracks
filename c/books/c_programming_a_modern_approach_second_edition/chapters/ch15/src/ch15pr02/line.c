#include "line.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_LINE_LEN 60
#define MORE_SPACES_LEFT true
#define MORE_SPACES_RIGHT false

static char line[MAX_LINE_LEN + 1];
static int line_len = 0;
static int num_words = 0;
/* Prefer more spaces on the left for our first line */
static bool space_preference = MORE_SPACES_RIGHT;

void clear_line(void) {
  line[0] = '\0';
  line_len = 0;
  num_words = 0;
}

void add_word(const char *word) {
  if (num_words > 0) {
    line[line_len] = ' ';
    line[line_len + 1] = '\0';
    line_len += 1;
  }
  strcat(line, word);
  line_len += strlen(word);
  num_words += 1;
}

int space_remaining(void) { return MAX_LINE_LEN - line_len; }

void write_line(void) {
  int extra_spaces = space_remaining();

  for (int i = 0; i < line_len; i += 1) {
    if (line[i] != ' ') {
      putchar(line[i]);
    } else {
      int spaces_to_insert = extra_spaces / (num_words - 1);
      /* Switch our left/right space preference on each iteration */
      space_preference = !space_preference;
      if (space_preference == MORE_SPACES_LEFT && extra_spaces > 0) {
        spaces_to_insert += 1;
      }
      for (int j = 1; j <= spaces_to_insert + 1; j += 1) {
        putchar(' ');
      }
      extra_spaces -= spaces_to_insert;
      num_words -= 1;
    }
  }
  putchar('\n');
}

void flush_line(void) {
  if (line_len > 0) {
    puts(line);
  }
}
