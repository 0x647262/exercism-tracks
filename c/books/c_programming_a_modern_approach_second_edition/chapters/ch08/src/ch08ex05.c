/*
 * ##### reverse2.c
 * Reverses a series of numbers using a variable-length array = C99+ only.
 */

#include <stdio.h>

int main(void) {
  int n;

  printf("How many numbers do you want to reverse? ");
  scanf("%d", &n);

  int a[n]; /* C99+ only! Length of a depends on n */

  printf("Enter %d numbers: ", n);
  for (int i = 0; i < n; i += 1) {
    scanf("%d", &a[i]);
  }

  printf("In reverse order: ");
  for (int i = n - 1; i >= 0; i -= 1) {
    printf(" %d", a[i]);
  }
  printf("\n");

  return 0;
}
