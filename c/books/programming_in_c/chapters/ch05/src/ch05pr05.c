/*
 * You developed a program in 4.9 to reverse the digits of an integer typed in
 * from the terminal. However, this program does not function well if you type
 * in a negative number. Find out what happens in such a case and then modify
 * the program so that negative numbers are correclty handled. For example, if
 * the number -8645 is typed in, the output of the program should be 5468-.
 *
 * Notes:
 *
 * Running the original program with the input: -123 produces:
 *
 *      -3-2-1
 *
 * Try 1:
 * My initial thought would be to reverse the absolute value of the input, and
 * then tack a '-' on the end.
 *
 * Try 2:
 * I ended up creating 2 routines for each case. One case for negative input,
 * and another for positive.
 *
 * Initially I ran into some issues, but I finally have a working program.
 * However I'm fairly positive there is another way to go about this, and I
 * don't believe my "spaghetti code" version is the optimal solution.
 *
 * Going to seek peer review to see if there is a more optimal solution
 */

#include <stdio.h>

int main(void) {
  int num, right_digit;

  printf("Enter your number\n");
  scanf("%i", &num);

  do {
    if (num < 0) {
      right_digit = num % 10;
      printf("%i", -right_digit);
      num /= 10;
      if (num == 0) {
        printf("-");
      }
    } else {
      right_digit = num % 10;
      printf("%i", right_digit);
      num /= 10;
    }
  } while (num != 0);
  printf("\n");

  return 0;
}
