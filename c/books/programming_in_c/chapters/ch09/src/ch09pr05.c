/*
 * Write a function called findstring() to determine if on character string
 * exists inside another string. The first argument to the function should be
 * the character string that is to be searched and the second argument is the
 * string you are interested in finding. If the function finds the specified
 * string, have it return the location in the source string where the string
 * was found. If the function does not find the string, have it return -1. So,
 * for example, the call
 *
 *      index = findString( "a chatterbox",  "hat");
 *
 * searches the string "a chatterbox" for the string "hat" . Because "hat"
 * does exist inside the source string, the function returns 3 to indicate
 * the starting position inside source string where "hat" was found
 */

#include <stdio.h>

int find_string(char source[], char find[]);

int find_string(char source[], char find[]) {
  int i;
  int j = 0;
  int index = 0;

  for (i = 0; source[i] != '\0'; ++i) {
    while (source[i] == find[j]) {
      ++i;
      ++j;
      if (find[j] == '\0') {
        index = i - j;
      } else {
        return -1;
      }
    }
  }
  return index;
}

int main(void) {
  int found;

  found = find_string("a chatterbox", "hat");
  printf("%i\n", found);

  found = find_string("This hat should confuse it. ha!", "hat");
  printf("%i\n", found);

  found = find_string("The mad hatter", "hat");
  printf("%i\n", found);

  return 0;
}
