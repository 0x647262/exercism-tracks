/*
 * Rewrite the program in Programming Project 2 so that it prints the reversal
 * of a three-digit number without using arethmetic to split the number into
 * digits.
 *
 * Hint: See the upc.c program of section 4.1.
 */

#include <stdio.h>

int main(void) {
  int a, b, c;

  printf("Enter a three digit number: ");
  scanf("%1d%1d%1d", &a, &b, &c);
  printf("Reversed: %d%d%d\n", c, b, a);

  return 0;
}
