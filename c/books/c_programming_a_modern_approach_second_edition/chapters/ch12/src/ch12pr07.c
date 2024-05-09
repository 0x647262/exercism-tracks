/*
 * Modify the maxmin.c program of Section 11.4 so that the max_min function
 * uses a pointer instead of an integer to keep track of the current position
 * in the array.
 *
 * ##### maxmin.c
 * Finds the largest and smallest elements in an array.
 */

#include <stdio.h>

#define N 10

void max_min(int *a, int n, int *max, int *min);

void max_min(int *a, int n, int *max, int *min) {
  *max = *min = *(a + 0);
  for (int i = 0; i < n; i += 1) {
    if (*(a + i) > *max) {
      *max = *(a + i);
    } else if (*(a + i) < *min) {
      *min = *(a + i);
    } else {
      continue;
    }
  }
}

int main(void) {
  int b[N];
  int big, small;

  printf("Enter %d numbers: ", N);
  for (int i = 0; i < N; i += 1) {
    scanf("%d", &b[i]);
  }

  max_min(b, N, &big, &small);
  printf("Largest: %d\n", big);
  printf("Smallest: %d\n", small);

  return 0;
}
