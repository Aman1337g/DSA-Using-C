// Data structure is basically a way to organize data such that we can process the data efficiently
/*  DATA STRUCTURE
1. Linear DS - here data is stored in a sequential mannner [Array, Linked List, Stack, Queue]
2. Non-linear DS - data is stored in multiple levels or is in form of hierarchy [Trees, Graphs]
*/

/*                                  TREES
Defn - Tree can be defined as a collection of entities(nodes) linked together to stimualte a hierarchy.
1. It is a non-linear data structure.
2. Used to represent the data items which are having hierarchial relationship between them.

In graph theory we consider tree as an undirected graph which is connected and acyclic
When we are discussing trees in context of data structure we consider tree having direction [direction is from top to bottom(UNIDIRECTIONAL)]
*/

/* Terminology used in Tree
1. Root - node having no parent or topmost element. 
2. Node - which is going to store some information and also containing link to the other nodes
3. Parent - immediate predecessor to a node
4. Child - immediate successor to a node
5. Leaf Node(External nodes) - node having no child
6. Non-leaf Node(Internal nodes) - node having atleast one child
7. Path - sequence of consecutive edges from source node to destination node 
8. Ancestor - any predecessor node on the path from root to that node
9. Descendent - any successor node on the path from that node to leaf node
10. Subtree - subtree of any tree T is which is containing a node of tree T and and all its descendents
11. Sibling - all children of same parent
12. Degree - no. of children of a node (degree of all the leaf nodes is 0)
    [NOTE - max degree of a node is the degree of the tree]
13. Depth of a node - length of path (no. of edges) from root to that node (depth of root node is always 0)
14. Height of a node - no. of edges in the longest path from that node to leaf
    - height and depth of a node may or may not be equal
    - height of tree is equal to height of the root node
15. Level of a node - no. of edges from root to that node [level of a node = depth of that node]
    [NOTE - level of a tree = height of the tree] 
    [NOTE - level of a node may or may not be equal to height of that node] 
*/

/*
If there are 'n' no. of nodes in a tree, then no. of edges = (n-1). If we add one more edge then it will be a cycle but in 
tree we cannot have a cycle. Tree should be acyclic.
*/

/* IMPLEMENTATION OF TREE (binary tree)
struct node {
    int data;   // depeding upon data in the tree can be changed to char, double, float
    struct node *left;  // for storing address of left subtree
    struct node *right; // for storing address of right subtree
};
*/

// USES - in file system, routing protocols, tree organises data for a quick search for insertion and deletion