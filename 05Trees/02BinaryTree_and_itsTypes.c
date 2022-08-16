//                       Binary Tree
/*
1. Each node can have atmost two children (0,1,2)
*/

/*                PROPERTIES OF BINARY TREE

1. In each level 'i' , the max. no. of node possible is 2^i.
2. max. no. of nodes of height 'h' = 2^0 + 2^1 + 2^2 + ... + 2^h = 2^(h+1)-1 [sum of G.P.]
3. min. no. of nodes of height 'h' = h+1
4. If we have given max. no. of nodes in a binary tree is 'n' and we have to find the max. and min. of the tree
   - max. height , n = 2^(h+1) - 1 =>   h(max) = [log2(n+1)-1]
   - min. height , n = h + 1 =>   h(min) = [n-1]
*/

//                Types of Binary Tree

/*
1. Full/Proper/Strict - each node contains either 0 or 2 childrens (OR each node is having two children except leaf node)
    - no. of leaf node = no. of internal nodes + 1
2. Complete Binary Tree - all levels are completely filled (except possibly the last level) and last level has nodes as left as possible
3. Perfect Binary Tee - all internal nodes have 2 children and all leaves are at same level
    - it is both complete and full binary tree but not true vice-versa  
4. Degenerate Binary Tee - all the internal nodes have only one child (right skewered , left skewered, or mixture of both)
5. Balanced(AVL) Binary Tee
*/

/*
If we have 'n' no. of nodes in a tree and 'h' = height of that tree then , 
                          |    Max. Nodes    |    Min. Nodes
    Binary Tree           |     2^(h+1)-1    |     h+1
    Full Binary Tree      |     2^(h+1)-1    |     2*h + 1
    Complete Binary Tree  |     2^(h+1)-1    |     2^h                      


                          |    Max. Height    |    Min. Height
    Binary Tree           |    [log2(n+1)-1]  |     n-1
    Full Binary Tree      |    [log2(n+1)-1]  |    (n-1)/2
    Complete Binary Tree  |    [log2(n+1)-1]  |    log2(n)
*/