/*
 * Program to demonstrate the #define statement.
 */

#include <stdio.h>

#define YES 1
#define NO 0

int is_even(int num);

/* Function to determine if an integer is even */
int is_even(int num) {
  int answer;

  if (num % 2 == 0) {
    answer = YES;
  } else {
    answer = NO;
  }

  return answer;
}

int main(void) {
  if (is_even(17) == YES) {
    printf("Yes");
  } else {
    printf("No");
  }

  printf(" ");

  if (is_even(20) == YES) {
    printf("Yes");
  } else {
    printf("No");
  }

  printf("\n");

  return 0;
}
