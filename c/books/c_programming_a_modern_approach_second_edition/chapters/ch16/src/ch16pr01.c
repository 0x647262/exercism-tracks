/*
 * Write a program that asks the user to enter an international dialing code
 * and then looks it up in the country_codes array (see Section 16.3). If it
 * finds the code, the program should display the name of the corresponding
 * country; if not, the program should print an error message.
 */

#include <stdbool.h>
#include <stdio.h>

// Update this value as new codes are added!
#define CODES 32

typedef struct {
  char *country;
  int code;
} dialing_code;

static const dialing_code country_codes[] = {
    {"Argentina", 54},
    {"Bangladesh", 880},
    {"Brazil", 55},
    {"Burma (Myanmar)", 95},
    {"China", 86},
    {"Columbia", 57},
    {"Congo, Dem. Rep. of.", 243},
    {"Egypt", 20},
    {"Ethiopia", 251},
    {"France", 33},
    {"Germany", 49},
    {"India", 91},
    {"Indonesia", 62},
    {"Iran", 98},
    {"Italy", 39},
    {"Japan", 81},
    {"Mexico", 52},
    {"Nigeria", 234},
    {"Pakistan", 92},
    {"Philippines", 63},
    {"Poland", 48},
    {"Russia", 7},
    {"South Africa", 27},
    {"South Korea", 82},
    {"Spain", 34},
    {"Sudan", 249},
    {"Thailand", 66},
    {"Turkey", 90},
    {"Ukraine", 380},
    {"United Kingdom", 44},
    {"United States", 1},
    {"Vietnam", 84},
};

int find_country_code(int code);

int find_country_code(int code) {
  for (int i = 0; i < CODES; i += 1) {
    if (code == country_codes[i].code) {
      return i;
    }
  }
  return -1;
}

int main(void) {
  printf("Please enter a country code: ");
  int code;
  scanf(" %d", &code);

  code = find_country_code(code);
  if (code > 0) {
    printf("Corresponding country: %s\n", country_codes[code].country);
  } else {
    printf("Error: No corresponding country found!\n");
  }

  return 0;
}
