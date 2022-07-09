#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define N 5
int stack[N];
int top = -1;

void push() {
    int x;
    printf("Enter data : ");
    scanf("%d", &x);
    if (top == N-1)
    {       
        printf("Overflow Condition.\n");
    }
    else {
        top++;
        stack[top] = x;
    }
    
}

void pop() {
    int item;

    if (top == -1)
    {
        printf("Underflow Condition.\n");
    }
    else {
        item = stack[top];
        top--;
        printf("Popped item is : %d\n", item);
    }
    
}

void peek() {
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else {
        printf("Topmost element : %d", stack[top]);
    }
}

void display() {
    //Method 1
    int i;

    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    
    else {
        printf("Stack :\n");
        for ( i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }

        //Method 2
        // while (top--)
        // {
        //     printf("%d\n", stack[top]);
        // }
    }
    
}

void main() {
    int ch;
    // clrscr();
    system("cls");
    do
    {
        printf("Enter choice : 1:Push 2:Pop 3:Peek 4:Display 5:Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2: 
            pop();
            break;
        case 3: 
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice\n");
            break;
        }
    } while (1);
    getch();
}