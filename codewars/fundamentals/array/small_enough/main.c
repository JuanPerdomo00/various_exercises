#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

#define SIZE(arr) (sizeof(arr) / sizeof(int))

bool small_enough(int *arr, size_t length, int limit) {
  int i = 0;
  while (*arr <= limit && i < length) {
    arr++;
    i++;
  }

  return i == length;
}

int main(void) {
  int arr0[] = {66, 101};
  int arr1[] = {78, 117, 110, 99, 104, 117, 107, 115};
  int arr2[] = {101, 45, 75, 105, 99, 107};
  int arr3[] = {80, 117, 115, 104, 45, 85, 112, 115};

  assert(small_enough(arr0, SIZE(arr0), 200) == true);
  assert(small_enough(arr1, SIZE(arr1), 100) == false);
  assert(small_enough(arr2, SIZE(arr2), 107) == true);
  assert(small_enough(arr3, SIZE(arr3), 120) == true);
  printf("Ok\n");

  return 0;
}
