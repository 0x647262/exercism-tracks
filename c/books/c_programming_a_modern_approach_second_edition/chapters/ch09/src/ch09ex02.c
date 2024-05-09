/*
 * Prints a countdown.
 */

#include <stdio.h>

void print_count(int);

void print_count(int n) { printf("T minus %d and counting\n", n); }

int main(void) {
  int i;

  for (i = 10; i > 0; i -= 1) {
    print_count(i);
  }

  return 0;
}
