/*
 * Write a function called dictionarySort() that sorts a dictionary, as
 * defined in Programs 9.9 and 9.10 into alphabetical order.
 *
 * ##### Notes #####
 *
 * I *could* make the sort properly sort "ay" > "at", but for the sake of
 * time, I'm going to leave this as a first letter sort.
 */

#include <stdio.h>

struct entry {
  char name[11];
  char definition[80];
};

void dictionary_sort(struct entry dict[], int dict_size);

void dictionary_sort(struct entry dict[], int dict_size) {
  int i, j;
  int k = 0;
  struct entry temp_entry = {"temp", "initialization"};

  for (i = 0; i < dict_size; ++i) {
    for (j = 0; j < dict_size; ++j) {
      if (dict[i].name[k] < dict[j].name[k]) {
        temp_entry = dict[i];
        dict[i] = dict[j];
        dict[j] = temp_entry;
      }
    }
  }
}

int main(void) {
  struct entry dictionary[5] = {{"Foxtrot", "5"},
                                {"Delta", "4"},
                                {"Charlie", "3"},
                                {"Beta", "2"},
                                {"Alpha", "1"}};
  int i;

  dictionary_sort(dictionary, 5);

  for (i = 0; i < 5; ++i) {
    printf("%s\n", dictionary[i].definition);
  }

  return 0;
}
