/*
 * Sorts an array of integers using the quicksort algorithm.
 */

#include <stdio.h>

#define N 10

void quicksort(int[], int, int);
int split(int[], int, int);

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

void quicksort(int a[], int low, int high) {
  int middle;

  if (low >= high) {
    return;
  }
  middle = split(a, low, high);
  quicksort(a, low, middle - 1);
  quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high) {
  int part_element = a[low];

  while (1) {
    while (low < high && part_element <= a[high]) {
      high -= 1;
    }
    if (low >= high) {
      break;
    }
    a[low] = a[high];
    low += 1;

    while (low < high && a[low] <= part_element) {
      low += 1;
    }
    if (low >= high) {
      break;
    }
    a[high] = a[low];
    high -= 1;
  }
  a[high] = part_element;

  return high;
}
