#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool arm_detonator(int b) {
    return 3 > b;
}

void arm_missile(void) {
    bool armed = arm_detonator(3);
    if (armed) puts("missile armed");
    else puts("missile disarmed");
}

int main() {
    enum Day {MONDAY, TUESDAY, WEDNESDAY};
    enum Day today = TUESDAY; 
    switch (today) {
        case MONDAY:
            puts("It is MONDAY!\n");
            break;
        case TUESDAY:
            printf("It is TUESDAY! %d\n", today);
            break;
        default:
            puts("You died");
            break;
    }
    
    int test = 10000;
    printf("Size of %zu \n", sizeof(long));
    printf("%i", test);
    arm_missile();
    return EXIT_SUCCESS;
}
