#include <stdio.h>

void sort_ascending (size_t length, int array[length]) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j+1]) {
                int aux = array[j];
                array[j] = array[j+1];
                array[j + 1] = aux;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        printf("%d\n", array[i]);
    }
}

int main() {

    int array[5] = {1,2,10,50,5};
    int array_2[6] = {0,3,1,4,2,5};
    int array_3[10] = {1,0,3,6,9,11,10,5,22,100};
    int array_4[5] = {-30, -8, 3, 16, 22};

    printf("=================\n");
    printf("Arr [1,2,10,50,5]\n");
    sort_ascending(5, array);

    printf("=================\n");
    printf("Arr [0,3,1,4,2,5]\n");
    sort_ascending(6, array_2);

    printf("=================\n");
    printf("Arr [1,0,3,6,9,11,10,5,22,100]\n");
    sort_ascending(10, array_3);

    printf("=================\n");
    printf("Arr [-30, -8, 3,16, 22]\n");
    sort_ascending(5, array_4);

    printf("================\n");
    return 0;
}

