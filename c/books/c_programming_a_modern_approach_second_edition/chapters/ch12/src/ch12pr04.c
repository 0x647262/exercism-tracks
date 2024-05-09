/*
 * Simplify Programming Project 2 by taking advantage of the fact that an array
 * name can be used as a pointer.
 *
 * ##### Spec:
 *
 * Write a program that reads a message, then checks whether it's a palindrome
 * (the letters in the message are the same from left to right as from right to
 * left):
 *
 *      Enter a message: He lived as a devil, eh?
 *      Palindrome
 *
 *      Enter a message: Madam, I am Adam
 *      Not a palindrome
 *
 * Ignore all characters that aren't letters. Use integer variables to keep
 * track of positions in the array.
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define LENGTH 81

void read_input(int *array, int *nchars);
bool palindrome_check(const int *array, int *nchars);

void read_input(int *array, int *nchars) {
  while ((array[*nchars] = getchar()) != '\n') {
    if ((array[*nchars] < 'A' || array[*nchars] > 'Z') &&
        (array[*nchars] < 'a' || array[*nchars] > 'z')) {
      continue;
    }
    *nchars += 1;
    if (*nchars == LENGTH) {
      break;
    }
  }
  /* Since '\n' is the last recorded character */
  *nchars -= 1;
}

bool palindrome_check(const int *array, int *nchars) {
  int halfway;

  if (*nchars % 2 != 0) {
    halfway = (*nchars + 1) / 2;
  } else {
    halfway = *nchars / 2;
  }

  int i = 0;
  while (i <= halfway) {
    if (tolower(*(array + i)) == tolower(*(array + (*nchars - i)))) {
      i += 1;
      continue;
    } else {
      return false;
    }
  }
  return true;
}

int main(void) {
  int text[LENGTH] = {0};
  int num_chars = 0;
  int *len = &num_chars;

  read_input(text, len);
  if (palindrome_check(text, len) == true) {
    printf("Palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }

  return 0;
}
