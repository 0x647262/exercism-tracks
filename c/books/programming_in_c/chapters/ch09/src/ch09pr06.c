/*
 * Write a function called removeString() to remove a specified number of
 * characters from a character string. The function should take three
 * arguments: The source string, the starting index number in the souce
 * string, and the number of characters to remove. So, if the character array
 * text contains the string "the wrong son", the call
 *
 *      removeString(text, 4, 6);
 *
 * has the effect of removing the characters "wrong" (the word "wrong" plus
 * the space that follows) from the array text. The resulting string inside
 * text is then "the son".
 */

#include <stdio.h>

void remove_string(char source[], int index, int length);

void remove_string(char source[], int index, int length) {
  int i = 0;
  int j = 0;

  for (i = index, j = index + length; source[j] != '\0'; ++i, ++j) {
    source[i] = source[j];
  }
  source[i] = '\0';
}

int main(void) {
  char test1[] = "This is a test derp";
  char test2[] = "This is another test";
  char test3[] = "blah. blah. This is a test";

  remove_string(test1, 15, 4);
  remove_string(test2, 9, 6);
  remove_string(test3, 0, 12);

  printf("%s\n", test1);
  printf("%s\n", test2);
  printf("%s\n", test3);

  return 0;
}
