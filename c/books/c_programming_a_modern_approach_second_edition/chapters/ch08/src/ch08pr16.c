/*
 * Write a program that tests whether two words are anagrams (permutations of
 * the samw letters):
 *
 *      Enter the first word: smartest
 *      Enter the second word: mattress
 *      The words are anagrams.
 *
 *      Enter the first word: dumbest
 *      Enter the second word: stumble
 *      The words are not anagrams.
 *
 * Write a loop that reads the first word, character by character, using an
 * array of 26 integers to keep track of how many times each letter has been
 * seen. (For example, after the word smartest has been read, the array should
 * contain the values:
 *
 *      1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 3 0 0 0 0 0 0
 *
 * Reflecting the fact that smartest contains:
 *
 *      1 - a
 *      1 - e
 *      1 - m
 *      1 - r
 *      2 - s
 *      2 - t
 *
 * Use another loop to read the second word, except this time decrementing the
 * corresponding array element as each letter is read. Both loops should ignore
 * any characters that aren't letters, and both should treat upper-case letters
 * in the same way as lower-case letters. After the second word has been read,
 * use a third loop to check whether or not all the elements are equal to 0. If
 * so, the words are anagrams.
 *
 * Hint: You may wish to use functions from <ctype.h>, such as isalpha() and
 * tolower().
 */

#include <ctype.h>
#include <stdio.h>

int main(void) {
  int alphabet[26] = {0};
  int letter;
  int i;

  printf("Enter the first word: ");
  while ((letter = getchar()) != '\n') {
    if (isalpha(letter)) {
      letter = toupper(letter);
      alphabet[letter - 65] += 1;
    } else {
      continue;
    }
  }

  printf("Enter the second word: ");
  while ((letter = getchar()) != '\n') {
    if (isalpha(letter)) {
      letter = toupper(letter);
      alphabet[letter - 65] -= 1;
    } else {
      continue;
    }
  }

  i = 0;
  while (i < 26) {
    if (alphabet[i] != 0) {
      printf("The words are not anagrams\n");
      break;
    }
    if (i == 25 && alphabet[i] == 0) {
      printf("The words are anagrams\n");
    }
    i += 1;
  }
  return 0;
}
