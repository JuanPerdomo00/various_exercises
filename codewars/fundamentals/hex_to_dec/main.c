#include <stdio.h>
#include <stdlib.h>

int hex_to_dec(const char *source) {
  long result = strtol(source, NULL, 16);
  return (int)result;
}

int main(void) {
  printf("%d\n", hex_to_dec("0"));
  printf("%d\n", hex_to_dec("12345"));
  printf("%d\n", hex_to_dec("-12345"));
  return 0;
}
