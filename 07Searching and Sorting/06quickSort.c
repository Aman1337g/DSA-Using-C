/*                          QUICK SORT

    We use divide and conquor technique
    partitioning the array is the main funda HERE

    Time Complexity

    1) Best Case  - T(n) = 2T(n/2) + O(n)
                    //solution O(nLogn)
    2) Average Case - T(n) = T(n/9) + T(9n/10) + O(n)
                      //solution O(nLogn)
    3) Worst Cas - T(n) = T(0) + T(n-1) + O(n)
                   //solution O(n^2)

*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int lb, int ub)
{
    int pivot = a[lb], start = lb, end = ub;
    while (start < end)
    {
        while (a[start] <= pivot)
            start++;
        while (a[end] > pivot)
            end--;
        if (start < end)
            swap(&a[start], &a[end]);
    }
    swap(&a[end], &a[lb]);
    return end;
}
void quickSort(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(a, lb, ub);
        quickSort(a, lb, loc - 1);
        quickSort(a, loc + 1, ub);
    }
}
void main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Entered array : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nArray after sorting : ");
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
/*
OUTPUT

Enter size of array : 5
Enter array : 32 3 23 3 111
Entered array : 32 3 23 3 111
Array after sorting : 3 3 23 32 111
*/