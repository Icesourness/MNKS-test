#include "fun.h"

int main() {
  int n = 3;

  const data_t storage_0{{}};
  const data_t storage_1{{1, 10}};
  const data_t storage_2{{1, 10}, {1, 10}};
  const data_t storage_3{{1, 10}, {1, 10}, {1, 10}};
  const data_t storage_4{{1, 10}, {2, 10}, {1, 11}};
  const data_t storage_5{{1, 10}, {2, 10}, {1, 11}};
  const data_t storage_6{{1, 10}, {2, 11}, {1, 11}};
  const data_t storage_7{{1, 10}, {2, 10}, {1, 11}, {1, 12}};
  const data_t storage_8{{1, 10}, {2, 11}, {3, 11}, {4, 11}, {5, 11}, {6, 12}};
  const data_t storage_9{{1, 10}, {2, 11}, {3, 11}, {4, 11},  {5, 11}, {6, 10},
                        {7, 11}, {8, 11}, {9, 11}, {10, 11}, {11, 10}};

  fun(storage_0, n);
  fun(storage_1, n);
  fun(storage_2, n);
  fun(storage_3, n);
  fun(storage_4, n);
  fun(storage_5, n);
  fun(storage_6, n);
  fun(storage_7, n);
  fun(storage_8, n);
  fun(storage_9, n);

  n = 4;
  fun(storage_9, n);
}
