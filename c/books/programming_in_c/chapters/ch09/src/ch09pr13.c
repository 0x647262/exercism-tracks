/*
 * If c is a lowercase character, the expression
 *
 *      c - 'a' + 'A'
 *
 * produces the uppercase equivalent of c, assuming an ASCII character set.
 *
 * Write a function called uppercase() that converts all lowercase characters
 * in a string into their uppercase counterparts.
 */

#include <stdio.h>

void uppercase(char string[]);

void uppercase(char string[]) {
  int i;

  for (i = 0; string[i] != '\0'; ++i) {
    if (string[i] > 'a' && string[i] < 'z') {
      string[i] = string[i] - 'a' + 'A';
    }
  }
}

int main(void) {
  char test[] = "TeSt StRiNg";

  uppercase(test);

  printf("%s\n", test);

  return 0;
}
