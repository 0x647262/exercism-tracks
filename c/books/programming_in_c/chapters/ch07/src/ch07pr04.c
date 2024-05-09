/*
 * Modify Program 7.8 so that the value of guess is printed each time through
 * the while loop. Notice how quickly the value of guess converges to the
 * square root. What conclusions can you reach about the number of iterations
 * through the loop, the number whose square is being calculated, and the value
 * of the initial guess?
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
  const float epsilon = 0.001f;
  float guess = 1.0f;

  while (abs_v(guess * guess - x) >= epsilon) {
    printf("Guess is: %.5f\n", guess);
    guess = (x / guess + guess) / 2.0f;
  }
  return guess;
}

int main(void) {
  printf("sqrt (50) = %f\n", sqrt_v(50));

  return 0;
}
