#include <stdio.h>
#include <string.h>

char *int_to_romant(int num) {
  int number = num;
  int units, tens, hundreds, thousands;
  static char numerom[64];

  numerom[0] = '\0';

  units = number % 10;
  number /= 10;
  tens = number % 10;
  number /= 10;
  hundreds = number % 10;
  number /= 10;
  thousands = number % 10;
  number /= 10;

  switch (thousands) {
  case 1:
    strcat(numerom, "M");
    break;
  case 2:
    strcat(numerom, "MM");
    break;
  case 3:
    strcat(numerom, "MMM");
    break;
  }

  switch (hundreds) {
  case 1:
    strcat(numerom, "C");
    break;
  case 2:
    strcat(numerom, "CC");
    break;
  case 3:
    strcat(numerom, "CCC");
    break;
  case 4:
    strcat(numerom, "CD");
    break;
  case 5:
    strcat(numerom, "D");
    break;
  case 6:
    strcat(numerom, "DC");
    break;
  case 7:
    strcat(numerom, "DCC");
    break;
  case 8:
    strcat(numerom, "DCCC");
    break;
  case 9:
    strcat(numerom, "CM");
    break;
  }

  switch (tens) {
  case 1:
    strcat(numerom, "X");
    break;
  case 2:
    strcat(numerom, "XX");
    break;
  case 3:
    strcat(numerom, "XXX");
    break;
  case 4:
    strcat(numerom, "XL");
    break;
  case 5:
    strcat(numerom, "L");
    break;
  case 6:
    strcat(numerom, "LX");
    break;
  case 7:
    strcat(numerom, "LXX");
    break;
  case 8:
    strcat(numerom, "LXXX");
    break;
  case 9:
    strcat(numerom, "XC");
    break;
  }

  switch (units) {
  case 1:
    strcat(numerom, "I");
    break;
  case 2:
    strcat(numerom, "II");
    break;
  case 3:
    strcat(numerom, "III");
    break;
  case 4:
    strcat(numerom, "IV");
    break;
  case 5:
    strcat(numerom, "V");
    break;
  case 6:
    strcat(numerom, "VI");
    break;
  case 7:
    strcat(numerom, "VII");
    break;
  case 8:
    strcat(numerom, "VIII");
    break;
  case 9:
    strcat(numerom, "IX");
    break;
  }

  return numerom;
}

int main() {
  int n = 3749;
  char *expected = "MMMDCCXLIX";
  char *myrom = int_to_romant(n);

  printf("\nNumber:   %i\nExpected: %s\nMy numrom: %s\n", n, expected, myrom);

  return 0;
}
