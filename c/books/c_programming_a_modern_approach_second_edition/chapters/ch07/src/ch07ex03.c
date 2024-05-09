/*
 * ##### length2.c
 * Determines the length of a message.
 */

#include <stdio.h>

int main(void) {
  int len = 0;

  printf("Enter a message: ");
  while (getchar() != '\n') {
    len += 1;
  }
  printf("You message was: %d character(s) long.\n", len);

  return 0;
}
