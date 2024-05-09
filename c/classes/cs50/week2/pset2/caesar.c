#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

#define UPPER_A 65
#define LOWER_A 97

void encrypt(int n, string message);

void encrypt(int n, string message) {
  char encoded;
  for (int i = 0; message[i] != '\0'; i += 1) {
    if (isupper(message[i])) {
      encoded = message[i] - UPPER_A;
      encoded = (encoded + n) % 26;
      message[i] = encoded + UPPER_A;
    } else if (islower(message[i])) {
      encoded = message[i] - LOWER_A;
      encoded = (encoded + n) % 26;
      message[i] = encoded + LOWER_A;
    } else {
      continue;
    }
  }
}

int main(int argc, char *argv[argc + 1]) {
  if (argc != 2) {
    printf("Cipher not supplied!\n");
    return 1;
  }
  int cipher = atoi(argv[1]);
  string message = GetString();
  encrypt(cipher, message);

  printf("%s\n", message);

  return 0;
}
