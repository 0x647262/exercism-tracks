/*
 * You can extend even further the usefulness of the replaceString() function
 * from the preceding exercise if you have it return a value that indicates
 * whether the replacement succeeded, which means that the string to be
 * replaced was found inside the source string. So, if the function returns
 * true if the replacement succeeds and false if it does not, the loop
 *
 *      do
 *              stillFound = replaceString (text, " ", "");
 *      while (stillFound);
 *
 * could be used to remove all blank spaces from text, for example.
 *
 * Incorperate this change into the replaceString() function and try it with
 * various character strings to ensure it works properly.
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
  int loop;
  char text1[81] = "derp de derp de derp de derp";
  char text2[81] = "abcabcabcabc";
  char text3[81] = "123";

  printf("%s\n", text1);
  do {
    loop = find_string(text1, "derp");
    replace_string(text1, "derp", "herp");
  } while (loop != -1);
  printf("%s\n", text1);

  printf("%s\n", text2);
  do {
    loop = find_string(text2, "abc");
    replace_string(text2, "abc", "def");
  } while (loop != -1);
  printf("%s\n", text2);

  printf("%s\n", text3);
  do {
    loop = find_string(text3, "123");
    replace_string(text3, "123", "456");
  } while (loop != -1);
  printf("%s\n", text3);

  return 0;
}
