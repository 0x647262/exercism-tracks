/*
 * tabulate.c
 *
 * Tabulates values of trigometric functions.
 */

#include <math.h>
#include <stdio.h>

void tabulate(double (*f)(double), double first, double last, double increment);

int main(void) {
  double final;
  double increment;
  double initial;

  printf("Enter an initial value: ");
  scanf("%lf", &initial);
  printf("Enter final value: ");
  scanf("%lf", &final);
  printf("Enter increment: ");
  scanf("%lf", &increment);

  printf("\n\tx\tcos(x)\n");
  tabulate(cos, initial, final, increment);
  printf("\n\tx\tsin(x)\n");
  tabulate(sin, initial, final, increment);
  printf("\n\tx\ttan(x)\n");
  tabulate(tan, initial, final, increment);

  return 0;
}

void tabulate(double (*f)(double), double first, double last,
              double increment) {
  double num_invervals = ceil((last - first) / increment);
  for (double i = 0; i <= num_invervals; i += 1) {
    double x = first + i * increment;
    printf("\t%0.5f\t%0.5f\n", x, (*f)(x));
  }
}
