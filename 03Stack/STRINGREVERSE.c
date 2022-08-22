#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[40]; // declare the size of character string  
    printf (" \n Enter a string to be reversed: ");  
    scanf ("%[^\n]%*c", str);  
      
    // use strrev() function to reverse a string  
    printf (" \n After the reverse of a string: %s ", strrev(str));  
    return 0;  
}  

/*
    Code to reverse the infix expression for conversion to prefix expression
    Input - K + L - M * N + ( O ^ P ) * W / U / V * T + Q
    Output - Q + T * V / U / W * ) P ^ O ( + N * M - L + K
    
    (^_^)
*/