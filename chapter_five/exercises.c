#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int do_something(void) {
    FILE *file1, *file2;
    size_t *obj;
    int ret_val = 0; // initially assume a successful return value
    file1 = fopen("a_file", "w");
    if (file1 == NULL) {
        return -1;
    }
    file2 = fopen("another_file", "w");
    if (file2 == NULL) {
        ret_val = -1;
        goto FAIL_FILE2;
    }
    obj = malloc(sizeof(*obj));
    if (obj == NULL) {
        ret_val = -1;
        goto FAIL_OBJ;
    }
    // operate on allocated resources
    // clean up everything
    free(obj);
FAIL_OBJ: // otherwise, close only the resources we opened
    puts("File 2 failed to open");
    fclose(file2);
FAIL_FILE2:
    puts("File 1 failed to open");
    fclose(file1);
    return ret_val;
}

int absolute_value(int a) {
    if (a >= 0) return a;
    if(a <= INT_MIN){
        puts("Gotcha");
         return INT_MAX;
    } else {
        return -a;
    }
}

int main() {
   //do_something(); 
    int test = absolute_value(-2147483649);
   printf("Is this positive %d", test); 
}
