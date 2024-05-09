/*
 * Write a program that finds the "smallest" and "largest" in a series of
 * words. After the user enters the words, the program will determine which
 * words would come first and last if the words were listed in dictionary
 * order. The program must stop accepting input when the user enters a
 * four-letter word. Assume that no word is more than 20 letters long. An
 * interactive session with the program may look like this:
 *
 *      Enter word: dog
 *      Enter word: zebra
 *      Enter word: rabbit
 *      Enter word: catfish
 *      Enter word: walrus
 *      Enter word: cat
 *      Enter word: fish
 *
 *      Smallest word: cat
 *      Largest word: zebra
 *
 * Hint: Use two strings named smallest_word and largest_word to keep tracj of
 * the "smallest" and "largest" words entered so far. Each time a user enters a
 * new word, use strcmp() to compare it with smallest_word; if the new word is
 * "smaller", use strcpy to save it in smallest_word. Do a similar comparision
 * with largest_word. Use strlen() to determine when the user has entered a 4
 * letter word.
 */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define LEN 81

void read_input(char *str);
void sort(char str[], char *smallest, char *largest);

void read_input(char str[]) {
  int i = 0;
  int ch;

  printf("Enter word: ");
  while ((ch = getchar()) != '\n') {
    if (i < LEN) {
      str[i] = (char)ch;
      i += 1;
    }
  }
  str[i] = '\0';
}

void sort(char *str, char *smallest, char *largest) {
  if ((strcmp(str, smallest)) < 0) {
    strcpy(smallest, str);
  } else if ((strcmp(str, largest)) > 0) {
    strcpy(largest, str);
  } else {
    return;
  }
}

int main(void) {
  char smallest[LEN];
  char largest[LEN];
  char str[LEN];

  while (true) {
    read_input(str);
    if (strlen(str) == 4) {
      break;
    }
    sort(str, smallest, largest);
  }

  printf("\n");
  printf("Smallest word: %s\n", smallest);
  printf("Largest word: %s\n", largest);

  return 0;
}
