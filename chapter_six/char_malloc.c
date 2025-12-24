#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char *p = malloc(100);
    memset(p, 99, 50);
    printf("Size of p* %zu\n", sizeof(*p));
    printf("Size of p %zu\n", sizeof(p));
    printf("Value of p %c\n", *p);
}
