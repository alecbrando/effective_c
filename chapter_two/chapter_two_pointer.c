#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ip = malloc(12); 
    //char *cp = NULL;
    //void *vp = nullptr;
    ip[0] = 5;
    ip[1] = 6;
    // ip[0]
    // *ip
    printf("Address %p\n another address %p\n", ip, &*ip);
    printf("What is this? %p %d %zu", ip, *(int*)ip, sizeof(*ip));
}
