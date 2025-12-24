#include <stdio.h>

int main() {
    float f = -1.589f;
    unsigned int *bits = (unsigned int *)&f;

    printf("Decimal %f\n", f);
    printf("High Precision: %.20f\n", f);
    printf("Hex representation: 0x%X\n", *bits);

    return 0;
}
