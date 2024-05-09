/*
 * Write a program that accepts wto integer values typed in by the user.
 * Display the result of dividing the first integer by the second, to
 * three-decimal-place accuracy. Remember to have the program to check for
 * division by zero.
 */

#include <stdio.h>

int main(void) {
  int x, y;

  printf("Enter two numbers to divide (x, y): ");
  scanf("%i, %i", &x, &y);

  if (y == 0) {
    printf("Division by zero\n");
  } else {
    printf("%.3f\n", (float)x / (float)y);
  }

  return 0;
}
