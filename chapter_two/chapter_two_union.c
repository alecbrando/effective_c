#include <stdio.h>
enum node_type {
 integer_type,
 float_type,
 double_float_type,
 long_double_type,
 double_type
};
struct node {
 enum node_type type;
 union {
 int inode;
 float fnode;
 double dnode;
 long double ldnode;
 } u;
} n, *nptr = &n;

int main() {
    n.type = double_type;
    n.u.dnode = 3.14;
    printf("%.2lf\n", n.u.dnode);
    printf("%p\n", &nptr->u.dnode);
    nptr->type = integer_type;
    nptr->u.inode = 10;
    printf("%d\n", nptr->u.inode);
    printf("%p\n", &nptr->u.inode);
    struct node test;
    struct node *testing = &test;
}
