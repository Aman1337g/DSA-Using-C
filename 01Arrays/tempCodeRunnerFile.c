#include<stdio.h>
void main() {
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int *p; 
    int q;
    p = &a[0][0];

    printf("%p\n", p);
    printf("%d\n", a);
    printf("%d\n", a+1);
    printf("%d\n", &a[0][1]);
    printf("%d\n", &a[1][0]);
    printf("%d\n", *a+1);
}