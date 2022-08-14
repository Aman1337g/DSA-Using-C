#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data; 
    struct node *prev;
    struct node *next;
};
typedef struct node nd;
nd *head = NULL, *tail = NULL, *temp;
int count = 0, i = 1; // variable created to store the number of nodes

void createDLL() {
    nd *newnode;
    newnode = (nd *)malloc(sizeof(nd));
    // as malloc returns a void pointer, and newnode is a pointer to a node we typecast it to struct node * 
    // printf("Enter data : ");  // Uncomment to get the prompt of enter data otherwise write the data in single line
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;
    if(head == NULL) head = tail = newnode;
    else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

void reverseDLL() {
    nd *current, *nextnode;
    current = head;
    while(current != NULL) {
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }
    current = head;
    head = tail;
    tail = current;
}

void display() {
    if(head == NULL) {
        printf("List is empty!!\n");
    }
    else {
        temp = head;
        printf("NULL<->");
        while (temp!=NULL) {
            printf("%d<->", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

void main() {
    int ch, n;
    printf("Enter no. of data in Linked List : ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++) createDLL();
    printf("Before reversing :\n");
    display();
    printf("After reversing :\n");
    reverseDLL();
    display();
}