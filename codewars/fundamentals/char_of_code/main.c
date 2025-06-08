#include <stdio.h>

char char_of_code(unsigned charcode) {
    return charcode;
}


int main() {
    unsigned code;
    scanf("%u", &code);
    printf("%c", char_of_code(code));
    return 0;
}
