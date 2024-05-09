/*
 * Write a program that finds the largest in a series of numbers entered by the
 * user. The program must prompt the user to enter numbers in one by one. When
 * the user enters 0 or a negative number, the program must display the largest
 * nonnegative number entered:
 *
 *      Enter a number: 60
 *      Enter a number: 38.3
 *      Enter a number: 4.89
 *      Enter a number: 100.62
 *      Enter a number: 75.2295
 *      Enter a number: 0
 *
 *      The largest number entered was: 100.62
 *
 * Notice that the numbers aren't necessarily integers.
 */

#include <stdio.h>

int main(void) {
  float max = 0.0f;
  float n;

  printf("Enter a series of positive numbers.\n");
  printf("Enter a negative number or zero to quit.\n");
  printf("Enter a number greater than 0: ");
  scanf("%f", &n);
  if (n > max) {
    max = n;
  }
  while (n > 0.0f) {
    printf("Enter a number greater than 0: ");
    scanf("%f", &n);
    if (n > max) {
      max = n;
    }
  }
  printf("The largest number entered was: %f\n", max);

  return 0;
}
