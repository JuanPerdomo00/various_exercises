#include <assert.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

#define SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

int find_deleted_number(const int arr[], size_t arr_sz, const int mix_arr[],
                        size_t mix_sz) {
  int flag, find_num = 0;
  for (int i = 0; i < arr_sz; i++) {
    flag = 0;
    for (int j = 0; j < mix_sz; j++) {
      if (arr[i] == mix_arr[j]) {
        flag = 1;
        break;
      }
    }
    if (!flag) {
      find_num = arr[i];
      break;
    }
  }

  return find_num;
}

int main() {
  const int arr[] = {1, 2, 3, 4, 5}, mixedArr[] = {3, 4, 1, 5};
  const int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9},
            mixedArr2[] = {1, 9, 7, 4, 6, 2, 3, 8};

  printf("%d\n", find_deleted_number(arr, SIZE(arr), mixedArr, SIZE(mixedArr)));
  printf("%d\n",
         find_deleted_number(arr2, SIZE(arr2), mixedArr2, SIZE(mixedArr2)));

  return 0;
}
