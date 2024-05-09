/*
 * Modify Programming Project 16 from Chapter 8 so that it includes the
 * following functions:
 *
 *      void read_word(int counts[26]);
 *      void equal_array(int counts[26], int counts2[26]);
 *
 * main() will call read_word() twice, once for each of the two words entered
 * by the user. As it reads a word, read_word() will use the letters in the
 * word to update the counts[] array, as described in the original project.
 * (main() will declare two arrays, one for each word. These arrays are used to
 * track how many times each letter occurs in the words.) main() will then call
 * equal_array(), passing it the two arrays. equal_array() will return true if
 * the elements in the two arrays are identical (indicating that the words are
 * anagrams) and false otherwise.
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

void read_word(int[]);
bool compare_words(int[], int[]);

void read_word(int word[]) {
  int letter;
  printf("Enter a word: ");
  while ((letter = getchar()) != '\n') {
    if (isalpha(letter)) {
      letter = toupper(letter);
      word[letter - 65] += 1;
    } else {
      continue;
    }
  }
}

bool compare_words(int w1[], int w2[]) {
  int i = 0;
  while (i < 26) {
    if (w1[i] != w2[i]) {
      return false;
    }
    i += 1;
  }
  return true;
}

int main(void) {
  int w1[26] = {0};
  int w2[26] = {0};

  read_word(w1);
  read_word(w2);
  if (compare_words(w1, w2)) {
    printf("The words are anagrams\n");
  } else {
    printf("The words are not anagrams\n");
  }

  return 0;
}
