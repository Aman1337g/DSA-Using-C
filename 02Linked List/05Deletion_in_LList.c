#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
struct node {
    //defining node datatype
    int data;
    struct node *next;    //pointer pointing to struct node or this pointer is storing the address of node
};

struct node *head=NULL, *newnode, *temp; //head pointer going to store the address of a node
//we have to create a new pointer temp so that it can be moved to store the address of next nodes as head pointer is fixed
int pos, i, count=0;

void createNode() {
    newnode = (struct node *)malloc(sizeof(struct node));   
    //malloc always returns the pointer to the starting address and singly malloc is going to return a void pointer ,as we are dealing with pointer to a node we have to typecast this void pointer as (struct node *)malloc(sizeof(struct node))
    scanf("%d", &newnode->data);  //newnode->data = *(newnode).data
    newnode->next=NULL;
    if (head==NULL)
    {
        head=temp=newnode;
    }
    else {
        temp->next = newnode;
        temp=newnode;
    }
    count++;
}

void deleteAtBeginning() {
    if (head == NULL) printf("Linked List is empty.");
    temp=head;
    head=head->next;
    free(temp);
    count--;
}

void deleteAtEnd() {
    struct node *prevNode;
    temp = head;
    while(temp->next!=NULL) {
        prevNode=temp;
        temp=temp->next;
    }
    if(temp==head) head=NULL;
    else prevNode->next=NULL;
    free(temp);
    count--;   
}

void deleteAtPos() {
    struct node *nextNode;
    int pos, i=1;
    temp=head;
    printf("Enter position : ");
    scanf("%d", &pos);
    if (pos<count) {
        while (i<pos-1) {
            temp=temp->next;
            i++;
        } 
        nextNode = temp->next;
        temp->next = nextNode->next;
        free(nextNode);
    }
    else { printf("Invalid Position !!");}
    count--;
}

void display() {
    printf("Elements in the Linked List : ");
    temp = head;
    while (temp!=NULL)
    {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

void main() {
    int ch, n;
    printf("Enter no. of data in Linked List : ");
    scanf("%d", &n);
    printf("Enter data : ");
    for ( i = 0; i < n; i++) createNode();
    while (1)
    {
        printf("1.Delete at beginning 2.Delete at end 3.Delete at position 4.Display 5.Exit\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: deleteAtBeginning(); break;
        case 2: deleteAtEnd(); break;
        case 3: deleteAtPos(); break;
        case 4: display(); break;
        case 5: exit(0); break;
        default: printf("Invalid Choice\n"); break;
        }
    }
}