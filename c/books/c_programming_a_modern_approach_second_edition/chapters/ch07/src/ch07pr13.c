/*
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

int main(void) {
  int input;
  float chars = 0.0f;
  float words = 1.0f;

  printf("Enter a sentence: ");
  while ((input = getchar()) != '\n') {
    switch (input) {
    case ' ':
      words++;
      break;
    default:
      chars++;
      break;
    }
  }
  printf("Average characters per word: %.1f\n", chars / words);

  return 0;
}
