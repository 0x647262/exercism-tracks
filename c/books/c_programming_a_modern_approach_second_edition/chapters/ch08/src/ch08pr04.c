/*
 * Modify the reverse.c program of section 8.1 to use the expression:
 *
 *      (int) (sizeof(a) / sizeof(a[0]))
 */

#include <stdio.h>

#define LENGTH (int)(sizeof(a) / sizeof(a[0]))

int main(void) {
  int a[9] = {0};

  for (int i = LENGTH; i >= 0; i -= 1) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &a[i]);
  }

  printf("In reverse order: ");
  for (int i = 0; i != LENGTH + 1; i += 1) {
    printf(" %d", a[i]);
  }
  printf("\n");

  return 0;
}
