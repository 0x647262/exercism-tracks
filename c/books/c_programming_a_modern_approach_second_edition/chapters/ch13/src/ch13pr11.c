/*
 * Modify Programming Project 13 from Chapter 7 so that it includes the
 * following function:
 *
 *      double compute_average_word_length(const char *sentence);
 *
 * ##### Spec:
 *
 * Write a program that calculates the average word length for a sentence:
 *
 *      Enter a sentence: It was deja vu all over again.
 *      Average word length: 3.4
 *
 * For simplicity, your program should consider a punctuation mark to be part
 * of the word to which it is attached. Display the average word length to one
 * decimal place.
 */

#include <ctype.h>
#include <stdio.h>

#define SENTENCE_LEN 80

double compute_average_word_length(const char *sentence);

double compute_average_word_length(const char *sentence) {
  int i = 0;
  int chars = 0.0f;
  int words = 0.0f;

  while (sentence[i] != '\n') {
    switch (sentence[i]) {
    case ' ':
      words += 1;
      break;
    default:
      chars += 1;
      break;
    }
    i += 1;
  }
  return (chars / words);
}

int main(void) {
  char sentence[SENTENCE_LEN];

  printf("Enter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);
  printf("Average characters per word: %.1f\n",
         compute_average_word_length(sentence));

  return 0;
}
