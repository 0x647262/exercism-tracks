/*
 * Develop insertEntry() and removeEntry() functions for a doubly linked list
 * that are similar in function to to those developed in previous exercises for
 * a singly linked list. Why can your removeEntry() function now take as its
 * argument a direct pointer to the entry to be removed from the list?
 */

#include <stdio.h>

struct entry {
  struct entry *prev;
  int value;
  struct entry *next;
};

void insert_entry(struct entry *node, struct entry *new);
void remove_entry(struct entry *node);

void insert_entry(struct entry *node, struct entry *new) {
  printf("Please enter an integet value: ");
  scanf("%i", &new->value);

  new->prev = node;
  new->next = node->next;
  node->next->prev = new;
  node->next = new;
}

void remove_entry(struct entry *node) {
  node->prev->next = node->next;
  node->next->prev = node->prev;
}

int main(void) {
  struct entry start, end, one, two, three, four, five, new;
  struct entry *list;

  start.prev = (struct entry *)0;
  start.next = &one;
  one.prev = &start;
  one.value = 1;
  one.next = &two;
  two.prev = &one;
  two.value = 2;
  two.next = &three;
  three.prev = &two;
  three.value = 3;
  three.next = &four;
  four.prev = &three;
  four.value = 4;
  four.next = &five;
  five.prev = &four;
  five.value = 5;
  five.next = &end;
  end.prev = &five;
  end.next = (struct entry *)0;

  remove_entry(&three);
  insert_entry(&two, &new);

  list = start.next;
  while (list->next != (struct entry *)0) {
    printf("%i\n", list->value);
    list = list->next;
  }

  printf("\n");

  list = end.prev;
  while (list->prev != (struct entry *)0) {
    printf("%i\n", list->value);
    list = list->prev;
  }

  return 0;
}
