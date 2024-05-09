/*
 * The function developed in exercise 2 only inserts an element after an
 * existing element in the list, thereby preventing you from inserting a new
 * entry at the front of the list. How can you use this same function and yet
 * overcome this problem? (Hint: Think about setting up a special structure to
 * point to the beginning of the list.)
 */

#include <stdio.h>

struct entry {
  int value;
  struct entry *next;
};

void insert_entry(struct entry *new_entry, struct entry *prev_entry);

void insert_entry(struct entry *new_entry, struct entry *prev_entry) {
  printf("Please enter a integer value for your new entry: ");
  scanf("%i", &new_entry->value);

  new_entry->next = prev_entry->next;
  prev_entry->next = new_entry;
}

int main(void) {
  struct entry e1, e2, e3, e4;
  struct entry new_entry;
  struct entry first_entry;
  struct entry *list = &first_entry;

  first_entry.next = &e1;
  e1.value = 1;
  e1.next = &e2;
  e2.value = 2;
  e2.next = &e3;
  e3.value = 3;
  e3.next = &e4;
  e4.value = 4;
  e4.next = (struct entry *)0;

  insert_entry(&new_entry, &e4);

  list = list->next;
  while (list != (struct entry *)0) {
    printf("%i\n", list->value);
    list = list->next;
  }

  return 0;
}
