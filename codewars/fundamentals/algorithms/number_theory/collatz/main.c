#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *collatz(int n) {
  size_t cap = 64;
  size_t len = 0;
  char *buf = malloc(cap);
  if (!buf)
    return NULL;
  buf[0] = '\0';

  while (n != 1) {
    char tmp[32];
    int writing;
    if (n % 2 == 0) {
      writing = snprintf(tmp, sizeof(tmp), "%d->", n);
      n /= 2;
    } else {
      writing = snprintf(tmp, sizeof(tmp), "%d->", n);
      n = n * 3 + 1;
    }

    if (len + (size_t)writing + 1 > cap) {
      while (len + (size_t)writing + 1 > cap)
        cap *= 2;
      char *new = realloc(buf, cap);
      if (!new) {
        free(buf);
        return NULL;
      }
      buf = new;
    }

    memcpy(buf + len, tmp, writing);
    len += writing;
    buf[len] = '\0';
  }

  if (len + 2 > cap) {
    cap = len + 2;
    char *new = realloc(buf, cap);
    if (!new) {
      free(buf);
      return NULL;
    }
    buf = new;
  }
  buf[len++] = '1';
  buf[len] = '\0';

  return buf;
}

int main(void) {
  char *r4 = collatz(4);
  printf("%s\n", r4);
  free(r4);

  char *r3 = collatz(3);
  printf("%s\n", r3);
  assert(strcmp("3->10->5->16->8->4->2->1", r3) == 0);
  free(r3);

  return 0;
}
