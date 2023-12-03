#include "fun.h"

#include <iostream>

void fun(data_t storage, int n) {
  assert(n > 2 && "n <= 2");
  assert(storage.size() && "Empty storage");
  printf("Before: ");
  for (const auto &s : storage) {
    printf("(%i, %i) ", s.first, s.second);
  }
  printf("\nAfter: ");
  for (size_t i = 0; i < storage.size(); ++i) {
    int count = 1;
    printf("(%i, %i) ", storage[i].first, storage[i].second);

    while (i < storage.size() - 1 &&
           storage[i].second == storage[i + 1].second) {
      ++i;
      ++count;
      if (count % n == 0) {
        printf("(%i, %i) ", storage[i].first, storage[i].second);
      } else if (count % n != 0 && storage[i].second != storage[i + 1].second) {
        printf("(%i, %i) ", storage[i].first, storage[i].second);
      }
    }
  }
  printf("\n");
}