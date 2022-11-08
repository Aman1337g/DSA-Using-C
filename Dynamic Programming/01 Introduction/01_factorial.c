// Using RECURSION

// #include <stdio.h>
// #include <stdlib.h>

// static int count = 0;

// int fibo(int n)
// {
//     count++;
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return fibo(n - 1) + fibo(n - 2);
// }

// void main()
// {
//     int n;
//     printf("Enter number : ");
//     scanf("%d", &n);
//     // printf("Fibonacci sequence containing %d numbers : ", n);
//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("%d ", fibo(i));
//     // }
//     printf("Value of %d element starting from 0 1 1 2 .. %d: ", n, n);
//     printf("%d ", fibo(n));
//     printf("\nNo. of times fibo() function run : %d", count);
// }

// Using DYNAMIC PROGRAMMING
// i) Memoization technique or top-down approach

#include <stdio.h>
#include <stdlib.h>

static int count = 0;

int fibo(int n, int A[])
{
    int sum;
    if (A[n] != -1)
        return A[n];
    count++;
    if (n == 0)
        A[n] = 0;
    else if (n == 1)
        A[n] = 1;
    else
    {
        sum = fibo((n - 1), A) + fibo((n - 2), A);
        return sum;
    }

    A[n] = sum;
}

void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int memo[n];
    for (int i = 0; i < n; i++)
        memo[i] = -1;
    printf("Value of %d element starting from 0 1 1 2 .. %d: ", n, n);
    printf("%d ", fibo(n, memo));
    printf("\nNo. of times fibo() function run : %d", count);
}

// ii) bottom-top Approach
// Time Complexity = O(1)

// #include <stdio.h>
// #include <stdlib.h>

// static int count = 0;

// int fibo(int n)
// {
//     count++;
//     int A[n + 2];
//     A[0] = 0, A[1] = 1;
//     for (int i = 2; i <= n; i++)
//         A[i] = A[i - 1] + A[i - 2];

//     return A[n];
// }

// void main()
// {
//     int n;
//     printf("Enter number : ");
//     scanf("%d", &n);
//     printf("Value of %d element starting from 0 1 1 2 .. %d: ", n, n);
//     printf("%d ", fibo(n));
//     printf("\nNo. of times fibo() function run : %d", count);
// }