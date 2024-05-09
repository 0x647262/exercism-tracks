/*
 * Modify the sort() function from Program 7.12 to take a third argument
 * indicating whether the array is to be sorted in ascending or descending
 * order. Then modify the sort() algorithm to correctly sort the array into the
 * indicated order.
 */

#include <stdio.h>

void sort(int array[], int len, char order);

void sort(int array[], int len, char order) {
  int i, j, temp;

  /* Sort using (a)scending or (d)escending order */
  switch (order) {
  case 'a':
    for (i = 0; i < len; ++i) {
      for (j = i + 1; j < len; ++j) {
        if (array[i] > array[j]) {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
      }
    }
    break;
  case 'd':
    for (i = 0; i < len; ++i) {
      for (j = i + 1; j < len; ++j) {
        if (array[i] < array[j]) {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
      }
    }
    break;
  }
}

int main(void) {
  int i;
  int array[16] = {34, -5, 6,  0,  12, 100, 56, 22,
                   44, -3, -9, 12, 17, 22,  6,  11};

  printf("Ascending order:\n");
  printf("The array before the sort:\n");
  for (i = 0; i < 16; ++i) {
    printf("%i ", array[i]);
  }

  sort(array, 16, 'a');
  printf("\n\nThe array after the sort:\n");
  for (i = 0; i < 16; ++i) {
    printf("%i ", array[i]);
  }
  printf("\n");

  printf("\n");

  printf("Descending order:\n");
  printf("The array before the sort:\n");
  for (i = 0; i < 16; ++i) {
    printf("%i ", array[i]);
  }

  sort(array, 16, 'd');
  printf("\n\nThe array after the sort:\n");
  for (i = 0; i < 16; ++i) {
    printf("%i ", array[i]);
  }
  printf("\n");

  return 0;
}
