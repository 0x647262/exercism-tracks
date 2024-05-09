/*
 * Write a program that uses Newton's method to compute the square root of a
 * positive floating-point number:
 *
 *      Enter a positive number: 3
 *      Square root: 1.73205
 *
 * Let x be the number entered by the user. Newton's method requires an initial
 * guess y for the square root of x (we'll use y = 1). Successive guesses are
 * found by computing the average of y and x/y. The following table shows how
 * the square root of 3 would be found:
 *
 *      x   y         x/y       avg(y & x/y)
 *      ------------------------------------
 *      3   1         3         2
 *      3   2         1.5       1.75
 *      3   1.75      1.71429   1.73214
 *      3   1.73214   1.73196   1.73205
 *      3   1.73205   1.73205   1.73205
 *
 * Note that the values of y get progressively closer to the true square root
 * of x. For greater accuracy, your program should use variables of type double
 * rather than float. Have the program terminate when the absolute value of the
 * difference between the old value of y and new value of y is less than the
 * product of 0.00001 and y.
 *
 * Hint: Call the fabs() function to find the absolute value of a double.
 * (You'll need to include the <math.h> header at the beginning of your program
 * in order to use fabs().)
 */

#include <math.h>
#include <stdio.h>

int main(void) {
  double x;
  double y;
  double average;

  printf("Enter a number to find it's square root: ");
  scanf("%lf", &x);
  printf("Enter a starting point for calculating the square: ");
  scanf("%lf", &y);

  printf("x\ty\tx/y\tAvg. of x/y\n");
  ;
  while (fabs(y * y - x) >= 0.00001 * y) {
    average = (y + (x / y)) / 2;
    printf("%.5lf ", x);
    printf("%.5lf ", y);
    printf("%.5lf ", x / y);
    printf("%.5lf \n", average);
    y = average;
  }
  printf("The approximate square root of your number is: %.05lf\n", y);

  return 0;
}
