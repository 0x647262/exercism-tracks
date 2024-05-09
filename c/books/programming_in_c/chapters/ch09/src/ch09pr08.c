/*
 * Using the findString(), removeString, and insertString() functions from
 * preceding exercises, write a function called replaceString() that takes
 * three character string arguments as follows
 *
 *      replaceString(source, s1, s2)
 *
 * and that replaces s1 inside source with the character string s2. The
 * function should call the findString() function to locate s1 inside source,
 * then call the removeString() function to remove s1 from source, and finally
 * call the insertString() function to insert s2 into the source at the proper
 * location.
 *
 * So the function call
 *
 *      replaceString(text, "1", "one");
 *
 * replaces the first occurance of the character string "1" inside the
 * character string text, if it exists, with the string "one". Similarly, the
 * function call
 *
 *      replaceString(text, "*", "");
 *
 * has the effect of removing the first asterisk inside the text array because
 * the replacement string is the null string.
 */

#include <stdio.h>

int find_string(char source[], char find[]);
void insert_string(char source[], char inject[], int index);
void remove_string(char source[], int index, int length);
int replace_string(char source[], char find[], char replace[]);

int find_string(char source[], char find[]) {
  int i, j, k;

  for (i = 0; source[i] != '\0'; ++i) {
    j = 0;
    if (source[i] == find[j]) {
      for (k = i; source[k] == find[j]; ++j, ++k) {
        if (source[k] == find[j] && find[j + 1] == '\0') {
          return i;
        }
      }
    }
  }
  return -1;
}

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

void remove_string(char source[], int index, int length) {
  int i = 0;
  int j = 0;

  for (i = index, j = index + length; source[j] != '\0'; ++i, ++j) {
    source[i] = source[j];
  }
  source[i] = '\0';
}

int replace_string(char source[], char find[], char replace[]) {
  int found;
  int f_length;

  for (f_length = 0; find[f_length] != '\0'; ++f_length) {
  }

  found = find_string(source, find);
  if (found != -1) {
    remove_string(source, found, f_length);
    insert_string(source, replace, found);
  }
  return found;
}

int main(void) {
  char text[81] = "This is a test!!!1!";

  replace_string(text, "1", "");
  printf("%s\n", text);

  return 0;
}
