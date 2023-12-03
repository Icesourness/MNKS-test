#include "fun.h"

int main() {
  int n = 3;

  const data_t storage0{{}};
  const data_t storage1{{1, 10}};
  const data_t storage2{{1, 10}, {1, 10}};
  const data_t storage3{{1, 10}, {1, 10}, {1, 10}};
  const data_t storage4{{1, 10}, {2, 10}, {1, 11}};
  const data_t storage5{{1, 10}, {2, 10}, {1, 11}};
  const data_t storage6{{1, 10}, {2, 11}, {1, 11}};
  const data_t storage7{{1, 10}, {2, 10}, {1, 11}, {1, 12}};
  const data_t storage8{{1, 10}, {2, 11}, {3, 11}, {4, 11}, {5, 11}, {6, 12}};
  const data_t storage9{{1, 10}, {2, 11}, {3, 11}, {4, 11},  {5, 11}, {6, 10},
                        {7, 11}, {8, 11}, {9, 11}, {10, 11}, {11, 10}};

  fun(storage0, n);
  fun(storage1, n);
  fun(storage2, n);
  fun(storage3, n);
  fun(storage4, n);
  fun(storage5, n);
  fun(storage6, n);
  fun(storage7, n);
  fun(storage8, n);
  fun(storage9, n);

  n = 4;
  fun(storage9, n);
}
