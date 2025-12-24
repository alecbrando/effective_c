#include <stdbool.h>
#include <stdio.h>

void start(bool* is_on) {
    *is_on = !*is_on;
}

typedef struct car_ { 
    char* name; 
    bool is_on;
    void (*start)(bool*); 
} Car;

int main() {
    Car toyota;
    toyota.is_on = true;
    toyota.start = start;
    //toyota.start(&toyota.is_on);
    Car* toyotaptr = &toyota;
    toyotaptr->start(&toyota.is_on);
    toyota.name = "Toyota";
    printf("Is my car on? "); 
    if(toyota.is_on) {
        puts("ON");
    } else {
        puts("OFF");
    }
}
