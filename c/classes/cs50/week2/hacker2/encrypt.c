#define _XOPEN_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  printf("%s\n", crypt("zygote", "12"));

  return 0;
}
