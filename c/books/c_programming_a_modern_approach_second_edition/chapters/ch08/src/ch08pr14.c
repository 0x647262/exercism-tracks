/*
 * Write a program that reverses the words in a sentence:
 *
 *      Enter a sentence: You can cage a swallow can't you?
 *      Reversal of sentence: You can't swallow a cage can you?
 *
 * Hint: Use a loop to read the characters one by one, and store them in a
 * one-dimensional char array. Have the loop stop at a period, question mark,
 * or exclamation point (the terminating character) which is saved in a
 * seperate char variable.  Then use a second loop to search backward through
 * for the array for the beginning of the last word. Print the last word, then
 * search backward for the next-to-last word. Repeat until the beginning of the
 * array is reached. Finally, print the terminating character.
 *
 * ##### Notes:
 *
 *      This is example text.
 *                          ^ = end
 *      |------------------|  = i
 *      |--------------|      = j
 *
 */

#include <stdio.h>

int main(void) {
  int words[40];
  int i = 0;

  printf("Enter a sentence: ");
  while ((words[i] = getchar()) != '\n') {
    i += 1;
  }
  i -= 1;

  printf("Words reversed: ");
  while (i > 0) {
    while (words[i] != ' ' && words[i] != '\n') {
      i -= 1;
      if (words[i] == ' ') {
        i += 1;
        break;
      }
      if (i == 0) {
        break;
      }
    }
    while (words[i] != ' ' && words[i] != '\n') {
      printf("%c", words[i]);
      i += 1;
    }
    if (words[i] == '\n' || words[i] == ' ') {
      i -= 1;
      break;
    }
    while (words[i] != ' ' && words[i] != '\n') {
      i -= 1;
      if (i == 0) {
        break;
      }
    }
    while (words[i] == ' ') {
      printf(" ");
      i -= 1;
    }
  }
  printf("\n");
  printf("i = %d\n", i);

  return 0;
}
