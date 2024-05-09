/*
 * Write a program that counts the number of vowels (a, e, i, o, and u) in a
 * sentance:
 *
 *      Enter a sentence: And that's the way it is.
 *      Your sentence contains 6 vowels.
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int count = 0;
  int vowel;

  printf("Enter a sentence: ");
  while ((vowel = getchar()) != '\n') {
    switch (toupper(vowel)) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      count++;
      break;
    }
  }
  printf("That sentence contains %d vowels.\n", count);

  return 0;
}
