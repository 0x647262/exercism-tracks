/*
 * See ch12pr10.md
 */

#include <stdio.h>

#define printx(n) printf("x" #n "= %i\n", n)

int main(void) {
  int i;

  for (i = 1; i <= 100; i++) {
    printx(i);
  }

  return 0;
}
