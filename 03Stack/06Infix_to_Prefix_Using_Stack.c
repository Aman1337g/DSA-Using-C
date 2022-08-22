/*
    Precedence of operators is -
                            Associativity
    1. (), [], {}            
    2. ^                      R -> L
    3. *, /                   L -> R
    4. +, -                   L -> R
    
    // RULES - JUST REVERSE OF INFIX TO POSTFIX CONVERSION

    0. REVERSE THE GIVEN INFIX EXPRESSION.

    1. Print operands as they arrive.

    2. If stack is empty or contains a RIGHT paranthesis on top, push the incoming operator onto the stack.

    3. If incoming symbol is '(' , pop the stack and print the operators until RIGHT parenthesis is found.

    4. If incoming symbol is ')' , push it onto stack.

    5. If incoming symbol has higher precedence then the top of the stack , push it on the stack.

    6. If incoming symbol has lower precedence then the top of the stack , pop and print the top. Then test the incoming operator against the new top of the stack.

    7. If incoming operator has equal precedence with the top of the stack , use associativity scale.

    8. At the end of the expression , pop and print all operators of stack.

    9. REVERSE THE RESULT WHICH WE GET AFTER POINT 8.  

    => if associativity L to R , then push the incoming operator.

    => if associativity R to L then pop and print top of the stack and then push the incoming operator.

    Example - K + L - M * N + ( O ^ P ) * W / U / V * T + Q

    There are two to three ways to convert infix expression to postfix expression one of the ways is -
    reverse the given infix expression -
                    Q + T * V / U / W * ) P ^ O ( + N * M - L + K

        INPUT EXPRESSION                          STACK                            PREFIX EXPRESSION       

            Q                                                                        Q
            +                                       +                                Q
            T                                       +                                Q T
            *                                      * +                               Q T
            V                                      * +                               Q T V
            /                                     / * +                              Q T V
            U                                     / * +                              Q T V U
            /                                    / / * +                             Q T V U
            W                                    / / * +                             Q T V U W
            *                                    * / / * +                           Q T V U W
            )                                   ) * / / * +                          Q T V U W
            P                                   ) * / / * +                          Q T V U W P
            ^                                   ^ ) * / / * +                        Q T V U W P          
            O                                   ^ ) * / / * +                        Q T V U W P O
            (                                   * / / * +                            Q T V U W P O ^
            +                                     + +                                Q T V U W P O ^ * / / *
            N                                     + +                                Q T V U W P O ^ * / / * N
            *                                     * + +                              Q T V U W P O ^ * / / * N
            M                                     * + +                              Q T V U W P O ^ * / / * N M
            -                                     - + +                              Q T V U W P O ^ * / / * N M *
            L                                     - + +                              Q T V U W P O ^ * / / * N M * L
            +                                     + - + +                            Q T V U W P O ^ * / / * N M * L
            K                                     + - + +                            Q T V U W P O ^ * / / * N M * L K + - + + (RESULT)        

            Now the final prefix expression will be the reverse of the result - PREFIX EXPRESSION AFTER CONVERSION   
                         
                                + + - + K L * M N * / / * ^ O P W U V T Q    (ANSWER)       
*/