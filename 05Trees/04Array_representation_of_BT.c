 /* Consider a binary tree
                   A
                /     \
               B      C
              / \    / \
             D   E  F   G
            / \
           H   I
*/

// Representation using Array - filling of elements from left to right in subsequent levels
/*
Case 1 - Array indexing starts from 0
        Let array be M then, M = [A,B,C,D,E,F,G,H,I]
Case 2 - Array indexing starts from 1 
        Let array be N then, N = [A,B,C,D,E,F,G,H,I]
*/

/*
                                        FORMULAE
    CASE 1 - indexing starts from 0
    if a node is at ith index then - 

    1. left child would be at - 2*i + 1 index 
    2. right child would be at - 2*i + 2 index
    3. parent node would be at - floor((i-1)/2)
    
    
    CASE 2 - indexing starts from 1
    if a node is at ith index then - 

    1. left child would be at - 2*i index 
    2. right child would be at - 2*i + 1 index
    3. parent node would be at - floor(i/2) 
*/

/* But if tree given as 
                   A
                /     \
               B      C
              / \    / \
             D   E  F   G
                / \
               H   I

    Here array in both the cases would be same but formula will not hold
*/

/* So,
   NOTE - 1. The binary tree which we are representing using array must be a complete binary tree
            - all levels are completely filled (except possibly the last level) and last level has nodes as left as possible
*/
