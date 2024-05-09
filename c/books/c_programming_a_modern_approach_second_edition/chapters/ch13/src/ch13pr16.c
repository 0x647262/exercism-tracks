/*
 * Modify Programming Project 1 from Chapter 12 so that it includes the
 * following function:
 *
 *      void reverse(const char *message);
 *
 * The function reverses the string pointed to by message.
 *
 * Hint: Use two pointers, one initially pointing to the first character of the
 * string, and the other initially pointing to the last character. Have the
 * function reverse these characters and then move the pointers towards each
 * other, repeating until the pointers meet.
 *
 * !!! This isn't possible if const char *message is passed !!!
 *
 * Option 1: Use a pointer to find '\n', and read backwards until
 * counter == 0.
 *
 * Option 2: Use an empty array to store the reversed message, then print it.
 * If the function was not void, we *could* return it.
 *
 * ##### Spec:
 *
 * Write a program that reads a message, then prints the reversal of the
 * message:
 *
 *      Enter a message: Don't get mad, get even.
 *      Reversal is: .neve teg ,dam teg t'noD
 */

#include <stdio.h>

#define LEN 81

void reverse(const char *message);

void reverse(const char *message) {
  int i = 0;
  while (message[i + 1] != '\n') {
    i += 1;
  }

  printf("Reversed: ");
  while (i >= 0) {
    printf("%c", message[i]);
    i -= 1;
  }
  printf("\n");
}

int main(void) {
  char message[LEN] = {0};

  printf("Enter a message: ");
  fgets(message, sizeof(message), stdin);

  reverse(message);

  return 0;
}
