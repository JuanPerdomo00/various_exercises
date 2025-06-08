#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


bool is_palindrome(const char *str_in) {
  int len = strlen(str_in);

    for (int i = 0; i < len / 2; i++) {
        if (tolower(str_in[i]) != tolower(str_in[len - 1 - i])) {
            return false;
        }
    }
    return true;

}



int main() {
    
    const char *cadena1 = "a";
    const char *cadena2 = "aba";
    const char *cadena3 = "Abba";
    const char *cadena4 = "hello";
    
    printf("%d\n", is_palindrome(cadena1));
    printf("%d\n", is_palindrome(cadena2));
    printf("%d\n", is_palindrome(cadena3));
    printf("%d\n", is_palindrome(cadena4));


    return 0;
}
