/*
 * Write a program that converts 27 degrees Fahrenheit (F) to degrees
 * Celsius (C) using the following formula:
 *
 * C = (F - 32) / 1.8
 */

#include <stdio.h>

int main(void) {
  float F = 27.0;
  float C;

  C = (F - 32) / 1.8f;
  printf("%f degrees Fahrenheit is %f degrees Celsius\n", F, C);

  return 0;
}
