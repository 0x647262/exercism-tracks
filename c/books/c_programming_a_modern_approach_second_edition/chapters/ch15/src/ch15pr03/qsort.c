/*
 * Modify the qsort.c program of Section 9.6 so that the quicksort() and
 * split() functions are in a seperate file named quicksort.c. Create a header
 * file named quicksort.h that contains prototypes for the two functions and
 * have both qsort.c ans quicksort.c include this file.
 */

#include "quicksort.h"
#include <stdio.h>

#define N 10

int main(void) {
  int a[N];
  int i;

  printf("Enter %d numbers to be sorted: ", N);
  for (i = 0; i < N; i += 1) {
    scanf("%d", &a[i]);
  }

  quicksort(a, 0, N - 1);
  printf("In sorted order: ");
  for (i = 0; i < N; i += 1) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
