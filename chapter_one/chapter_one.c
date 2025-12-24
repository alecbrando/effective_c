#include <stdio.h>
#include <stdlib.h>

int main() {
    if (printf("This is a put %d", puts("Hello, world!!!!")) < 0) {
        return EXIT_FAILURE;
    } else {
        return EXIT_SUCCESS;
    }
}


