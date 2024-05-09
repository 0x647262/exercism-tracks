/*
 * Modify the interest.c program of Section 8.1 so that it compounds intrest
 * monthly instead of annually. The form of output shouldn't change; the
 * balance should still be shown at annual intervals.
 */

#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void) {
  int rate, higher_rate, num_years;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  higher_rate = rate;
  for (int i = 0; i < NUM_RATES; i += 1) {
    printf("%6d%%", higher_rate);
    higher_rate += 1;
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (int year = 1; year <= num_years; year += 1) {
    printf("%3d\t", year);
    for (int i = 0; i < NUM_RATES; i += 1) {
      /* Compound the interest 12 times: */
      for (int j = 0; j < 12; j += 1) {
        /* Divide the annual interest rate by 12: */
        value[i] += (rate + i) / 100.0 / 12.0 * value[i];
      }
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }
  return 0;
}
