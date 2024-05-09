/*
 * Modify Programming Project 6 from Chapter 10 so that it has seperate
 * stack.h and stack.c files, as described in section 15.2.
 *
 * ##### Spec:
 *
 * Some calculators (notably those from Hewlett-Packard) use a system of
 * writing mathematical expressions known as Reverse Polish Notation (RPN). In
 * this notation, operators are placed after their operands instead of between
 * their operands. For example: 1 + 2 would be written:
 *
 *      1 2 +
 *
 * in RPN, and 1 + 2 * 3 would be written:
 *
 *      1 2 3 * +
 *
 * RPN expressions can easily be evaluated using a stack. The algorithm
 * involves reading the operators and operands in an expression from left to
 * right, performing the following actions:
 *
 *      When an operand is encountered, push it to the stack.
 *      When an operator is encountered:
 *          1. Pop the operands from the stack.
 *          2. Perform the operation.
 *          3. Push the result to the stack.
 *
 * Write a progam that evaluates RPN expressions. The operands will be
 * single-digit integers. The operators are: '+','-','*','/' and '='. The '='
 * operator causes the top stack item to the displayed; afterwardsm the stack
 * is cleared, and the user is prompted to enter another expression. The
 * process  continues until the user enters a character that is not an operator
 * or operand:
 *
 *      Enter an RPN expression: 1 2 3 * + =
 *      Value of expression: 7
 *      Enter an RPN expression: 5 8 * 4 9 - / =
 *      Value of expression: -8
 *      Enter an RPN expression: q
 *
 * If the stack overflows, the program will display the message:
 *
 *      Expression is too complex!
 *
 * and terminate. If the stack underflows (because of an expression such as
 * 1 2 + +), the program will display the following message:
 *
 *      Not enough operands in expression!
 *
 * and terminate.
 *
 * Hints: Incorperate the stack code from Section 10.2 into your program. Use:
 *
 *      scanf(" %c", &ch);
 *
 * to read the operators and operands.
 */

#include "stack.h"
#include <stdbool.h>

int main(void) {
  while (true) {
    input();
    if (is_empty()) {
      break;
    }
    make_empty();
  }
  return 0;
}
