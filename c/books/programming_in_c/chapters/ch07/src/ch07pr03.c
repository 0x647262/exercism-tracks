/*
 * Modify Program 7.8 so that the value of epsilon is passed as an argument to
 * the function. Try experimenting with different values of epsilon to see the
 * effect that it has on the value of the square root.
 */

#include <stdio.h>

float abs_v(float x);
float sqrt_v(float x, float epsilon);

float abs_v(float x) {
  if (x < 0) {
    x = -x;
  }

  return x;
}

float sqrt_v(float x, float epsilon) {
  float guess = 1.0f;

  while (abs_v(guess * guess - x) >= epsilon) {
    guess = (x / guess + guess) / 2.0f;
  }

  return guess;
}

int main(void) {
  printf("sqrt (50) = %f\n", sqrt_v(50, 0.1f));
  printf("sqrt (50) = %f\n", sqrt_v(50, 0.01f));
  printf("sqrt (50) = %f\n", sqrt_v(50, 0.001f));
  printf("sqrt (50) = %f\n", sqrt_v(50, 0.0001f));
  printf("sqrt (50) = %f\n", sqrt_v(50, 0.00001f));

  return 0;
}
