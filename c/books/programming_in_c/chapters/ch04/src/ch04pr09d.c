/*
 * Generate a triangular number of the user's chosing. (5 times)
 */

#include <stdio.h>

int main(void) {
  int n, number, tri_num, counter;

  counter = 1;
  while (counter <= 5) {
    printf("What triangular number do you want?\n");
    scanf("%i", &number);
    tri_num = 0;
    n = 1;
    while (n <= number) {
      tri_num += n;
      ++n;
    }
    printf("Triangular number %i is %i\n", number, tri_num);
    ++counter;
  }
  return 0;
}
