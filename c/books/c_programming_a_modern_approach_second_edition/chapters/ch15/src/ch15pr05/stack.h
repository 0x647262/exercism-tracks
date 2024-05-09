#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

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
void input(void);
void calculate(int operator);
void display(void);

#endif
