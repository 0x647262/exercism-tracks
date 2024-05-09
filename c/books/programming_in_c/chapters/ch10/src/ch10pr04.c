/*
 * Write a function called removeEntry() to remove an entry from a linked list.
 * The sole argument to the procedure should be a pointer to the list
 * (Entry???). Have the function remove the entry after the one pointed to by
 * the argument. (Why can't you remove the first entry pointed to be the
 * argument?) You need to use the special structure you set up in exercise 3 to
 * handle the special case of removing the first element from the list.
 *
 * ########## NOTES ##########
 *
 * Why can't you remove the first entry pointed to be the argument?
 *
 * Visualizing the list (Assumming no "beginning" structure exists):
 *
 * e1 -> e2 -> e3 -> e4 -> NULL
 *
 * Looking at the values, they only point one way. The entry you pass has no
 * way of linking the previous entry in the list to the next entry. Ex.) e2
 * cannot link e1 to e3.
 */

#include <stdio.h>

struct entry {
  int value;
  struct entry *next;
};

void remove_entry(struct entry *deleted);

void remove_entry(struct entry *deleted) {
  deleted->next = (deleted->next)->next;
}

int main(void) {
  struct entry e1, e2, e3, e4;
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

  remove_entry(&e3);

  list = list->next;
  while (list != (struct entry *)0) {
    printf("%i\n", list->value);
    list = list->next;
  }

  return 0;
}
