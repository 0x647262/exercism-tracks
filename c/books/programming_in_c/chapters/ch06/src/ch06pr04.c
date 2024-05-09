/*
 * Write a program that calculates the average of an array of 10 floating-point
 * values.
 */

#include <stdio.h>

int main(void) {
  int i;
  float floats[10] = {10.05f,  700.58f, 93.71f, 0.01f,  51.10f,
                      900.32f, 438.43f, 12.87f, 43.78f, 91.11f};
  float sum = 0;

  for (i = 0; i < 10; ++i) {
    sum += floats[i];
  }
  printf("The average of the 10 floats: %.2f\n", sum / 10.00);

  return 0;
}
