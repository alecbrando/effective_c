#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct tnode tnode;
struct tnode {
    int val;
    int count;
    tnode *left;
    tnode *right;
};

tnode* insert(tnode* node, int val) {
    if(node == NULL) {
        node = (tnode*)malloc(sizeof(tnode));
        node->left = NULL;
        node->right = NULL;
        node->count = 1;
        node->val = val;
        printf("Value is %d Memory address %p\n", node->val, &node->val);
        return node;
    }
    if(val == node->val) {
        node->count++;
    } else if (val < node->val) {
        puts("Going left");
        node->left = insert(node->left, val);
    } else {
        puts("Going right");
        node->right = insert(node->right, val);
    }
    return node;
}

tnode* search(tnode* node, int target) {
    printf("Our current value %d our target == %d\n", node->val, target); 
    if(node->val == target) {
        printf("Value is %d Memory address %p\n", node->val, &node->val);
        puts("Found it!");
        return node;
    } else if (node->val > target) {
       // go left 
       puts("Going left");
        return search(node->left, target); 
    } else {
        // go right
        puts("Going right");
        return search(node->right, target);
    }
    return node;
}

void traverse(tnode* node) {
    if(node == NULL){
        return;
    }
    printf("Node value %d, node memory address %p\n", node->val, &node->val);
    traverse(node->left);
    traverse(node->right);

    free(node);
    return;
}

//     5
//   3     8
//1   4      6 
//     

int main() {
    puts("Going to search this BAD BOY!!!");
    int nums[] = {5, 3, 8, 3, 1, 6, 4, 8};
    int target = 6;
    int size = sizeof(nums) / sizeof(nums[0]);
    tnode* root = NULL;
    printf("Size of array is %d\n", size);
    // MAKING THE TREE
    for(int i = 0; i < size; i++) {
        root = insert(root, nums[i]);
    }
    puts("Now searching");
    // SEARCHING THE TREE
    tnode* result = search(root, target);
    if(result) {
        // found result
        printf("Found our target, number of occurances %d\n", result->count);
    } else {
        puts("We failed to find our target");
    }
    traverse(root); 
}
