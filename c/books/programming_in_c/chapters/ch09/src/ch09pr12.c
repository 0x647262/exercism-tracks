/*
 * Extend the strToInt() function from Program 9.11 so that if the first
 * character of the string is a minus sign, the value that follows is taken as
 * a negative number.
 */

#include <stdio.h>

float str_to_float(const char str[]);

float str_to_float(const char str[]) {
  int i;
  int dec_count = 0;
  float value;
  float result = 0;

  for (i = 0;
       (str[i] >= '0' && str[i] <= '9') || str[i] == '-' || str[i] == '.';
       ++i) {
    if (str[i] == '-') {
      continue;
    }
    if (str[i] == '.') {
      dec_count = 1;
      continue;
    }
    if (dec_count > 0) {
      ++dec_count;
    }
    value = str[i] - '0';
    result = result * 10 + value;
  }

  while (dec_count > 1) {
    result /= 10.00;
    --dec_count;
  }

  if (str[0] == '-') {
    result = -result;
  }

  return result;
}

int main(void) {
  printf("%.3f\n", str_to_float("245.15"));
  printf("%.3f\n", str_to_float("-245.15"));
  printf("%.3f\n", str_to_float("100.55") + 25);
  printf("%.3f\n", str_to_float("100") + 25);

  return 0;
}
