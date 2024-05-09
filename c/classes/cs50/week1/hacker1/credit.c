// Hacker edition

#include <cs50.h>
#include <stdio.h>

int main(void) {
  printf("Number: ");
  long long cc_number = GetLongLong();
  int checksum = 0;

  int counter = 0;
  int amex = 0;
  int mastercard = 0;
  int visa = 0;
  while (cc_number > 0) {
    if (counter % 2 == 0) {
      checksum += cc_number % 10;
    } else {
      if ((cc_number % 10) * 2 >= 10) {
        int product = (cc_number % 10) * 2;
        while (product > 0) {
          checksum += product % 10;
          product /= 10;
        }
      } else {
        checksum += (cc_number % 10) * 2;
      }
    }
    cc_number /= 10;
    counter += 1;
    if (cc_number < 100) {
      switch (cc_number) {
      case 34:
      case 37:
        amex = 1;
        break;
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
        mastercard = 1;
        break;
      default:
        break;
      }
    }
    if (cc_number == 4) {
      visa = 1;
    }
  }

  if (checksum % 10 == 0) {
    if (amex == 1) {
      printf("AMEX\n");
    }
    if (mastercard == 1) {
      printf("MASTERCARD\n");
    }
    if (visa == 1) {
      printf("VISA\n");
    }
  } else {
    printf("INVALID\n");
  }
  return 0;
}
