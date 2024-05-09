/*
 * Modify Program 7.8 so that the sqrt() function accepts a double
 * precision argument and returns the result as a double precision value. Be
 * certian to change the value of variable epsilon to reflect that double
 * precision values are now bring used.
 */

#include <stdio.h>

double abs_v(double x);
double sqrt_v(double x);

double abs_v(double x) {
  if (x < 0) {
    x = -x;
  }

  return x;
}

double sqrt_v(double x) {
  const double epsilon = 0.00001;
  double guess = 1.0;

  while (abs_v(guess * guess - x) >= epsilon) {
    guess = (x / guess + guess) / 2.0;
  }

  return guess;
}

int main(void) {
  printf("sqrt (50) = %f\n", sqrt_v(50));

  return 0;
}
