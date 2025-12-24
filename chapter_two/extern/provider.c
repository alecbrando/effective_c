#include <stdio.h>
#include "shared.h"

// Should be able to access
int public_counter = 100;
// I shouldn't be able to access
static int private_counter = 0;
int num = 100;

void increment_counters(void) {
    public_counter++;
    private_counter++;
}


void print_private_counter(void){
    // Shows the private variable value to the other side
    printf("Provier's private_counter: %d %d\n", private_counter, num);
}
