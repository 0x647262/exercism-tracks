/*
 * Modify Program 7.14 so that the user is asked again to type in the value of
 * the base if an invalid base is entered. The modified program should continue
 * to  ask for the value of the base until a valid response is given.
 */

#include <stdio.h>

void get_number(void);
void get_base(void);
void convert_number(void);
void display_converted_number(void);

static int converted_number[64];
static long int number_to_convert;
static long int temp;
static int base;
static int digit = 0;

void get_number(void) {
  printf("Number to be converted? ");
  scanf("%li", &number_to_convert);
}

void get_base(void) {
  printf("Base? ");
  scanf("%i", &base);

  if (base < 2 || base > 16) {
    printf("Bad base - must be between 2 and 16\n");
    get_base();
  }
}

void convert_number(void) {
  temp = number_to_convert;
  do {
    converted_number[digit] = temp % base;
    ++digit;
    temp /= base;
  } while (temp != 0);
}

void display_converted_number(void) {
  const char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                                '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  int next_digit;

  printf("Converted number = ");
  for (--digit; digit >= 0; --digit) {
    next_digit = converted_number[digit];
    printf("%c", base_digits[next_digit]);
  }
  printf("\n");
}

int main(void) {
  do {
    get_number();
    if (number_to_convert == 0) {
      break;
    }
    get_base();
    convert_number();
    display_converted_number();
  } while (1);

  return 0;
}
