/*
 * A doubly linked list is a list in which each entry contains a pointer to the
 * preceding entry as well as a pointer to the list. Define the appropriate
 * structure definition for a doubly linked list entry and the write a small
 * program that implements a small doubly linked list, and prints out the
 * elements of the list.
 */

#include <stdio.h>

struct entry {
  struct entry *prev;
  int value;
  struct entry *next;
};

int main(void) {
  struct entry one, two, three, four, five;
  struct entry list;

  one.prev = (struct entry *)0;
  one.value = 1;
  one.next = &two;
  two.prev = &one;
  two.value = 2;
  two.next = &three;
  three.prev = &two;
  three.value = 2;
  three.next = &four;
  four.prev = &three;
  four.value = 4;
  four.next = &five;
  five.prev = &four;
  five.value = 5;
  five.next = (struct entry *)0;

  list = one;
  while (list.next != (struct entry *)0) {
    printf("%i\n", list.value);
    list = *list.next;
    if (list.next == (struct entry *)0) {
      printf("%i\n", list.value);
    }
  }
  while (list.prev != (struct entry *)0) {
    printf("%i\n", list.value);
    list = *list.prev;
    if (list.prev == (struct entry *)0) {
      printf("%i\n", list.value);
    }
  }

  return 0;
}
