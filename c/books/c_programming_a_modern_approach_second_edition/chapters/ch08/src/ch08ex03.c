/*
 * ##### interest.c
 * Prints a table of compound interest.
 */

#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void) {
  int low_rate, num_years;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (int i = 0; i < NUM_RATES; i += 1) {
    printf("%6d%%", low_rate + 1);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (int year = 1; year <= num_years; year += 1) {
    printf("%3d\t", year);
    for (int i = 0; i < NUM_RATES; i += 1) {
      value[i] += (low_rate + i) / 100.0 * value[i];
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }
  return 0;
}
