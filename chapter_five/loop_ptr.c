#include <stdio.h>
#include <stdlib.h>
#include <stdalign.h>

struct node {
 int data;
 struct node *next;
 char* name;
};
struct node *p, *q;


int main() {
    printf("Size of node: %zu\n", sizeof(struct node));
    printf("Alignof of node: %zu\n", alignof(struct node));
    struct node *head = malloc(sizeof(struct node));
    struct node *p1 = malloc(sizeof(struct node));
    struct node *p2 = malloc(sizeof(struct node));
    struct node *p3 = malloc(sizeof(struct node));
    struct node *p4 = malloc(sizeof(struct node));
    head->data = 1;
    head->name = "head";
    head->next =  p1;
    p1-> data = 2;
    p1->name = "p1";
    p1->next = p2;
    p2-> data = 3;
    p2->name = "p2";
    p2->next = p3;
    p3-> data = 4;
    p3->name="p3";
    p3-> next = p4;
    p4->name="p4";
    p4->data=5;

    for(p = head; p != NULL; p = q) {
        printf("Value %d\n", p->data);
        printf("Name is %s\n", p->name);
        q = p->next;
        free(p);
    }

    return 0;
}
