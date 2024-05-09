/*
 * Modify the upc.c program of Section 4.1 so that it checks whether a UPC is
 * valid. After the user enters a UPC, the program will display either VALID or
 * NOT VALID.
 */

#include <stdio.h>

int main(void) {
  int type;
  int m1, m2, m3, m4, m5;
  int i1, i2, i3, i4, i5;
  int check;
  int checksum1;
  int checksum2;
  int test_check;

  printf("Enter your UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &type, &m1, &m2, &m3, &m4, &m5,
        &i1, &i2, &i3, &i4, &i5, &check);
  checksum1 = type + m2 + m4 + i1 + i3 + i5;
  checksum2 = m1 + m3 + m5 + i2 + i4;
  checksum1 *= 3;
  checksum2 += checksum1;
  checksum2 -= 1;
  checksum2 = checksum2 % 10;
  test_check = 9 - checksum2;
  if (test_check == check) {
    printf("VALID\n");
  } else {
    printf("NOT VALID\n");
  }

  return 0;
}
