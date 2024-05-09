/*
 * Write a program that prompts the user for a number and then displays the
 * number using characters to simulate the effect of a seven-segment display:
 *
 *      Enter a number: 491-9014
 *           _      _   _
 *      |_| |_|  | |_| | |  | |_|
 *        |  _|  |  _| |_|  |   |
 *
 * Characters other than digits should be ignored. Write the program so that
 * the maximum number of digits is controlled by a macro named MAX_DIGITS,
 * which has the value of 10. If the number contains more than this number of
 * digits, the extra digits are ignored.
 *
 * Hints: Use 2 external arrays. One is the segments[] array (see Exercise 6 in
 * Chapter 8), which stores data representing the correspondence between digits
 * and segments. The other array, digits[] will be an array of characters with
 * 4 rows (since each segmented digit is 4 characters high) and MAX_DIGITS * 4
 * columns (digits are 3 characters wide, but a space is needed between digits
 * for readability). Write your program as four functions: main(),
 * clear_digits_array(), process_digit(), and print_digits_array(). Here are
 * the prototypes for the latter 3 functions:
 *
 *      void clear_digits_array(void);
 *      void process_digit(int digit, int position);
 *      void print_digits_array(void);
 *
 * clear_digits_array() will store blank characters into all elements of the
 * digits[] array. process_digit[] will store the seven-segment representation
 * of digit into a specified position in the digits[] array (positions range
 * from 0 to MAX_DIGITS - 1). print_digits_array() will display the rows of the
 * digits[] array, each on a single line, producing output such as that shown
 * in the example.
 */

#include <stdio.h>

#define MAX_DIGITS 7

static int digits[3][MAX_DIGITS * 4];
static int segments[MAX_DIGITS][7];

void clear_digits_array(void);
void process_digit(int, int);
void print_digits_array(void);

int main(void) {
  int digit = 0;

  clear_digits_array();
  while (digit < MAX_DIGITS) {
    int input = getchar();
    if (input <= '9' && input >= '0') {
      process_digit(input, digit);
      digit += 1;
    } else if (input == '\n') {
      break;
    } else {
      continue;
    }
  }
  print_digits_array();

  return 0;
}

void clear_digits_array(void) {
  for (int i = 0; i < 3; i += 1) {
    for (int j = 0; j < MAX_DIGITS * 4; j += 1) {
      digits[i][j] = ' ';
    }
  }
}

void process_digit(int num, int pos) {
  switch (num) {
  case '0':
    // 1, 1, 1, 1, 1, 1, 0
    segments[pos][0] = 1;
    segments[pos][1] = 1;
    segments[pos][2] = 1;
    segments[pos][3] = 1;
    segments[pos][4] = 1;
    segments[pos][5] = 1;
    segments[pos][6] = 0;
    break;
  case '1':
    // 0, 1, 1, 0, 0, 0, 0
    segments[pos][0] = 0;
    segments[pos][1] = 1;
    segments[pos][2] = 1;
    segments[pos][3] = 0;
    segments[pos][4] = 0;
    segments[pos][5] = 0;
    segments[pos][6] = 0;
    break;
  case '2':
    // 1, 1, 0, 1, 1, 0, 1
    segments[pos][0] = 1;
    segments[pos][1] = 1;
    segments[pos][2] = 0;
    segments[pos][3] = 1;
    segments[pos][4] = 1;
    segments[pos][5] = 0;
    segments[pos][6] = 1;
    break;
  case '3':
    // 1, 1, 1, 1, 0, 0, 1
    segments[pos][0] = 1;
    segments[pos][1] = 1;
    segments[pos][2] = 1;
    segments[pos][3] = 1;
    segments[pos][4] = 0;
    segments[pos][5] = 0;
    segments[pos][6] = 1;
    break;
  case '4':
    // 0, 1, 1, 0, 0, 1, 1
    segments[pos][0] = 0;
    segments[pos][1] = 1;
    segments[pos][2] = 1;
    segments[pos][3] = 0;
    segments[pos][4] = 0;
    segments[pos][5] = 1;
    segments[pos][6] = 1;
    break;
  case '5':
    // 1, 0, 1, 1, 0, 1, 1
    segments[pos][0] = 1;
    segments[pos][1] = 0;
    segments[pos][2] = 1;
    segments[pos][3] = 1;
    segments[pos][4] = 0;
    segments[pos][5] = 1;
    segments[pos][6] = 1;
    break;
  case '6':
    // 1, 0, 1, 1, 1, 1, 1
    segments[pos][0] = 1;
    segments[pos][1] = 0;
    segments[pos][2] = 1;
    segments[pos][3] = 1;
    segments[pos][4] = 1;
    segments[pos][5] = 1;
    segments[pos][6] = 1;
    break;
  case '7':
    // 1, 1, 1, 0, 0, 0, 0
    segments[pos][0] = 1;
    segments[pos][1] = 1;
    segments[pos][2] = 1;
    segments[pos][3] = 0;
    segments[pos][4] = 0;
    segments[pos][5] = 0;
    segments[pos][6] = 0;
    break;
  case '8':
    // 1, 1, 1, 1, 1, 1, 1
    segments[pos][0] = 1;
    segments[pos][1] = 1;
    segments[pos][2] = 1;
    segments[pos][3] = 1;
    segments[pos][4] = 1;
    segments[pos][5] = 1;
    segments[pos][6] = 1;
    break;
  case '9':
    // 1, 1, 1, 1, 0, 1, 1
    segments[pos][0] = 1;
    segments[pos][1] = 1;
    segments[pos][2] = 1;
    segments[pos][3] = 1;
    segments[pos][4] = 0;
    segments[pos][5] = 1;
    segments[pos][6] = 1;
    break;
  default:
    break;
  }

  int offset = 4;
  if (segments[pos][0] == 1) {
    digits[0][(pos * offset) + 1] = '_';
  }
  if (segments[pos][1] == 1) {
    digits[1][(pos * offset) + 2] = '|';
  }
  if (segments[pos][2] == 1) {
    digits[2][(pos * offset) + 2] = '|';
  }
  if (segments[pos][3] == 1) {
    digits[2][(pos * offset) + 1] = '_';
  }
  if (segments[pos][4] == 1) {
    digits[2][(pos * offset)] = '|';
  }
  if (segments[pos][5] == 1) {
    digits[1][(pos * offset)] = '|';
  }
  if (segments[pos][6] == 1) {
    digits[1][(pos * offset) + 1] = '_';
  }
}

void print_digits_array(void) {
  for (int i = 0; i < 3; i += 1) {
    for (int j = 0; j < MAX_DIGITS * 4; j += 1) {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }
}
