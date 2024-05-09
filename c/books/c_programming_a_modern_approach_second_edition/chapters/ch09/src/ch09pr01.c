/*
 * Write a program that asks the user to enter a series of integers (which it
 * stores in an array), then sorts the integers by calling the function
 * selection_sort(). When given an array with n elements, selection_sort() must
 * do the following:
 *
 *  1. Search the array to find the largest element.
 *  2. Move the largest element to the end of the array.
 *  3. Call itself with the argument array[n - 1].
 */

#include <stdio.h>

void selection_sort(int[], int);

void selection_sort(int array[], int len) {
  int i = 0;
  int top = 0;
  int temp;

  while (i <= len) {
    if (array[i] > array[top]) {
      top = i;
    }
    i += 1;
  }
  temp = array[top];
  array[top] = array[len];
  array[len] = temp;

  if (len > 0) {
    selection_sort(array, len - 1);
  }
}

int main(void) {
  int nums[5];
  int len = 4;
  int i = 0;

  printf("Please enter 5 numbers: ");
  while (i <= len) {
    scanf("%d", &nums[i]);
    i += 1;
  }

  selection_sort(nums, len);
  printf("Sorted: ");
  i = 0;
  while (i <= len) {
    printf("%d ", nums[i]);
    i += 1;
  }
  printf("\n");

  return 0;
}
