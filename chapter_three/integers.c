#include <limits.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define ALLOWED(i, j) ((j) > i ? true : false)
#define ABSM(i, flag) ((i) >= 0 ? (i) : ((i)==(flag) ? (flag) : -(i)))
int main() {
    signed int i = -214;
    //unsigned int j = 4;
    
    //if(ALLOWED(i, j)) {
    //    puts("You can subtract j - i");    
    //    int k = j - i;
    //} else {
    //    puts("You cannot do that");
    //}
    //printf("What is the value of %d when absoluted %d", i, ABSM(i, INT_MIN));
    //printf("i: %d positive is %d", i, abs(-214));
    unsigned _BitInt(8) test = 1;
    printf("Size of test : %zu", sizeof(test));
    printf("Size of float %zu\n", sizeof(float)); 
    printf("Size of double %zu\n", sizeof(double));  
    printf("Size of long double %zu\n", sizeof(long double));  
    int a = 5000 ;
    long double b = 6000.0;
    printf("Size of %zu", sizeof(a + b));
}

