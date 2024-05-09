/*
 * Modify Programming Project 14 from Chapter 8 so that it stores the words in
 * a two-dimensional char array as it reads the sentence. With each row of the
 * aeeay storing a single word. Assume that the sentence contains no more than
 * 30 words, and no word is more than 20 characters long. Be sure to store a
 * null character at the end of each word so that it can be treated as a
 * string.
 *
 * ##### Spec:
 *
 * Write a program that reverses the words in a sentence:
 *
 *      Enter a sentence: You can cage a swallow can't you?
 *      Reversal of sentence: You can't swallow a cage can you?
 */

#include <stdio.h>

#define MAX_WORDS 30
#define MAX_STRLN 20

int get_word(char *word);

int get_word(char *word) {
  int i = 0;

  while ((word[i] = (char)getchar()) != ' ') {
    if (word[i] == '\n') {
      word[i] = '\0';
      return 1;
    }
    i += 1;
  }
  word[i] = '\0';

  return 0;
}

int main(void) {
  int i = 0;
  char words[MAX_WORDS][MAX_STRLN];

  printf("Enter a sentence: ");
  while (get_word(words[i]) == 0) {
    i += 1;
  }

  while (i >= 0) {
    printf("%s ", words[i]);
    i -= 1;
  }
  printf("\n");

  return 0;
}
