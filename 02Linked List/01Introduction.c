//1. It is a linear data structure. It is a collection of data elements which are stored in non-consecutive storage locations.
//2. Some extra space is required to store pointer with each value.
//3. Insertion and deletion are easier than array.
//4. Accessing of any element is going to take order of O(n) time complexity while it is going to take O(1) in array.
//5. Binary search is not possible in linked list.
//6. It is of dynamic size.

//                           TYPES OF LINKED LISTS
/*
1. Singly Linked list - only forward traversal is possible (forward sequential movement is possible)
2. Doubly Linked list - each node contains three parts (two address and one value)
2. Circular Linked list - last node is having link to the first element in the list
3. Doubly Circular Linked list         
*/
 


/*
struct node {                  //user-defined data type with name node
    int data;                  //storing data in the node
    struct node *next;         //pointer to struct node datatype for storing the address of next node
    struct node *prev;         //pointer to struct ndoe datatype for storing the address of previous node
} ;
*/

