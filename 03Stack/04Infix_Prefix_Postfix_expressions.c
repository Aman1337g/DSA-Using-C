/*  What is an Expression ?
    expression is a finite combination of symbols that is well-formed according to rules that depend on the context.
    Or it is a combination of constants, variables, symbols which are arranged according to some rules or grammer rules and we pass expressions according to these rules only.            
    For example - 5 + 1, p + q, a + 5 etc.

    General syntax - <operand> <operator> <operand>  [INFIX EXPRESSION] [here we are talking about binary operator]
    
    Operator can itself be a operand - eg. - (a-1) + 5 , here 'a-1' and '5' and operands and '+' is operator

    for 5 + 1 * 6 it can be evaluated as - 6 * 6 = 36 or 5 + 6 = 11 
    So there according to rules the precedence of operators is -
                            Associativity
    1. (), [], {}            
    2. ^                      R -> L
    3. *, /                   L -> R
    4. +, -                   L -> R

    Let's go to the previous example 5 + 1 * 6 , as '*' has higher precendence than '+' value of the expression will be 5 + 6 = 11
    eg-
    1 + 2 * 5 + 30 / 5 = as for '*' and '/' associativity is from L -> R , '2 * 5' will be evaluated first 
    = 1 + 10 + 30 / 5 = 1 + 10 + 6 = now associativity is from L -> R = 11 + 6 = 17(Ans)

    eg-
    2^2^3 = 2^8 [As for '^' associativity is from R -> L]
          = 256

    Processing of infix expression is difficult and it is costly in terms of time as well as memory consumption 
    , so we have two other types of expression - 

    1. PREFIX (Polish notation) - <operator> <operand> <operand>
       eg - for infix expression '5 + 1' it's prefix conversion will be '+ 5 1'
       eg - for 'a * b + c' , prefix conversion will be 
              = '* b a + c' = '+ * b a c' 

    2. POSTFIX (Reverse Polish notation) - <operand> <operand> <operator>
       Infix to Postfix conversion -
    eg - '5 + 1' = '5 1 +'
    eg - 'a * b + c' = 'a b * + c' = 'a b * c +'

    So, passing of postfix and prefix expressions are simple as compared to infix expressions in terms of memory consumption and time as well.
    Computer can easily understand prefix or postfix expressions and we humans can understand infix expressions easily.
*/