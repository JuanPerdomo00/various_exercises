#include <stddef.h>
#include <stdio.h>
#include <string.h>


size_t str_count(const char *str, char letter) {
    int i, ocur = 0, len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] == letter) {
            ocur++;
        }
    
    }
    return ocur;
}


int main() {
    const char *str = "Hello";
    char letter = ' ';

    printf("%d", str_count(str, letter));
    return 0;
}
