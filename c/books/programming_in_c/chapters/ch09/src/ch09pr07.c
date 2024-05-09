/*
 * Write a function called insertString() to insert one character string into
 * another string. The arguments to the function should consist of the source
 * string, the string to be inserted, and the position in the source string
 * where the string is to be inserted. So, the call
 *
 *      insertString(text, "per", 10);
 *
 * with text as originally defined in the previous exercise, results in the
 * character string "per" being inserted inside text, beginning at text[10].
 * Therefore, the character string "the wrong person" is stored inside the
 * text array after the function is returned.
 */

#include <stdio.h>

void insert_string(char source[], char inject[], int index);

void insert_string(char source[], char inject[], int index) {
  int i, j, k;
  char temp_string[81];

  if (source[index] == '\0') {
    for (i = index, j = 0; inject[j] != '\0'; ++i, ++j) {
      source[i] = inject[j];
    }
    source[i] = '\0';
  } else {
    for (i = 0, j = 0; source[i] != '\0'; ++i, ++j) {
      if (j == index) {
        for (k = 0; inject[k] != '\0'; ++k) {
          temp_string[j + k] = inject[k];
        }
        j += k;
      }
      temp_string[j] = source[i];
    }
    temp_string[j] = '\0';

    for (i = 0; temp_string[i] != '\0'; ++i) {
      source[i] = temp_string[i];
    }
    source[i] = '\0';
  }
}

int main(void) {
  char text[81] = "the wrong son";

  insert_string(text, "per", 10);

  printf("%s\n", text);

  return 0;
}
