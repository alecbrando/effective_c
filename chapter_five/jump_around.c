#include <stdio.h>

int main() {
    // opening a file here
    // checking if the file had an issue
    // here -> 
    // while loop -> 
    // after run
    if(1) { 
        goto FAIL_FILE;
    }
    printf("Right here\n");

FAIL_FILE:
    printf("Oh man we failed\n");
    puts("Hello dog!\n");
    int count = 0;
    while (count < 5) {
        ++count;
        printf("H 19");
        continue;
        printf("NOPE");
    }

    return 0;
}
