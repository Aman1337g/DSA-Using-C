/*
    Searching Algorithm

    b) binary search - uses divide and conquor technique

    PRE-REQUISITE - array must be SORTED.
                                            TIME COMPLEXITY (TC)
    In best case , TC = O(1)
    In worst case , TC = O(log(n))
    In average case , TC = O(log(n))

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binarySearch(int n, int A[], int data)
{
    int lb = 0, ub = n - 1;
    while (lb < ub)
    {
        int mid = floor((lb + ub) / 2);
        if (data == A[mid])
            return mid;
        else if (data < A[mid])
            ub = mid - 1;
        else
            lb = mid + 1;
    }

    return -1;
}

void main()
{
    int n, data, i, loc;
    int *A;
    printf("Enter size of array : ");
    scanf("%d", &n);
    // int A[n];
    A = (int *)malloc(n * sizeof(int));
    printf("Enter array : ");
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("Entered array : ");
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\nEnter element to search : ");
    scanf("%d", &data);
    loc = binarySearch(n, A, data);
    if (loc == -1)
        printf("Element not found !!");
    else
        printf("Element found at position : %d", loc + 1);
}
/*
OUTPUT

Enter size of array : 5
Enter array : 23 21 11 1 3
Entered array : 23 21 11 1 3
Enter element to search : 55
Element not found !!
*/