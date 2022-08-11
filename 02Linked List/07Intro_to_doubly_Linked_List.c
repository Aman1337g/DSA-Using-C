// In contrast to singly linked list, it is going to contain two links one to previous node and other link to next node

// For a singly linked list, syntax to create a node -
/*
struct node {     // defining our own datatype
    int data;     // value in the node 
    struct node *next;   // pointer storing address of next node [CREATING LINK]
};
struct node *head;    // head pointer for accessing the linked list
*/

// For a doubly linked list, syntax to create a node -
/*
struct node {
    int data; 
    struct node *next;
    struct node *prev;   // pointer storing address of previous node 
};
struct node *head;
*/

// Advantages of doubly linked list - 
/*
1. Can traverse the linked list in forward as well as backward direction.
2. Insertion and deletion is easy.
3. Reversing the linked list is also easy.
*/
// Drawbacks - 
/*
1. Extra memory is required to store the address of previous and next node.
*/