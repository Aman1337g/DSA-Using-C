#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node {
    int data; 
    struct node *next;
    struct node *prev;   // pointer storing address of previous node 
};
struct node *head=NULL, *newnode, *temp; 

void create() {
    newnode = (struct node *)malloc(sizeof(struct node)); // malloc will return pointer to the first byte of the allocated block
    printf("Enter data : ");
    scanf("%d", &newnode->data);    // newnode->data is same as (newnode*).data
    newnode->prev=NULL;
    newnode->next=NULL;
    if(head == NULL) {
        head = temp = newnode;
    }
    else { 
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }       
}

void display() {
    temp = head;
    printf("Elements in doubly linked list : ");
    while (temp!=NULL) {
        printf("%d<->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void main() {
    int choice;
    while (1)
    {
        printf("1.Create 2.Display 3.Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: create(); break;
        case 2: display(); break;
        case 3: exit(0); break;
        }
    }
}