#include <stdio.h>
#include <stdatomic.h>
#include <threads.h>
// By using restrict, you promise the compiler that 'src' and 'dest' 
// will never point to the same part of memory.
void add_arrays(int *restrict src, int *restrict dest, int n) {
    for (int i = 0; i < n; i++) {
        dest[i] += src[i];
    }
}

_Atomic int counter = 0;

int increment_task(void* arg) {
    for (int i = 0; i < 10000; i++) {
        counter++; // Safe even if 10 threads do this at once
    }
    return 0;
}

int main() {
    int a[3] = {1, 2, 3};
    int b[3] = {10, 20, 30};
    add_arrays(a, b, 3);
    for(int i = 0; i < (sizeof(b) / sizeof(int)); i++) {
        printf("What is this %d\n", b[i]);
    }

    thrd_t thread1, thread2;
    thrd_create(&thread1, increment_task, NULL);
    thrd_create(&thread2, increment_task, NULL);
    
    thrd_join(thread1, NULL);
    thrd_join(thread2, NULL);
    
    printf("Final Count: %d\n", counter); // Will be exactly 20000
    return 0;
}
