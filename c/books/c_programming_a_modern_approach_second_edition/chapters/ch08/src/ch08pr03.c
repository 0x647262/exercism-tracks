/*
 * Modify the repdigit.c program of Section 8.1 so that the user can enter more
 * than one number to be tested for repeated digits. The program should
 * terminate when the user enters a number that's less than or equal to 0.
 */

#include <stdio.h>

int main(void) {
  while (1) {
    int duplicates[10] = {0};
    int digit = 0;
    int empty = 0;
    long n = 0;

    printf("Enter a number: ");
    scanf("%ld", &n);
    if (n == 0) {
      break;
    }
    while (n > 0) {
      digit = n % 10;
      duplicates[digit] += 1;
      n /= 10;
    }

    for (int i = 0; i < 10; i += 1) {
      empty += duplicates[i];
    }

    if (empty == 0) {
      printf("No repeated digits\n");
    } else {
      printf("Digit:\t\t");
      for (int i = 0; i < 10; i += 1) {
        printf("%d ", i);
      }
      printf("\nOccurances:\t");
      for (int i = 0; i < 10; i += 1) {
        printf("%d ", duplicates[i]);
      }
      printf("\n");
    }
  }
  return 0;
}
