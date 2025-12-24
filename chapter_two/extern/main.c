#include <stdio.h>
#include "shared.h"


extern int public_counter;
extern int num;

int main(void) {
    printf("Initial public_counter: %d\n", public_counter);

    increment_counters();
    increment_counters();
    auto a = 3;
    printf("Updated public_counter: %d\n", public_counter);
    printf("Updated num: %d\n", num);

    print_private_counter();


    return 0;
}
