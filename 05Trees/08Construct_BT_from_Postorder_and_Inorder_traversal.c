/*  For Example - 
    Post-order :-  9, 1, 2, 12, 7, 5, 3, 11, 4, 8   [Left Right Root]  [Scan from R->L to find root node]
    In-order :-  9, 5, 1, 7, 2, 12, 8, 4, 3, 11    [Left Root Right]

    -> By Post-order , root will be the last element so root = 8
    -> And for looking into left and right subtree we will refer to In-order traversal of binary tree


                   8                8 is root so we will look into the in-order traversal for elements to left and right of 1
                 /   \         =>   for finding root of left sub-tree and right sub-tree , element which occurs last in Post-order traversal will be the root  
     9,5,1,7,2,12     4,3,11        and for its left and right subtree we will refer to in-order traversal of B.T.

                       8                                                               8
                 /           \                                                     /       \         
                5             4      =>  in 1,7,2,12                    =>        5         4      =>   in 2,12
               / \             \         look in Post-order traversal,           / \         \          look in Post-order traversal,
              9   1,7,2,12      3,11     7 comes last so 7 is root              9   7         11        12 comes last so 12 is root
                                                                                   / \        /
                                                                                  1   2,12   3   

               8
            /     \         
           5       4 
          / \       \
         9   7       11     [FINAL ANSWER]
            / \      /      [BINARY  TREE]
           1   12   3    
              /       
             2  
*/