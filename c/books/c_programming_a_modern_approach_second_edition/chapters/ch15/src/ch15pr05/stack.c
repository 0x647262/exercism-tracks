#include "stack.h"
#include <stdio.h>

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

void input(void) {
  int ch;

  printf("Enter an RPN expression: ");
  while (true) {
    ch = getchar();
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-') {
      calculate(ch);
    } else if (ch == '=') {
      display();
    } else if (ch == ' ') {
      continue;
    } else if (ch == 'q') {
      make_empty();
    } else if (ch == '\n') {
      break;
    } else {
      ch -= 48;
      push(ch);
    }
  }
}

void calculate(int operator) {
  int operand2 = pop();
  int operand1 = pop();

  switch ((char)operator) {
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
    printf("Bad operator!\n");
    make_empty();
  }
}

void display(void) { printf("Value of expression: %d\n", contents[0]); }
