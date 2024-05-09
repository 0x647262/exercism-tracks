/*
 * ##### length.c
 * Determines the length of a message.
 */

#include <stdio.h>

int main(void) {
  int ch;
  int len = 0;

  printf("Enter a message: ");
  ch = getchar();
  while (ch != '\n') {
    len += 1;
    ch = getchar();
  }
  printf("You message was: %d character(s) long.\n", len);

  return 0;
}
