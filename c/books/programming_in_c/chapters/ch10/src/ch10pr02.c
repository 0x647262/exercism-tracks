/*
 * Write a function called insertEntry() to insert a new entry into a linked
 * list. Have the procedure take as arguments a pointer to the list entry to be
 * inserted (of type struct entry as defined in this chapter), and a pointer to
 * an element in the list after which the new entry is to be inserted.
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
  struct entry *list = &e1;

  e1.value = 1;
  e1.next = &e2;
  e2.value = 2;
  e2.next = &e3;
  e3.value = 3;
  e3.next = &e4;
  e4.value = 4;
  e4.next = (struct entry *)0;

  insert_entry(&new_entry, &e1);

  while (list != (struct entry *)0) {
    printf("%i\n", list->value);
    list = list->next;
  }

  return 0;
}
