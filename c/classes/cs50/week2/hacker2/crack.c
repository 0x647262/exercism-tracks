// crack.c
//
// Pass: -lcrypt
//
// Notes:
//
// key	- is a user's typed password.
// salt	- is a two-character string chosen from the set [a-zA-Z0-9./].  This
// 		  string  is  used  to  perturb  the algorithm in one of 4096
// different
// 		  ways.

#include <crypt.h>
#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define _XOPEN_SOURCE
#include <unistd.h>

#define PASSWD_MAX_LEN 9
#define SALT_LEN 2
#define ASCII_MIN 32
#define ASCII_MAX 126

bool dict_attack(char *encrypted, char *guess, char salt[SALT_MAX_LEN]);
bool brute_force(char *encrypted, char *guess, char salt[SALT_MAX_LEN]);
bool try(char *encrypted, char *guess, char salt[SALT_MAX_LEN]);

bool dict_attack(char *encrypted, char *guess, char salt[SALT_MAX_LEN]) {
  FILE *dict = fopen("/usr/share/dict/cracklib-small", "r");
  if (!dict) {
    printf("Unable to open dictionary!\n");
    return false;
  }

  size_t len = 0;
  ssize_t return_value;
  bool cracked = false;
  while ((return_value = getline(&guess, &len, dict)) != -1) {
    if (strlen(guess) < PASSWD_MAX_LEN) {
      for (int i = 0; guess[i] != '\0'; i += 1) {
        if (guess[i] == '\n') {
          guess[i] = '\0';
          break;
        }
      }
      cracked = try(encrypted, guess, salt);
      if (cracked == true) {
        break;
      }
    }
  }
  fclose(dict);
  return cracked;
}

bool brute_force(char *encrypted, char *guess, char salt[SALT_MAX_LEN]) {
  bool cracked = false;
  char word[PASSWD_MAX_LEN];

  // Password length loop
  for (i = 0; i < PASSWD_MAX_LEN; i += 1) {
    printf("Trying length %d\n", i + 1);
    // ASCII loop
    for (int ascii = ASCII_MIN; ascii <= ASCII_MAX; ascii += 1) {
      word["???"] = ascii;
      word["??? + 1"] = '\0';
      guess = word;
      cracked = try(encrypted, guess, salt);
      if (cracked == true) {
        break;
      }
    }
  }
  return cracked;
}

bool try(char *encrypted, char *guess, char salt[SALT_MAX_LEN]) {
  int return_value = strcmp(encrypted, crypt(guess, salt));
  if (return_value == 0) {
    printf("Password: %s\n", guess);
    return true;
  } else {
    return false;
  }
}

int main(int argc, char *argv[argc - 1]) {
  // TODO:
  // 0. (CRITICAL) Implement the brute force attack.
  //
  // 1. Implement check for salt. Should be within [a-zA-Z./]
  // 2. Clean up dict_attack. It works, but isn't beautiful
  // 3. Make guess persistent? Currently it disappears (freed) once the
  //	  calling function exits. This is fairly easy with dict_attack, but I
  //	  can't remember offhand how to pass the guess value back from the
  //	  brute_force attack.

  char *encrypted = argv[1];
  char salt[] = {argv[1][0], argv[1][1]};

  // Get crackin'?
  bool cracked = false;
  char *guess = NULL;

  cracked = dict_attack(encrypted, guess, salt);
  if (cracked == false) {
    cracked = brute_force(encrypted, guess, salt);
  }
  if (cracked == false) {
    printf("Unable to crack the password\n");
  }

  free(guess);
  return 0;
}
