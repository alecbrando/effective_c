#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct { char *name; } Person;

void person_born(Person* person, char* name);

int f() {
    return 0;
}

void g(int (*func)()) {
   if (func() != 0) {
    printf("g failed\n");
   } else {
    printf("Succeeded");
   }
}

int main() {
    Person person;
    person_born(&person, "Alec");
    printf("Person's name, %s\n", person.name);
    printf("Size of name: %zu", strlen(person.name));
    g(f);
}


void person_born(Person* person, char* name) {
    person->name = name;
}




