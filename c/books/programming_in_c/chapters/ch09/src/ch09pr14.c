/*
 * Write a function called strToInt() that converts an integer value into a
 * character string. Be certian the function handles negative integers
 * properly.
 *
 * ##### Notes #####
 *
 * At the end of this chapter I hit a bit of a mental block at the end of this
 * chapter. I created my own program that was able to do every number except
 * 100, 200, 300 etc.
 *
 * I have since revised that program with the help I found online.
 *
 * Modified from:
 * https://stackoverflow.com/questions/9655202/how-to-convert-integer-to-string-in-c
 */

#include <stdio.h>

void str_to_int(int num);

void str_to_int(int num) {
  int i = 0;
  int length = 0;
  int sum;
  char const digits[] = "0123456789";
  char str[81];

  if (num < 0) {
    str[i] = '-';
    ++length;
    num = -num;
  }

  sum = num;
  do {
    ++length;
    sum /= 10;
  } while (sum);
  str[length] = '\0';

  do {
    --length;
    str[length] = digits[num % 10];
    num /= 10;
  } while (num);

  printf("%s\n", str);
}

int main(void) {
  str_to_int(200);
  str_to_int(200);
  str_to_int(245);
  str_to_int(-245);

  return 0;
}
