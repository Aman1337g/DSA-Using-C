#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;


void enqueue() {
    int x;
    printf("Enter data : ");
    scanf("%d", &x);
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if (front == NULL && rear == NULL)
    {
        front = rear = newnode;
    }
    else {
        rear->next=newnode;
        rear = newnode;
    }    
}

void display() {
    struct node *temp;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty.\n");
    }
    else {
        printf("Queue : ");
        temp = front;
        while (temp!=NULL)
        {
            printf("%-4d", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }  
}

void dequeue() {
    struct node *temp;
    temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("Underflow Condition.\n");
    }
    else {
        printf("Dequeued element : %d\n", front->data);
        front=front->next;
        free(temp);
    }
}

void peek() {
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty.\n");
    }
    else printf("Front element is : %d\n", front->data);
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