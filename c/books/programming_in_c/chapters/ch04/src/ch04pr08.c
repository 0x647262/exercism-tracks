/*
 * Program 4.5 allows the user to type in only 5 different numbers. Modify that
 * program so that the user can type in the number of triangular numbers to be
 * calculated.
 */

#include <stdio.h>

int main(void) {
  int n, number, tri_num, count, counter;

  printf("Enter the number of triangular number you need: ");
  scanf("%i", &count);

  for (counter = 1; counter <= count; ++counter) {
    printf("What triangular number do you want?\n");
    scanf("%i", &number);

    tri_num = 0;
    for (n = 1; n <= number; ++n) {
      tri_num += n;
    }
    printf("Triangular number %i is %i\n", number, tri_num);
  }
  return 0;
}
