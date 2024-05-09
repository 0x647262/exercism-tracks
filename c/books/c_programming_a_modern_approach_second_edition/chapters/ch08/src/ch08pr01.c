/*
 * Modify the repdigit.c program of 8.1 so that it shows which digits (if any)
 * were repeated:
 *
 *      Enter a number: 939577
 *      Repeated digit(s): 7 9
 */

#include <stdio.h>

int main(void) {
  int digit_seen[10] = {0};
  int duplicates[10] = {0};
  int digit;
  int empty = 0;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);
  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]) {
      duplicates[digit] += 1;
    }
    digit_seen[digit] = 2;
    n /= 10;
  }

  for (int i = 0; i < 10; i += 1) {
    //    printf("%d repeats %d time(s)\n", i, duplicates[i]);
    empty += duplicates[i];
  }
  if (empty == 0) {
    printf("No repeated digits\n");
  } else {
    printf("Repeated digit(s): ");
    for (int i = 0; i < 10; i += 1) {
      if (duplicates[i] > 0) {
        printf("%d ", i);
      }
    }
    printf("\n");
  }
  return 0;
}
