/* WHY?
    In programming it is simple to construct an expression tree from postfix expression rather than constructing it from infix expression
    because in infix expression we have to take care of precedence , associativity rule but while dealing with postfix expression 
    we don't have to bother about precedence , associativity rule that is why we mostly deals with postfix and prefix expressions
    rather than dealing with infix expressions.

    Example - infix expression =>  a * b / c + e / f * g + k - x * y

    convert it to postfix expression =>  a b * c / e f / g * + k x y * -

    the evaluate this postfix expression and store the values of operands in pointer , do operations and make expression tree 
    and push the subtree onto the stack and so on .....

            |   b   |                                     *
            |   a   |        (then '*' comes)->          / \  (this is a operand)
            |_______|                                   a   b

            |   c   |                                     / 
            |   *   |                                   /   \
            |  / \  |        (then '/' comes)->        *     c  (this is a operand)
            | a   b |                                 / \ 
            |_______|                                a   b

    Similarly do this till the end of postfix expression , at last we will get the expression tree as ->

                            -
                        /       \
                      +          *  
                    /   \       / \
                   +     k     x   y                                       
                /     \ 
               /       *
             /  \     / \
            *    c   /   g
           / \     /  \         (FINAL ANSWER)
          a   b   e    f
*/