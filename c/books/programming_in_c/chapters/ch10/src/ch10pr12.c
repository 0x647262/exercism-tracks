/*
 * Given the following delcarations:
 *
 *      char *message = "Programming in C is fun\n";
 *      char message2[] = "You said it!\n";
 *      char *format = "x = %i\n";
 *      int  x = 100;
 *
 * Determine whether each printf() call from the following sets is valid and
 * produces the same output as other calls from the set.
 */

#include <stdio.h>

int main(void) {
  char *message = "Programming in C is fun\n";
  char message2[] = "You said it!\n";
  char *format = "x = %i\n";
  int x = 100;

  printf("\n");

  /*** Set 1 ***/
  printf("Programming in C is fun\n");
  printf("%s", "Programming in C is fun\n");
  printf("%s", message);
  printf("%s", message);

  printf("\n");

  /*** Set 2 ***/
  printf("You said it!\n");
  printf("%s", message2);
  printf("%s", message2);
  printf("%s", &message2[0]);

  printf("\n");

  /*** Set 3 ***/
  printf("said it\n");
  printf("%s", message2 + 4);
  printf("%s", message2 + 4);
  printf("%s", &message2[4]);

  printf("\n");

  /*** Set 4 ***/
  printf("x = %i\n", x);
  printf(format, x);

  printf("\n");

  return 0;
}
