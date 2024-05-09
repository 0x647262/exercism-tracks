/* Write a program that acts as a simple "printing" calculator. The program
 * should allow the user to type in expressions of the form
 *
 *      number operator
 *
 * The following operators should be recognized by the program:
 *
 *      +       -       *       /       S       E
 *
 * The S operator tells the program to set the "accumulator" to the typed-in
 * number. The E operator tells the program that execution is to end. The
 * arithmetic operations are performed on the contents of the accumulator
 * with the number that was keyed in acting as the second operand. The
 * following is a "sample run" showing how the program should operate:
 *
 *      Begin calculations
 *      10 S            Set Accumulator to 10
 *      = 10.000000     Contents of Accumulator
 *      2 /             Divide by 2
 *      = 5.000000      Contents of Accumulator
 *      55 -            Subtract 55
 *      = -50.000000
 *      100.25 S        Set Accumulator to 100.25
 *      = 100.250000
 *      4 *             Multiply by 4
 *      = 401.000000
 *      0 E             End of program
 *      = 401.000000
 *      End of Calculations.
 */

#include <stdio.h>

int main(void) {
  float number;
  float accumulator = 0;
  char operator;

  printf("Welcome to the simple printing calculator\n");
  printf("Usage:\n");
  printf("Prompt: Number Operator");
  printf("Operators:\n");
  printf("\tS    - used to set the accumulator.\n");
  printf("\t+    - used to add to the accumulator.\n");
  printf("\t-    - used to add to the accumulator.\n");
  printf("\t*    - used to add to the accumulator.\n");
  printf("\t/    - used to add to the accumulator.\n");
  printf("\tE    - used to end the program. Prefix with 0\n");
  printf("\n");

  printf("Prompt(# O): ");
  scanf("%f %c", &number, &operator);
  while (operator!= 'E') {
    switch (operator) {
    case 'S':
      accumulator = number;
      printf("= %.6f\n", accumulator);
      break;
    case '+':
      accumulator += number;
      printf("= %.6f\n", accumulator);
      break;
    case '-':
      accumulator -= number;
      printf("= %.6f\n", accumulator);
      break;
    case '*':
      accumulator *= number;
      printf("= %.6f\n", accumulator);
      break;
    case '/':
      if ((int)number != 0) {
        accumulator /= number;
        printf("= %.6f\n", accumulator);
      } else {
        printf("Division by zero! Accumulator unchanged!\n");
      }
      break;
    default:
      printf("Unknown operator!, Accumulator unchanged!\n");
    }
    printf("Prompt(# O): ");
    scanf("%f %c", &number, &operator);
    if (operator== 'E') {
      printf("= %.6f\n", accumulator);
    }
  }

  return 0;
}
