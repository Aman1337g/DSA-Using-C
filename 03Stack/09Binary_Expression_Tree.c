//                      Binary Expression Tree
/*
    1. It is basially a specific kind of binary tree which is used to represent expressions.[INFIX, POSTFIX, PREFIX]
    2. An expression is composed of constants, variables and symbols(operators) which are arranged in a specific format or grammer rules.
       leaves (external node) -> operands 
       internal nodes -> symbols(operators)
    3. Expression tree is a tree in which each INTERNAL NODE corresponds to the OPERATOR and each LEAF NODE corresponds to OPERAND.

    Here also we have to take care of the operator precedence , there will be a slight change for parenthesis in the expression

    PROCEDURE FOR CREATING EXPRESSION TREE FOR INFIX EXPRESSION - 

    1. Scan the exp. from left to right 
    2. As the operands corresponds to leaf node , operators with higher precedence will be on the bottom part of the tree
       and operator with least precedence will be on top(ROOT) of the tree.
    3. PREORDER traversal of the exp. tree will give us prefix exp. and POSTORDER traversal will give us Postfix exp.

    Example -   a * b / c + e / f * g + k - x * y

    Here operators with higher precedence are '*' and '/' and their associativity is from L->R
    And operator with least precedence is '-' will be the root of the tree

                   -                                -
                /     \         =>              /       \      =>
      a*b/c+e/f*g+k    x*y                     +         *  
                                             /   \      / \
                                    a*b/c+e/f*g   k    x   y
                                        
                   -                                -
                /     \         =>              /       \
               +    x*y                        +         *  
             /   \                           /   \      / \
            +     k                         +     k    x   y                                       
          /   \                          /     \ 
      a*b/c   e/f*g                     /       *
                                      /  \     / \
                                     *    c   /   g
                                    / \     /  \         (FINAL ANSWER)
                                   a   b   e    f 

    PREORDER TRAVERSAL of this expression tree gives  [Root Left Right] -> 
    - + + / * a b c * / e f g k * x y (prefix expression)
    
    POSTORDER TRAVERSAL of this expression tree gives  [Left Right Root] -> 
    a b * c / e f / g * + k + x y * - (postfix expression)

*/