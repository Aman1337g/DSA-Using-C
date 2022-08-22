/*
    1. Print operands as they arrive.

    2. If stack is empty or contains a left paranthesis on top, push the incoming operator onto the stack.

    3. If incoming symbol is '(' , push it onto stack.

    4. If incoming symbol is ')' , pop the stack and print the operators until left parenthesis is found.

    5. If incoming symbol has higher precedence then the top of the stack , push it on the stack.

    6. If incoming symbol has lower precedence then the top of the stack , pop and print the top. Then test the incoming operator against the new top of the stack.

    7. If incoming operator has equal precedence with the top of the stack , use assciativity scale.

    8. At the end of the expression , pop and print all operators of stack.  

    => if associativity L to R , then pop and print top of the stack and then push the incoming operator.

    => if associativity R to L then push the incoming operator.
*/
/*  FOR EXAMPLE - i) A + B / C

            STACK                                                               POSTFIX EXPRESSION                                     
    
            EMPTY                              by 1                                     A

            |  +  |                            by 2                                     A
            |_____|

            |  +  |                            by 1                                    A B
            |_____|

            |  /  |                            by 5                                    A B
            |  +  |
            |_____|            

            |  /  |                            by 5                                    A B C
            |  +  |
            |_____|            

            EMPTY                              by 8                                   A B C / +



        ii) A - B / C * D + E

            STACK                                                               POSTFIX EXPRESSION                                     
    
            |  /  |       
            |  -  |                            by 1,2,1,2,5                         A B C 
            |_____|

            |  *  |       
            |  -  |                            by 7                                 A B C /
            |_____|

            |  *  |       
            |  -  |                            by 1                                 A B C / D
            |_____|     
      
            |  +  |                            by 6,6                               A B C / D * -
            |_____|            

             EMPTY                             by 1,8                               A B C / D * - E +



        ii) K + L - M * N + ( O ^ P ) * W / U / V * T + Q ^ J ^ A

        INPUT EXPRESSION                          STACK                            POSTFIX EXPRESSION       

            K                                                                           K
            +                                       +                                   K
            L                                       +                                   K L
            -                                       -                                   K L +
            M                                       -                                   K L +
            *                                     * -                                   K L +
            N                                     * -                                   K L + N
            +                                       +                                   K L + N * -
            (                                     + (                                   K L + N * -
            O                                     + (                                   K L + N * - O
            ^                                     + ( ^                                 K L + N * - O 
            P                                     + ( ^                                 K L + N * - O P
            )                                       +                                   K L + N * - O P ^           
            *                                     * +                                   K L + N * - O P ^
            W                                     * +                                   K L + N * - O P ^
            /                                     / +                                   K L + N * - O P ^ *
            U                                     / +                                   K L + N * - O P ^ U
            /                                     / +                                   K L + N * - O P ^ /
            V                                     / +                                   K L + N * - O P ^ / V
            *                                     * +                                   K L + N * - O P ^ / V / * +
            T                                     * +                                   K L + N * - O P ^ / V / * + T 
            +                                       +                                   K L + N * - O P ^ / V / * + T * +
            Q                                       +                                   K L + N * - O P ^ / V / * + T * + Q                           
            ^                                     ^ +                                   K L + N * - O P ^ / V / * + T * + Q
            J                                     ^ +                                   K L + N * - O P ^ / V / * + T * + Q J
            ^                                     ^ ^ +                                 K L + N * - O P ^ / V / * + T * + Q J
            A                                     ^ ^ +                                 K L + N * - O P ^ / V / * + T * + Q J A ^ ^ + (ANSWER)
*/