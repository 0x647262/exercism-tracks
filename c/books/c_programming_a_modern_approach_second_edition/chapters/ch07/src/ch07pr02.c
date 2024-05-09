/*
 * Modify the square2.c program of Section 6.3 so that it pauses every 24
 * squares and displays the following message:
 *
 *      Press ENTER to continue...
 *
 * After displaying the message, the program should use getchar() to read a
 * character. getchar() won't allow the program to continue until the user
 * presses the Enter key.
 */

#include <stdio.h>

int main(void) {
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter the number of entries in table: ");
  scanf("%d", &n);
  getchar();

  for (i = 1; i <= n; i += 1) {
    if (i % 24 == 0) {
      printf("Press ENTER to continue...\n");
      while (getchar() != '\n') {
      }
    }
    printf("%10d\t%10d\n", i, i * i);
  }
  return 0;
}
