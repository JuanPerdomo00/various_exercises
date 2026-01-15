#include <stdio.h>
#include <string.h>

char *way_to_long_words(char str[]) {
  if (strlen(str) < 10) {
    return str;
  }
  
  char first = str[0];
  char last = str[strlen(str) - 1];
  int middle_count = strlen(str) - 2;
  
  sprintf(str, "%c%d%c", first, middle_count, last);
  
  return str;
}

int main(void) {
  char word1[] = "world";
  char word2[] = "localization";
  char word3[] = "internationalization";
  char word4[] = "pneumonoultramicroscopicsilicovolcanoconiosis";
  
  printf("%s\n", way_to_long_words(word1));
  printf("%s\n", way_to_long_words(word2));
  printf("%s\n", way_to_long_words(word3));
  printf("%s\n", way_to_long_words(word4));
  
  return 0;
}
