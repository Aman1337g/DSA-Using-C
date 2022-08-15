// We can maintain both tail and head pointer for CLL
// And , we can also also maintain a tail pointer only.

// CLL implementation using both tail and head pointer 
// tail->next is going to store the address of the first node in a CLL
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
} *head, *tail;    // for CLL using only tail pointer we don't need head
typedef struct node nd;

// maintaining both head and tail pointer 
void createCLLHT() {
    int choice = 1;
    head = NULL;
    while(choice) {
        nd *newnode;
        newnode = (nd *)malloc(sizeof(nd));
        newnode->next = NULL;
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        if(head == NULL) head = tail = newnode;
        else {
            tail->next = newnode;
            tail = newnode;
        }
        tail->next = head;
        printf("Do you want to continue(0,1)? : ");
        scanf("%d", &choice);  // If you want to check if it's a CLL then check for tail->next->data = head->data
    }
}

// maintaining only tail pointer

void createCLLT() {
    int choice = 1;
    tail = NULL;
    while(choice) {
        nd *newnode;
        newnode = (nd *)malloc(sizeof(nd));
        newnode->next = NULL;
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        if(tail == NULL) {
            tail = newnode;
            tail->next = newnode;
        }
        else {
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
        printf("Do you want to continue(0,1)? : ");
        scanf("%d", &choice);  // If you want to check if it's a CLL then check for tail->next->data = head->data
    }
}

// display functions for both implementations
void displayHT() {
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

void displayT() {
    nd *temp;
    if(tail == NULL) printf("List is empty!!\n");
    else {
        temp = tail->next;
        while (temp->next != tail->next) {
            printf("%d<->", temp->data);
            temp = temp->next;
        }
        printf("%d<->NULL", temp->data);
    }
}

void main() {
    int ch;
    printf("1.Implementation using head and tail pointer 2.Implementation using tail pointer only\n");
    printf("Enter choice : ");
    scanf("%d", &ch);
    if(ch == 1) {
        createCLLHT();
        printf("Displaying :\n");
        displayHT();
    }
     if(ch == 2) {
        createCLLT();
        printf("Displaying :\n");
        displayT();
    }
}