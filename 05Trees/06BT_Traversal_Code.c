/*  Consider binary tree - 

                   4
                 /   \
                5     10
               / \     \
              7   8     1

   1. Preorder - 4 5 7 8 10 1   [Left Root Right]
   2. Inorder - 7 5 8 4 10 1    [Root Left Right]
   3. Postorder - 7 8 5 1 10 4  [Left Right Root]
*/
// Code -
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
    if(x == -1) return 0;
    newnode->data = x;
    printf("Enter left child of %d :\n", x);
    newnode->left = create();
    printf("Enter right child of %d :\n", x);
    newnode->right = create();
    return newnode;
}

void preOrder(struct node *root) {
    if(root == 0) return;

    printf("%d ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(struct node *root) {
    if(root == 0) return;

    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

void postOrder(struct node *root) {
    if(root == 0) return;

    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

void main() {
    struct node *root;
    root = NULL;
    root = create();

    printf("Preorder is : ");
    preOrder(root);
    printf("\n");
    printf("Inorder is : ");
    inOrder(root);
    printf("\n");
    printf("Postorder is : ");
    postOrder(root);
}