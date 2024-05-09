/*
 * Program to illustrate the use of the #include statement.
 *
 * Note: This program assumes that the definitions are set up in a file called:
 * metric.h.
 */

#include "metric.h"
#include <stdio.h>

int main(void) {
  double liters, gallons;

  printf("***** Liters to Gallons ****\n");
  printf("Enter the number of liters: ");
  scanf("%lf", &liters);

  gallons = liters * QUARTS_PER_LITER / 4.0;
  printf("%g liters = %g gallons\n", liters, gallons);

  return 0;
}
