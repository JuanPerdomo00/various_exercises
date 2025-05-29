#include <stdio.h>


unsigned rental_car_cost(unsigned d) {
    unsigned cost = 40u;
    unsigned  total;
    
    if (d < 3) {
        return cost * d;
    } else if (d >= 7) {
        return cost * d - 50u;
    } else if (d >= 3) {
        return cost * d - 20u;
    } else {
        return 0u;
    }

}


int main() {
    unsigned v1,v2,v3,v4,v5;

    v1 = 1u;
    v2 = 2u;
    v3 = 5u;
    v4 = 9u;
    v5 = 0u;

    printf("%d\n", rental_car_cost(v1));
    printf("%d\n", rental_car_cost(v2));
    printf("%d\n", rental_car_cost(v3));
    printf("%d\n", rental_car_cost(v4));
    printf("%d\n", rental_car_cost(v5));
}
