/*
 * Using the switch statement, write a program that converts a numerical grade
 * into a letter grade:
 *
 *      Enter numerical grade: 84
 *      Letter grade: B
 *
 * Use the following grading scale:
 *
 *      A = 100-90
 *      B = 89-80
 *      c = 79-70
 *      D = 69-60
 *      F = 59-0
 *
 * Hint: Break the grade down into two digits, then use a switch statement to
 * test the 10's digit.
 */

#include <stdio.h>

int main(void) {
  int grade;

  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  grade = grade / 10;
  printf("Letter grade: ");
  switch (grade) {
  case 10:
  case 9:
    printf("A\n");
    break;
  case 8:
    printf("B\n");
    break;
  case 7:
    printf("C\n");
    break;
  case 6:
    printf("D\n");
    break;
  default:
    printf("F\n");
  }
  return 0;
}
