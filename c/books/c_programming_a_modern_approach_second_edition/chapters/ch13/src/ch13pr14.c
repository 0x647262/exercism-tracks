/*
 * Modify Programming Project 15 from Chapter 8 so that it includes the
 * following function:
 *
 *      bool are_anagrams(const char *word1, const char *word2);
 *
 * ##### Spec:
 *
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
#include <stdbool.h>
#include <stdio.h>

#define WORD_LEN 80

bool are_anagrams(const char *word1, const char *word2);

bool are_anagrams(const char *word1, const char *word2) {
  int i = 0;
  int j = 0;

  while (word2[j + 1] != '\n') {
    j += 1;
  }

  while (tolower(word1[i]) == tolower(word2[j])) {
    j -= 1;
    i += 1;
    if (j == 0) {
      break;
    }
  }

  if (j == 0) {
    return true;
  } else {
    return false;
  }
}

int main(void) {
  char word1[WORD_LEN];
  char word2[WORD_LEN];

  printf("Enter the first word: ");
  fgets(word1, sizeof(word1), stdin);

  printf("Enter the second word: ");
  fgets(word2, sizeof(word2), stdin);

  if (are_anagrams(word1, word2)) {
    printf("Anagrams!\n");
  } else {
    printf("Not Anagrams!\n");
  }

  return 0;
}
