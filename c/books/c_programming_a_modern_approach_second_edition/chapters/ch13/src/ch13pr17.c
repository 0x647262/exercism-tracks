/*
 * Modify Programming Project 2 from Chapter 12 so that it includes the
 * following function:
 *
 *      bool is_palindrome(const char *message);
 *
 * The function returns true if the string pointed to by message is a
 * palindrome.
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

#define LEN 81

void read_input(char *message);
bool is_palindrome(const char *message);

void read_input(char *message) {
  int i = 0;

  while ((message[i] = (char)getchar()) != '\n') {
    if ((message[i] < 'A' || message[i] > 'Z') &&
        (message[i] < 'a' || message[i] > 'z')) {
      continue;
    }
    i += 1;
    if (i == LEN) {
      break;
    }
  }
}

bool is_palindrome(const char *message) {
  int i = 0;
  int j = 0;
  int halfway;

  while (message[j + 1] != '\n') {
    j += 1;
  }

  if (j % 2 != 0) {
    halfway = (j + 1) / 2;
  } else {
    halfway = j / 2;
  }

  while (i <= halfway) {
    if (tolower(message[i]) == tolower(message[j])) {
      i += 1;
      j -= 1;
    } else {
      return false;
    }
  }
  return true;
}

int main(void) {
  char text[LEN] = {0};

  printf("Enter a message: ");
  read_input(text);
  if (is_palindrome(text) == true) {
    printf("Palindrome\n");
  } else {
    printf("Not a palindrome\n");
  }
  return 0;
}
