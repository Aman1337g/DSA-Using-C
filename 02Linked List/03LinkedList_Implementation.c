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

void createNode() {
    newnode = (struct node *)malloc(sizeof(struct node));   //malloc always returns the pointer to the starting address and singly malloc is going to return a void pointer ,as we are dealing with pointer to a node we have to typecast this void pointer as (struct node *)malloc(sizeof(struct node))
    printf("Enter data : ");
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
}

void display() {
    printf("Elements in the Linked List : ");
    temp = head;
    while (temp!=NULL)
    {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

void main() {
    int choice;
    while (choice)
    {
        createNode();
        printf("Enter your choice(0,1)? : ");
        scanf("%d", &choice);
    }
    display();
}
