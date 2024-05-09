/*
 * Extend the strToInt() function from Program 9.11 so that if the first
 * character of the string is a minus sign, the value that follows is taken as
 * a negative number.
 */

#include <stdio.h>

int str_to_int(const char str[]);

int str_to_int(const char str[]) {
  int i, int_value, result = 0;

  for (i = 0; (str[i] >= '0' && str[i] <= '9') || str[i] == '-'; ++i) {
    if (str[i] == '-') {
      continue;
    }
    int_value = str[i] - '0';
    result = result * 10 + int_value;
  }
  if (str[0] == '-') {
    result = -result;
  }

  return result;
}

int main(void) {
  printf("%i\n", str_to_int("245"));
  printf("%i\n", str_to_int("-245"));
  printf("%i\n", str_to_int("100") + 25);
  printf("%i\n", str_to_int("-100") + 25);
  printf("%i\n", str_to_int("13x5"));
  printf("%i\n", str_to_int("-13x5"));

  return 0;
}
