/*
 * Programming Project 1 in Chapter 4 asked you to write a program that
 * displays a two-digit number with its digits reversed. Generalize the program
 * so that the number can have one, two, three, or more digits.
 *
 * Hint: use a do loop that repeatedly divides the number by 10, stopping when
 * it reaches 0.
 *
 * ##### NOTE:
 * Program will not handle numbers ending in'0' properly. This can be handled
 * by printing the remainder as you go, using a statement like:
 *
 *      (using 10 as the example)
 *      printf("%d", rev);
 *      ...
 *      prints: 0
 *      ...
 *      printf("%d", rev);
 *      ...
 *      prints: 01
 *      ...
 *      done!
 *
 * This does not store the number! It simply prints it one number at a time to
 * stdout.
 */

#include <stdio.h>

int main(void) {
  int num;
  int rev = 0;

  printf("Enter a nonnegative integer: ");
  scanf("%d", &num);

  while (num != 0) {
    rev = rev * 10;
    rev = rev + num % 10;
    num = num / 10;
  }
  printf("Your number reversed: %d\n", rev);

  return 0;
}
