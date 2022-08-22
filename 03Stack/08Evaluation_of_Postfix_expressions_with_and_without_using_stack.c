/* ALGORITHM - BEGIN

    for each character in postfix expression , do
    if operand is encountered , push it onto Stack
    else if operator is encountered , pop 2 elements 
        A -> top element
        B -> next top element
    result = B <operator> A
    push result onto stack

    return top element of Stack
*/

/*
    for evaluation of POSTFIX expressions we evaluate it from LEFT TO RIGHT

    EVALUATION OF GIVEN PREFIX EXPRESSION ->  a b c * + d e f ^ / - without using stack
    with values a = 2, b = 3, c = 4, d = 16, e = 2, f = 3

    As it is a postfix expression => <operand 1> <operand 2> <operator> type will be evaluated as <operand 1> <operator> <operand 2> 
    from left to right -> 

        2 3 4 * + 16 2 3 ^ / -    
          _____
    =   2 12 + 16 2 3 ^ / -
        ______
    =   14 16 2 3 ^ / -
              _____
    =   14 16 8 / -
           ______
    =   14 2 -
        ______
    = 12(Answer)    [IF WE DO NOT GET <operand 1> <operand 2> <operator> AT LAST MEANS WE DID MISTAKE SOMEWHERE]
*/

/*
    With using STACK - 

    EVALUATION OF GIVEN PREFIX EXPRESSION ->  a b c * + d e f ^ / - without using stack
    with values a = 2, b = 3, c = 4, d = 16, e = 2, f = 3

    2 3 4 * + 16 2 3 ^ / -
                                            STACK
    |       |                             |       |                             |       |      |   3   |
    |   4   |                             |       |                             |       |      |   2   |
    |   3   |  ('*' comes => 3*4 = 12)->  |   12  |  ('+' comes => 2*12 = 14)-> |       |  ->  |   16  | 
    |   2   |                             |   2   |                             |   14  |      |   14  |
    ---------                             ---------                             ---------      ---------
     
    |   3   |                             |       |                             |       |                              |       |
    |   2   |                             |   8   |                             |       |                              |       |
    |   16  |  ('^' comes => 2^3 = 8 )->  |   16  |  ('/' comes => 16*8 = 2 )-> |   2   |  ('-' comes => 14-2 = 12)->  |       | 
    |   14  |                             |   14  |                             |   14  |                              |   12  | (ANSWER)
    ---------                             ---------                             ---------                              ---------
     
    
    

*/