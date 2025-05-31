#include <stdio.h>

int simple_multiplication(int number) {
    // your code
    return number % 2 == 0 ? number * 8 : number * 9;

}


int main() {
    int i = 1;
    for (i; i < 20; i++) {
        if (i % 2 == 0) {
            printf("Par N: %d * 8 = %d\n", i, simple_multiplication(i));
        } else {
            printf("Impar N: %d * 9 = %d\n", i, simple_multiplication(i));
        }
    }
    return 0;
}
