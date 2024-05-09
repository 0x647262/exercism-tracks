/*
 * Write a program that asks the user to type in two integer values at the
 * terminal. Test these two numbers to determine if the first is divisible
 * by the second, and then display an appropriate message at the terminal.
 */

#include <stdio.h>

int main(void) {
  int x, y;

  printf("Please enter two numbers (x, y): ");
  scanf("%i, %i", &x, &y);

  if (x % y == 0) {
    printf("%i is evenly divisible by %i\n", x, y);
  } else {
    printf("The numbers you entered were not evenly divisible\n");
  }

  return 0;
}
