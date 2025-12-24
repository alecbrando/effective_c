#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdalign.h>

const size_t max_elem = 100;

typedef struct node {
    size_t num;
    int data[];
} widget;

typedef union unode {
    char c;
    int data[];
} uwidget;

widget *alloc_widget(size_t num_elem) {
    if(num_elem > max_elem) return NULL;
    widget *p = (widget*)malloc(sizeof(widget) + sizeof(int) * num_elem);
    if(p==NULL) return NULL;
    p->num = num_elem;
    for (size_t i = 0; i< p->num; i++){
        p->data[i]=17;
    }
    return p;
}


int main() {
    printf("Size of struct node %zu\n", sizeof(widget));
    printf("Align of struct node %zu\n", alignof(widget));
    size_t count = 10;
    widget* cwidget = alloc_widget(count);
    printf("Cwidget %d\n", cwidget->data[5]);
    printf("Union size of %zu\n", sizeof(uwidget));
    const int num_elem = 12;
    //double array[12];
    double array[num_elem];
    printf("Size of double array %zu\n", sizeof(array));
    size_t size = 12;
    printf("%zu\n", sizeof(size));
    typeof(int) f;
    printf("%zu\n", size); // prints 15
    return EXIT_SUCCESS;
}
