/*
 * ##### maxmin.c
 * Finds the largest and smallest elements in an array.
 */

#include <stdio.h>

#define LEN 10

void max_min(const int array[], int len, int *max, int *min);

void max_min(const int array[], int len, int *max, int *min) {
  *max = array[0];
  *min = array[0];

  for (int i = 0; i < len; i += 1) {
    if (array[i] > *max) {
      *max = array[i];
    } else if (array[i] < *min) {
      *min = array[i];
    } else {
      continue;
    }
  }
}

int main(void) {
  int numbers[LEN];
  int big, small;

  printf("Enter %d numbers: ", LEN);
  for (int i = 0; i < LEN; i += 1) {
    scanf("%d", &numbers[i]);
  }

  max_min(numbers, LEN, &big, &small);

  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);

  return 0;
}
