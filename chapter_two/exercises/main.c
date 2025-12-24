#include <stdio.h>
#include <stdlib.h>

static unsigned int counter = 0;

void increment(void) {
    counter++;
    printf("%d ", counter);
}

unsigned int retrieve_counter() {
   return counter; 
}

int testing() {
    puts("First case");
    return 0;
}

int testing_two() {
    puts("Second case");
    return 0;
}

int testing_three() {
    puts("Third case");
    return 0;
}

void what_function(int index) {
    int (*test[])() = {testing, testing_two, testing_three};
    switch(index) {
        case 0:
            test[0]();
            break;
        case 1:
            test[1]();
            break;
        case 2:
            test[2]();
            break;
        default:
            test[1]();
            break;
    };
}

int main() {
    //for (int i = 0; i < 5; i++) {
    //    increment();
    //}

    //puts("Grabbing Counter");
    //unsigned int retrieved = retrieve_counter();
    //printf("We get it boys! %d address %p", retrieved, &retrieved);
    //int num;
    //scanf("%d", &num);
    //what_function(num); 
    return EXIT_SUCCESS;
}


// control v + down to selection + (shift + i) + // + esc
