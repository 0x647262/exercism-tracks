/*
 * Modify Programming Project 6 from Chapter 10 so that it includes the
 * following function:
 *
 *      int evaluate_RPN_expression(const char *expression);
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

#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

static int contents[STACK_SIZE] = {0};
static int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);
void calculate(int);
int evaluate_RPN_expression(const char *expression);

void make_empty(void) { top = 0; }

bool is_empty(void) {
  if (top == 0) {
    return true;
  } else {
    return false;
  }
}

bool is_full(void) {
  if (top > STACK_SIZE) {
    return true;
  } else {
    return false;
  }
}

void push(int item) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top] = item;
    top += 1;
  }
}

int pop(void) {
  if (is_empty()) {
    stack_underflow();
    return -1;
  } else {
    top -= 1;
    return contents[top];
  }
}

void stack_overflow(void) {
  printf("Expression is too complex!\n");
  make_empty();
}

void stack_underflow(void) {
  printf("Not enough operands in expression!\n");
  make_empty();
}

void calculate(int operator) {
  int operand2 = pop();
  int operand1 = pop();

  switch (operator) {
  case '+':
    push(operand1 + operand2);
    break;
  case '-':
    push(operand1 - operand2);
    break;
  case '*':
    push(operand1 * operand2);
    break;
  case '/':
    if (operand2 != 0) {
      push(operand1 / operand2);
    }
    break;
  default:
    printf("Bad operator: \"%c\"\n", operator);
    make_empty();
  }
}

int evaluate_RPN_expression(const char *expression) {
  int i = 0;
  int ch;

  while (expression[i] != '\n') {
    ch = (int)expression[i];
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-') {
      printf("Calculating\n");
      calculate(ch);
    } else if (ch == '=') {
      printf("Breaking\n");
      break;
    } else if (ch == 'q') {
      printf("Emptying\n");
      make_empty();
    } else if (ch == ' ') {
      i += 1;
      continue;
    } else {
      printf("Pushing %c\n", ch);
      ch -= 48;
      push(ch);
    }
    i += 1;
  }
  return contents[0];
}

int main(void) {
  char expression[STACK_SIZE];

  while (true) {
    printf("Enter an RPN expression: ");
    fgets(expression, sizeof(expression), stdin);

    printf("Total: %d\n", evaluate_RPN_expression(expression));
    if (is_empty()) {
      break;
    }
    make_empty();
  }
  return 0;
}
