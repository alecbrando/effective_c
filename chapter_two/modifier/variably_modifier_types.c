#include <stdio.h>

int calculate_value(void);

[[deprecated("No working no more")]]int calculate_value() {
    return 0;
}

int main() {
    calculate_value(); 
    puts("Still works");
    return 0;
}

