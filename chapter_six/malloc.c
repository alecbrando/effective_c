#include <stdalign.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

typedef struct {
    double d;
    int i;
    char c[10];
} widget;


int main() {
    char ptrs[] = "OK, SURE"; // MUTABLE
    char* ptr = ptrs; // READ ONLY
    ptr[1] = 'X';
    //printf("This char is %c\n", ptr[1]);
    return 0; 
}

//int main() {
//    widget *p = (widget*)malloc(sizeof(widget));
//    if (p == NULL) {
//        printf("We failed my good sir");
//        return 1;
//    }
//    printf("Size of *p %zu\n", sizeof *p);
//    printf("Alignof of *p %zu\n", alignof(*p));
//    *p = (widget){5.02, 4, "car"};
//    widget w = {3.2, 9, "abc"};
//    //int ws[] = {1,2,3};
//    //printf("Memory address of w %p\n", &w);
//    printf("Value of string %s int before %f\n", p->c, p->d);
//    memcpy(p, &w, sizeof(w));
//    printf("Value of string %s int after %f\n", p->c, p->d);
//    p->d = 3.0;
//    printf("Memory address of p %p\n", p);
//    printf("Value of string %s double %.2f\n", p->c, p->d);
//    free(p);
//    char* c = malloc(24);
//    strcpy(c, "Hello, world!");
//    printf("C is %s\n", c);
//    free(c);
//    return 0;
//}
//
//int main() {
//
//    char *mp = {'a', 'b', 'c', 'd', 'e'};
//
//    for(int i = 0; i < (sizeof(mp) / sizeof(char)); i++) {
//        printf("Char at %d is %c\n", i, mp[i]);
//    }
//
//
//
//    //char *str = (char *)malloc(16);
//    char *str = (char*)calloc(16, 1);
//    // loop through test it has \0
//    if (str != NULL) {
//        strncpy(str, "123456789abcdef", 15);
//        //str[15] = '\0';
//        printf("str = %s\n", str);
//        free(str);
//        return EXIT_SUCCESS;
//    }
//    return EXIT_FAILURE;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(void) {
//
//    char *mystr = malloc(64);
//    if (mystr == NULL) {
//        puts("failed to alloc");
//        exit(1);
//    }
//    //strcpy();
//    
//
//    printf("The string %s at addr %p\n", mystr, mystr);
//    
//    //free(mystr);
//    free(mystr);  
//    return 0;
//}
