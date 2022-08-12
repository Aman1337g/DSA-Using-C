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
    printf("Enter data : ");
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

void insertBeg() {  
    nd *newnode;
    newnode = (nd *)malloc(sizeof(nd));
    newnode->prev = NULL;
    newnode->next = NULL; 
    printf("Enter data : ");
    scanf("%d", &newnode->data);
    if(head == NULL) head = tail = newnode;
    else {
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
}

void insertEnd() { 
    nd *newnode;
    newnode = (nd *)malloc(sizeof(nd));
    newnode->prev = NULL;
    newnode->next = NULL; 
    printf("Enter data : ");
    scanf("%d", &newnode->data);
    if(head == NULL) head = tail = newnode; // condition if there is no node at the start
    else {
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
}

int findLen() {
    temp = head;
    while(temp!=NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPos() {
    int pos, l = findLen();
    printf("Enter position : ");
    scanf("%d", &pos);
    if(pos<0 || pos>l) printf("Invalid Position!!");
    else if(pos == 1) insertBeg();
    else {
        temp = head;
        while(i<pos-1) { temp = temp->next; i++;}
        nd *newnode;
        newnode = (nd *)malloc(sizeof(nd));
        // newnode->prev = NULL;   // no need to set these two pointers as we have to change these already
        // newnode->next = NULL; 
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
        /*
        Another way
        newnode->prev = temp;
        temp->next->prev = newnode;
        newnode->next = temp->next;
        temp->next = newnode;
        */
    }
}

void insertAfterPos() {
    int pos;
    int l = findLen();
    printf("Enter position : ");
    scanf("%d", &pos);
    if(pos<0 || pos>l) printf("Invalid Position!!");
    else {
        temp = head;
        while(i<pos) { temp = temp->next; i++;}
        nd *newnode;
        newnode = (nd *)malloc(sizeof(nd));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}

void display() {
    temp = head;
    printf("NULL<->");
    while (temp!=NULL) {
        printf("%d<->", temp->data);
        temp = temp->next;
    }
    printf("<->NULL\n");
}

void main() {
    int ch, n;
    printf("Enter no. of data in Linked List : ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++) createDLL();
    while (1)
    {
        printf("1.Insert at beginning 2.Insert at end 3.Insert at position 4.Insert after position 5.Display 6.Exit\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: insertBeg(); break;
        case 2: insertEnd(); break;
        case 3: insertAtPos(); break;
        case 4: insertAfterPos(); break;
        case 5: display(); break;
        case 6: exit(0); break;
        default: printf("Invalid Choice\n"); break;
        }
    }
}