/*
 * Write a program that calculates the sum of the digits of an integer. For
 * example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.
 * The program should accapt any arbitrary integer typed in by the user.
 */

#include <stdio.h>

int main(void) {
  int input, popped, sum;

  printf("Enter am integer: ");
  scanf("%i", &input);

  sum = 0;
  while (input > 0) {
    popped = input % 10;
    sum += popped;
    input /= 10;
  }
  printf("The sum of the digits in your number is: %i\n", sum);

  return 0;
}
