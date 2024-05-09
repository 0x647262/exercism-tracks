/*
 * Modify Program 6.1 so that the elements of the array values[] are initially
 * set to 0. Use a for loopto perform the initialization
 */

#include <stdio.h>

int main(void) {
  int values[10];
  int i, index;

  for (i = 0; i < 10; ++i) {
    values[i] = 0;
  }
  for (index = 0; index < 10; ++index) {
    printf("values[%i] = %i\n", index, values[index]);
  }

  return 0;
}
