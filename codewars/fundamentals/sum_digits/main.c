#include <assert.h>
#include <stdio.h>
int sum_digits(int n) {
  int sum = 0;

  while (n != 0) {
    int last = n % 10;

    sum += last;

    n /= 10;
  }

  if (sum < 0) {
    return ~sum + 1;
  }

  return sum;
}

int main() {
  assert(sum_digits(10) == 1);
  assert(sum_digits(99) == 18);
  assert(sum_digits(100) == 1);
  assert(sum_digits(-32) == 5);

  printf("%d\n", sum_digits(10));
  printf("%d\n", sum_digits(99));
  printf("%d\n", sum_digits(100));
  printf("%d\n", sum_digits(5));

  return 0;
}
