#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue() {
    int x;
    printf("Enter data : ");
    scanf("%d", &x);
    if (rear == N-1)
    {
        printf("Overflow Condition.\n");
    }
    else if (front = -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else {
        rear++;
        queue[rear] = x;
    }      
}

void dequeue() {
    if (front == -1 && rear == -1)
    {
        printf("Underflow Condition.\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else {
        printf("Dequeued element : %d\n", queue[front]);
        front++;
    }
}

void display() {
    int i;
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else {
        printf("Queue : ");
        for ( i = front; i < rear+1; i++)
        {
            printf("%-4d", queue[i]);
        }
        printf("\n");
    }
}

void peek() {
    if (front = -1 && rear == -1)
    {
        printf("Queue is empty.\n");
    }
    else printf("Front element in queue : %d\n", queue[front]);
}

void main() {
    int ch;
    // clrscr();
    system("cls");
    do
    {
        printf("Enter choice : 1:Enqueue 2:Dequeue 3:Display 4:Peek 5:Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2: 
            dequeue();
            break;
        case 3: 
            display();
            break;
        case 4:
            peek();
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