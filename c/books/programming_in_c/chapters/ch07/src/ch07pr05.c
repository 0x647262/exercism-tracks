/*
 * The criteria used for the termination of the loop in the sqrt()
 * function of program 7.8 is not suitable for use when computing the square
 * root of very large or very small numbers. Rather than comparing the
 * difference between the value of x and the value of guess^2, the program
 * should compare the ratio of the two values to 1. The closer this ratio gets
 * to 1, the more accurate the approximation of the square root.
 */

#include <stdio.h>

float abs_v(float x);
float sqrt_v(float x);

float abs_v(float x) {
  if (x < 0) {
    x = -x;
  }

  return x;
}

float sqrt_v(float x) {
  float guess = 1.0;

  do {
    printf("Guess: %.5f\n", guess);
    guess = (x / guess + guess) / 2;
  } while (abs_v(x) / abs_v((guess * guess)) < 1.00);

  return guess;
}

int main(void) {
  printf("sqrt (2.0) = %.5f\n", sqrt_v(2.0));
  printf("sqrt (100.0) = %.5f\n", sqrt_v(144.0));
  printf("sqrt (17.5) = %.5f\n", sqrt_v(17.5));

  return 0;
}
