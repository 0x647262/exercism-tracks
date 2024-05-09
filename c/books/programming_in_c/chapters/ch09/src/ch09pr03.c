/*
 * The countWords() function from Programs 9.7 and 9.8 incorrectly counts a
 * word that contains an apostrophe as two seperate words. Modify this
 * function to correcly handle this situation. Also extend the function to
 * count a sequence of positive or negative numbers, including any embedded
 * commas and periods as a single word.
 */

#include <stdio.h>

int alphabetic(const char c);
int numeric(const char c);
void read_line(char buffer[]);
int count_words(const char string[]);

int alphabetic(const char c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    return 1;
  } else {
    return 0;
  }
}

int numeric(const char c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}

void read_line(char buffer[]) {
  int character;
  int i = 0;

  do {
    character = getchar();
    buffer[i] = (char)character;
    ++i;
  } while (character != '\n');
  buffer[i - 1] = '\0';
}

int count_words(const char string[]) {
  int i;
  int word_count = 0;
  int looking_for_word = 1;

  for (i = 0; string[i] != '\0'; ++i) {
    if (alphabetic(string[i]) || string[i] == '\'') {
      if (looking_for_word == 1) {
        ++word_count;
        looking_for_word = 0;
      }
    } else if (numeric(string[i]) || string[i] == ',' || string[i] == '.') {
      if (looking_for_word == 1) {
        ++word_count;
        looking_for_word = 0;
      }
    } else {
      looking_for_word = 1;
    }
  }
  return word_count;
}

int main(void) {
  char text[81];
  int total_words = 0;
  int end_of_text = 0;

  printf("Enter a short sentence:\n\n");
  while (end_of_text == 0) {
    read_line(text);
    if (text[0] == '\0') {
      end_of_text = 1;
    } else {
      total_words += count_words(text);
    }
  }

  printf("\nThere were %i words in the text above.\n", total_words);

  return 0;
}
