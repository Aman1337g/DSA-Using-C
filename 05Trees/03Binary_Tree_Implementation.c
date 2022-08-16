/* When a function is called from the main function the memory to be allocated to the function in the stack 
  , different copies of all the local variables would be created for each function call 
*/
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;   // depeding upon data in the tree can be changed to char, double, float
    struct node *left;  // for storing address of left subtree
    struct node *right; // for storing address of right subtree
};

struct node *create() { 
    int x;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data(-1 for no node) : ");
    scanf("%d", &x);
    // newnode->left = NULL;
    // newnode->right = NULL;
    if(x == -1) return 0;
    newnode->data = x;
    printf("Enter left child of %d :\n", x);
    newnode->left = create();
    printf("Enter right child of %d :\n", x);
    newnode->right = create();
    return newnode;
}
 
void main() {
    struct node *root;  // we are writing struct node as it is the datatype of the node and root is a pointer to that node
    root = NULL;
    root = create();   // create function will be returning the address of the root node (pointer to root node)
}