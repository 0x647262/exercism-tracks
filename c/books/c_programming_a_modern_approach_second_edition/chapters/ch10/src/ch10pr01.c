/*
 * Modify the stack example of Section 10.2 so that it stores characters
 * instead of integers. ext, add a main() function that asks the user to enter a
 * series of parentheses and/or braces, then indicates whether or not they're
 * properly nested:
 *
 *      Enter parentheses and/or braces: ( () {} { () } )
 *      Parentheses/braces are nested properly.
 *
 * Hint: As the program reads characters, have it push each left
 * parenthesis/brace. When it reads a right parenthesis/brace, have it pop the
 * stack and check that the item popped is a matching parenthesis/brace. (If
 * not, the parenthesis/brace aren't nested properly.) When the program reads
 * the new-line character, have it check whether the stackj is empty; if so,
 * the parentheses/braces are matched. If the stack isn't empty (or if
 * stack_underflow() is ever called), the parentheses aren't matched. If
 * stack_overflow() is called, have the program print the message:
 *
 *      Stacke overflow!
 *
 * and terminate immediately.
 *
 * ##### Notes:
 *
 * Afaik, there is no way to stop the loop before it hits 100 without using a
 * library like ncurses, or attempting things that have not yet been covered.
 * To actually stop and display "Stack overflow!" once 100 parentheses/braces
 * have been entered, you need to make your tty read from raw stdin. (I think
 * that's how it's phrased.)
 *
 * This also goes for stack_underflow()
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* External variables */
static int top = 0;

bool is_empty(void);
bool is_full(void);
void push(void);
void pop(void);
int stack_overflow(void);
int stack_underflow(void);

bool is_empty(void) {
  if (top == 0) {
    return true;
  } else {
    return false;
  }
}

bool is_full(void) {
  if (top == STACK_SIZE) {
    return true;
  } else {
    return false;
  }
}

void push(void) {
  if (is_full()) {
    stack_overflow();
  } else {
    top += 1;
  }
}

void pop(void) {
  if (is_empty()) {
    stack_underflow();
  } else {
    top -= 1;
  }
}

int stack_overflow(void) {
  printf("Stack overflow!\n");
  exit(1);
}

int stack_underflow(void) {
  printf("Parentheses/braces are not nested properly!\n");
  exit(0);
}

int main(void) {
  int c;

  printf("Enter parentheses/braces: ");
  do {
    c = getchar();
    if (c == '{' || c == '(') {
      push();
    } else if (c == '}' || c == ')') {
      pop();
    } else {
      continue;
    }
  } while (c != '\n');

  if (is_empty()) {
    printf("Parentheses/braces are nested properly!\n");
  } else {
    printf("Parentheses/braces are not nested properly!\n");
  }
  return 0;
}
