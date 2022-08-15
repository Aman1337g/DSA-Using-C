#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} *head;

void createCLL() {
    int choice = 1;
    struct node *newnode, *temp;
    head = NULL;
    while(choice) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL; 
        if(head == NULL) head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }
        temp->next = head;
        printf("Do you want to continue(0,1)? : ");
        scanf("%d", &choice);
    }
}

void display() {
    struct node *temp;
    if(head == NULL) printf("List is empty!!\n");
    else {
        temp = head;
        while (temp->next != head) {
            printf("%d->", temp->data);
            temp = temp->next;
        }
    }
    printf("%d->", temp->data);
    printf("NULL\n");
}

void main() {
    createCLL();
    printf("Displaying :\n");
    display();
}