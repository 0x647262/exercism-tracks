/*
 * Write a program named sum.c that adds up its command-line arguments, which
 * are assumed to be integers. Running the program by typing:
 *
 *      sum 8 24 62
 *
 * Should produce:
 *
 *      Total: 94
 *
 * Hint: Use the atoi function to convert each command line argument from
 * string form to integer form.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int total = 0;

  for (int i = 0; i < argc; i += 1) {
    total += atoi(argv[i]);
  }
  printf("Total: %d\n", total);

  return 0;
}
