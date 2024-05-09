/*
 * Write a program that subtracts the value of 15 from 87 and displays the
 * result, together with an appropriate message, at the terminal.
 */

#include <stdio.h>

int main(void) {
  int fifteen, eightyseven, difference;

  fifteen = 15;
  eightyseven = 87;
  difference = eightyseven - fifteen;

  printf("The difference of %i and %i is %i\n", fifteen, eightyseven,
         difference);

  return 0;
}
