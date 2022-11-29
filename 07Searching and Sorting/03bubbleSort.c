/*
                            BUBBLE SORT

    By default , we are arranging in ascending order.
    In bubble sort , after each pass the largest element is accumulated (or bubbled up) at the last of the array.

    For , n = no. of elements in the list
    For UNOPTIMISED BUBBLE SORT ---> No. of Passes = n - 1
                                ---> No. of comparisions = n - 1

*/
// UNOPTIMISED CODE
#include <stdio.h>
#include <stdlib.h>
#define f(i, b) for (int i = 0; i < b; i++)

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {                                      // for no. of passes (n-1) as after (n-1) passes the last element will be already sorted
        for (int j = 0; j < size - 1; j++) // for no. of comparisons
        {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void main()
{
    int n, *a;
    printf("Enter size of array : ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter array : ");
    f(i, n) scanf("%d", &a[i]);
    printf("Entered array : ");
    f(i, n) printf("%d ", a[i]);
    bubbleSort(a, n);
    printf("\nArray after sorting : ");
    f(i, n) printf("%d ", a[i]);
}
/*
OUTPUT

Enter size of array : 5
Enter array : 1 22 1 23 11
Entered array : 1 22 1 23 11
Array after sorting : 1 1 11 22 23
*/

// OPTIMISED CODE TO REDUCE NO. OF COMPARISONS
/* For n = no. of elements in array
    ---> no. of passes = n-1
    ---> no. of comparisons =   (n-1)+(n-2)+(n-3)+...+0 = (n*(n+1))/2
*/
#include <stdio.h>
#include <stdlib.h>
#define f(i, b) for (int i = 0; i < b; i++)

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {                                          // for no. of passes (n-1) as after (n-1) passes the last element will be already sorted
        for (int j = 0; j < size - i - 1; j++) // reduced no. of comparison as after every pass largest element is bubbled up at the bottom(last)
        {                                      // "-1" as there is no need of comparing last and last-1 element
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void main()
{
    int n, *a;
    printf("Enter size of array : ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter array : ");
    f(i, n) scanf("%d", &a[i]);
    printf("Entered array : ");
    f(i, n) printf("%d ", a[i]);
    bubbleSort(a, n);
    printf("\nArray after sorting : ");
    f(i, n) printf("%d ", a[i]);
}
/*
OUTPUT

Enter size of array : 5
Enter array : 1 22 1 23 11
Entered array : 1 22 1 23 11
Array after sorting : 1 1 11 22 23
*/

// OPTIMISED CODE TO REDUCE NO. OF COMPARISONS AS WELL AS NO. OF PASSES
/* For n = no. of elements in array
    ---> no. of passes = n-1
    ---> no. of comparisons =   (n-1)+(n-2)+(n-3)+...+0 = (n*(n+1))/2
*/

#include <stdio.h>
#include <stdlib.h>
#define f(i, b) for (int i = 0; i < b; i++)

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int size)
{
    int flag = 0; // creating a flag variable to check if the array is already sorted
    for (int i = 0; i < size - 1; i++)
    {                                          // for no. of passes (n-1) as after (n-1) passes the last element will be already sorted
        for (int j = 0; j < size - i - 1; j++) // reduced no. of comparison as after every pass largest element is bubbled up at the bottom(last)
        {                                      // "-1" as there is no need of comparing last and last-1 element
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
}

void main()
{
    int n, *a;
    printf("Enter size of array : ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    printf("Enter array : ");
    f(i, n) scanf("%d", &a[i]);
    printf("Entered array : ");
    f(i, n) printf("%d ", a[i]);
    bubbleSort(a, n);
    printf("\nArray after sorting : ");
    f(i, n) printf("%d ", a[i]);
}
/*
OUTPUT

Enter size of array : 5
Enter array : 1 22 1 23 11
Entered array : 1 22 1 23 11
Array after sorting : 1 1 11 22 23
*/