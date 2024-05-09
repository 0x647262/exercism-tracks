/*
 * Write a function called arraySum() that takes two arguments: an integer
 * array, and the number of elements in the array. Have the function return as
 * its result the sum of the elements in the array.
 */

#include <stdio.h>

int array_sum(int array[], int len);

int array_sum(int array[], int len) {
  int sum = 0;
  int i;
  for (i = 0; i < len; ++i) {
    sum += array[i];
  }

  return sum;
}

int main(void) {
  int array[5] = {0, 1, 2, 3, 4};
  int len = 5;

  printf("The sum of the array is: %i\n", array_sum(array, len));

  return 0;
}
