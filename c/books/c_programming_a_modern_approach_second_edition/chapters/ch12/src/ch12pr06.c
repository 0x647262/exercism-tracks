/*
 * Modify the qsort.c program of Section 9.6 so that low, high, and middle are
 * pointers to array elements, rather than integers. The split function will
 * need to return a pointer, not an integer.
 *
 * ##### Spec:
 *
 * Sorts an array of integers using the quicksort algorithm.
 */

#include <stdio.h>

#define N 10

void quicksort(const int array[], int *low, int *high);
int *split(int *low, int *high);

void quicksort(const int a[], int *low, int *high) {
  int *middle;

  if (low >= high) {
    return;
  }
  middle = split(low, high);
  quicksort(a, low, (middle - 1));
  quicksort(a, (middle + 1), high);
}

int *split(int *low, int *high) {
  int part_element = *low;

  while (1) {
    while (low < high && part_element <= *high) {
      high -= 1;
    }
    if (low >= high) {
      break;
    }
    *low = *high;
    low += 1;

    while (low < high && *low <= part_element) {
      low += 1;
    }
    if (low >= high) {
      break;
    }
    *high = *low;
    high -= 1;
  }
  *high = part_element;

  return high;
}

int main(void) {
  int a[N];
  int i;

  printf("Enter %d numbers to be sorted: ", N);
  for (i = 0; i < N; i += 1) {
    scanf("%d", &a[i]);
  }

  quicksort(a, (a + 0), (a + 9));
  printf("In sorted order: ");
  for (i = 0; i < N; i += 1) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
