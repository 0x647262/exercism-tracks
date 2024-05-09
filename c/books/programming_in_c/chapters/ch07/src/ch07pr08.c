/*
 * An equation in the form
 *
 * ax^2 + bx + c = 0
 *
 * is known as a quadratic equation. The values of a, b, and c in the preceding
 * example represent constant values. So
 *
 * 4x^2 - 17x - 15 = 0
 *
 * represents a quadratic equation where a = 4, b = -17, and c = -15. The
 * values of x that satisfy a particular quadratic equation, known as the roots
 * of the equation, can be calculated by substituting the values of a, b, and c
 * into the following two formulas:
 *
 * x = (-b +/- sqrt(b^2 - 4 * a * c)) / (2 * a)
 *
 * if the value of (b^2 - 4 * a * c) is less than 0, the roots of the equation
 * are x(sub1) and x(sub2) are imaginary numbers.
 *
 * Write a program to solve a quadratic equation. The program should allow the
 * user to enter the values a, b, and c. If the discriminant is less than zero,
 * a message should be displayed that the roots are imaginary; otherwise the
 * program should then proceed to calculate and display the two roots of the
 * equation. (Note: be certain to make use of the squareRoot() function you
 * developed in this chapter.)
 */

#include <stdio.h>

double abs_v(double x);
double calc_sqrt(double x);
float calc_discrim(int a, int b, int c);
void calc_roots(int a, int b, int c);

double abs_v(double x) {
  if (x < 0) {
    x = -x;
  }
  return x;
}

/*
 *      Note:
 * Originally this was set up to return a float. However, the program choked
 * on some numbers as the ratio of abs_v(x) : abs_v(guess^2) approached 1.
 *
 * If you would like to test, try passing 9900.0 to the function as a float.
 * (a = 5, b = 100, c = 5)
 */
double calc_sqrt(double x) {
  double guess = 1.0;

  do {
    guess = (x / guess + guess) / 2;
  } while (abs_v(x) / abs_v((guess * guess)) < 1.00);

  return guess;
}

float calc_discrim(int a, int b, int c) {
  float result = (b * b) - (4 * a * c);

  return result;
}

void calc_roots(int a, int b, int c) {
  double root1, root2;
  root1 = (-b + calc_sqrt(calc_discrim(a, b, c))) / (2 * a);
  root2 = (-b - calc_sqrt(calc_discrim(a, b, c))) / (2 * a);

  printf("First root: %f\n", root1);
  printf("Second root: %f\n", root2);
}

int main(void) {
  int a, b, c;

  printf("Enter values for a, b, and c\n");
  printf("(a, b, c)");
  scanf("%i, %i, %i", &a, &b, &c);

  if (calc_discrim(a, b, c) < 0) {
    printf("The roots are imaginary!\n");
  } else {
    calc_roots(a, b, c);
  }
  return 0;
}
