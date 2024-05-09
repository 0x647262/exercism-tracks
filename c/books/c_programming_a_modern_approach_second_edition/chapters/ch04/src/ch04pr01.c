/*
 * Write a program that asks the user to enter a two-digit number, then prints
 * the number it's digits reversed. A session with the program should have the
 * following appearance:
 *
 *      Enter a two-digit number: 28
 *      The reversal is: 82
 *
 * Read the number using %d then break it into two digits.
 *
 * Hint: if n is an integer, then n % 10 is the last digit in n, and n / 10 is
 * n with the last digit removed.
 */

#include <stdio.h>

int main(void) {
  int a, b, c;

  printf("Enter a two digit number: ");
  scanf("%d", &a);
  b = a / 10;
  c = a % 10;
  printf("Reversed: %d%d\n", c, b);

  return 0;
}
