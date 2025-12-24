#include <stdio.h>

int main(void) {
    unsigned int o1 = 10; // IP ADDR in question
    unsigned int o2 = 1;
    unsigned int o3 = 30;
    unsigned int o4 = 30;

    int num = sizeof(int);
    unsigned int m1 = 255; // Subnet mask
    unsigned int m2 = 255;
    unsigned int m3 = 255;
    unsigned int m4 = 0;

    // Use bitwise and to apply the subnet mask to the ip address to find where
    // the host can live on this network.

    unsigned int r1 = o1 & m1;
    unsigned int r2 = o2 & m2;
    unsigned int r3 = o3 & m3;
    unsigned int r4 = o4 & m4;


    printf("%d.%d.%d.%d\n", m1,m2,m3,m4);
    printf("%08b.%08b.%08b.%08b\n", m1,m2,m3,m4); // A subnet mask must always
                                                  // have contiguous 1's and 0's
    printf("Network address: %d.%d.%d.%d\n", r1,r2,r3,r4);
}
