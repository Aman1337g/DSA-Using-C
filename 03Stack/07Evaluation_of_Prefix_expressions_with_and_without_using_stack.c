/* Consider an infix expression -> a + b * c - d / e ^ f
    a = 2, b = 3, c = 4, d = 16, e = 2, f = 3.

    Then prefix conversion - first we have to reverse the given infix expression
                f ^ e / d - c * b + a

    INPUT EXPRESSION                        STACK                       PREFIX EXPRESSION

        f                                                               f
        ^                                   ^                           f
        e                                   ^                           f e
        /                                   /                           f e ^
        d                                   /                           f e ^ d
        -                                   -                           f e ^ d /
        c                                   -                           f e ^ d / c
        *                                   * -                         f e ^ d / c
        b                                   * -                         f e ^ d / c b
        +                                   + -                         f e ^ d / c b *
        a                                   + -                         f e ^ d / c b * a + - (RESULT)

    NOW , WE HAVE TO REVERSE THE RESULT TO GET THE PREFIX EXPRESSION ->  - + a * b c / d ^ e f

    Now, 
    for evaluation of PREFIX expressions we evaluate it from RIGHT TO LEFT
    for evaluation of POSTFIX expressions we evaluate it from LEFT TO RIGHT

    EVALUATION OF GIVEN PREFIX EXPRESSION ->  - + a * b c / d ^ e f without using stack
    from right to left, with values a = 2, b = 3, c = 4, d = 16, e = 2, f = 3

    As it is a prefix expression => <operator> <operand 1> <operand 2> type will be evaluated as <operand 1> <operator> <operand 2> 

        - + 2 * 3 4 / 16 ^ 2 3   <- from right to left
                         _____
    =   - + 2 * 3 4 / 16 8
                    ______
    =   - + 2 * 3 4 2
              _____
    =   - + 2 12 2
          ______
    =   - 14 2
        ______
    = 12(Answer)    [IF WE DO NOT GET <operator> <operand 1> <operand 2> AT LAST MEANS WE DID MISTAKE SOMEWHERE]

    // WITHOUT using stack we have to scan the prefix expression many times so we use stack for evaluation of postfix and prefix expressions in one go(SCAN).

*/

/*  EVALUATION OF PREFIX EXPRESSION WITH USING STACK
    PROCEDURE -

    1. Scan the expression from right to left.
    2. If find a operand , push it into the stack.
    3. If an operator in encountered , pop out TOP and (TOP-1) operand and PUSH the result of [TOP <operator> (TOP-1)] into stack.
    4. After repeating step 3 till we scan the whole expression , top of the stack will be our final answer.

    [WE CAN USE THIS APPROACH FOR CONVERSION OF POSTFIX EXPRESSION TO INFIX EXPRESSION]
    
*/