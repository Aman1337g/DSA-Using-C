/*  For Example - 
    Pre-order :-  1, 2, 4, 8, 9, 10, 11, 5, 3, 6, 7   [Root Left Right]
    In-order :-  8, 4, 10, 9, 11, 2, 5, 1, 6, 3, 7    [Left Root Right]

    -> By pre-order , root will be the first element so root = 1
    -> And for looking into left and right subtree we will refer to In-order traversal of binary tree


                   1                1 is root so we will look into the in-order traversal for elements to left and right of 1
                 /   \         =>   for finding root of left sub-tree and right sub-tree , element which occurs first in pre-order traversal will be the root  
    8,4,10,9,11,2,5    6,3,7        and for its left and right subtree we will refer to in-order traversal of B.T.

                    1                                                           1
                 /     \                                                     /     \         
                2       3      =>  in 8,4,10,9,11                 =>        2       3      =>   in 9,10,11
               / \     / \         look in pre-order traversal,            / \     / \          look in pre-order traversal,
    8,4,10,9,11   5   6   7        4 comes first so 4 is root             4   5   6   7         9 comes first so 9 is root
                                                                         / \
                                                                        8   10,9,11

               1
            /     \         
           2       3 
          / \     / \
         4   5   6   7      [FINAL ANSWER]
        / \                 [BINARY  TREE]
       8   9
          / \      
         10  11

*/