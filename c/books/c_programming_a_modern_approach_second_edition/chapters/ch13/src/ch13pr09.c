/*
 * Modify Programming Project 10 from chapter 7 so that it includes the
 * following function:
 *
 *      int compute_vowel_count(const char *sentence);
 *
 * The functions returns the number of vowels int he string pointed to be the
 * sentence parameter.
 *
 * ##### Spec:
 *
 * Write a program that counts the number of vowels (a, e, i, o, and u) in a
 * sentance:
 *
 *      Enter a sentence: And that's the way it is.
 *      Your sentence contains 6 vowels.
 */

#include <ctype.h>
#include <stdio.h>

#define MAX_LEN 81

int compute_vowel_count(const char *sentence);

int compute_vowel_count(const char *sentence) {
  int letter = 0;
  int vowels = 0;

  while (sentence[letter] != '\n') {
    switch (toupper(sentence[letter])) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      vowels += 1;
      break;
    }
    letter += 1;
  }
  return vowels;
}

int main(void) {
  char sentence[MAX_LEN];

  printf("Enter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);
  printf("That sentence contains %d vowels.\n", compute_vowel_count(sentence));

  return 0;
}
