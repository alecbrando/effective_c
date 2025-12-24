#include <stdio.h>
#include <stddef.h>
#include <stdalign.h>
#include <assert.h>

int main(void) {
    //long double num[] = {1.0, 2.0, 3.0};
    //char num[] = {'A', 'B', 'C'};
    char * num = "Alec";
    static_assert(alignof(num) == 8, "unexpected alignment");
    //static_assert(alignof(max_align_t) == 16, "unexpected alignment");
    printf("Alignment of int array = %zu\n", alignof(num));
    //printf("Size of int array = %zu\n", sizeof(num));
    printf("Alignment of max_align_t = %zu\n", alignof(max_align_t));
}
