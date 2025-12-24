#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

int main() {
    int a = 21;
    int b = 17;
    swap(&a, &b);
    printf("main: a = %d, b = %d\n", a, b);
    return EXIT_SUCCESS;
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    printf("T is 17 %d\n", t);
    *b = t;
    printf("Swap: a = %d, b = %d\n", *a, *b);
}
