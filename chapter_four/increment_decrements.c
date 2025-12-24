#include <stdio.h>
#include <limits.h>

int test;
int main() {
    int si1, si2, sresult;
    unsigned int ui1, ui2, uresult;
    si1 = 5;
    si2 = 1;
    ui1 = 5;
    ui2 = 1;
    if ((si2 < 0) || (si2 >= sizeof(si1)*CHAR_BIT)) {
       printf("Illegal operation!\n"); 
    }
    else {
        printf("Allowed si number: %d binary: %08b and si2 number: %d binary: %08b \n", si1, si1, si2, si2);
        sresult = si1 >> si2;
        printf("Result number: %d binary: %08b\n", sresult, sresult);
    }
    if (ui2 >= sizeof(unsigned int)*CHAR_BIT) {
       printf("Illegal operation\n");
    }
    else {
        printf("Allowed ui1 number: %d binary: %08b and ui2 number: %d binary: %08b \n", si1, si1, si2, si2);
        uresult = ui1 >> ui2;
        printf("Result number: %d binary: %08b\n", uresult, uresult);
    }
} 

