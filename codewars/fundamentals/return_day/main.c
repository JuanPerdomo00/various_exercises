#include <stdio.h>

const char *whatday(int num) {
  switch (num) {
  case 1:
    return "Sunday";
  case 2:
    return "Monday";
  case 3:
    return "Tuesday";
  case 4:
    return "Wednesday";
  case 5:
    return "Thursday";
  case 6:
    return "Friday";
  case 7:
    return "Saturday";
  default:
    return "Wrong, please enter a number between 1 and 7";
  }
}

int main(void) {
  int i = 1;
  while (i <= 8) {
    printf("%s\n", whatday(i));
    i++;
  }

  return 0;
}
