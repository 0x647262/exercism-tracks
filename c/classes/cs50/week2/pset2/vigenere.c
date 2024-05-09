#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

#define UPPER_A 65
#define LOWER_A 97

void encrypt(string keyword, string message);

void encrypt(string keyword, string message) {
  int kwlen = 0;
  for (int i = 0; keyword[i] != '\0'; i += 1) {
    kwlen += 1;
  }

  char encoded;
  int j = 0;
  for (int i = 0; message[i] != '\0'; i += 1) {
    if (isupper(message[i])) {
      encoded = message[i] - UPPER_A;
      encoded += (toupper(keyword[j % kwlen]) - UPPER_A);
      encoded = encoded % 26;
      message[i] = encoded + UPPER_A;
    } else if (islower(message[i])) {
      encoded = message[i] - LOWER_A;
      encoded += (tolower(keyword[j % kwlen]) - LOWER_A);
      encoded = encoded % 26;
      message[i] = encoded + LOWER_A;
    } else {
      continue;
    }
    if (message[i] != ' ') {
      j += 1;
    }
  }
}

int main(int argc, char *argv[argc + 1]) {
  if (argc != 2) {
    printf("Cipher not supplied!\n");
    return 1;
  }
  for (int i = 0; argv[1][i] != '\0'; i += 1) {
    if (toupper(argv[1][i]) < 65 || toupper(argv[1][i]) > 90) {
      printf("Invalid cipher!\n");
      return 1;
    }
  }

  string cipher = argv[1];
  string message = GetString();
  encrypt(cipher, message);

  printf("%s\n", message);

  return 0;
}
