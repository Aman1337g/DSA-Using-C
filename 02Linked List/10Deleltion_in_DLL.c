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

void delBeg() {
    if(head == NULL) printf("List is empty!!\n");
    else {
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
}

void delEnd() {
    if(head == NULL) printf("List is empty!!\n");
    else {
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
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

void delPos() {
    int pos, l = findLen();
    printf("Enter position : ");
    scanf("%d", &pos);
    if(head == NULL) printf("List is empty!!\n");
    else if(pos<0 || pos > l) printf("Invalid Position.\n");
    else if(pos == 1) delBeg();
    else if(pos == l) delEnd();
    else {
        temp = head;
        while(i<pos) {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
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
    while (1)
    {
        printf("1.Delete at beginning 2.Delete at end 3.Delete at position 4.Display 5.Exit\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: delBeg(); break;
        case 2: delEnd(); break;
        case 3: delPos(); break;
        case 4: display(); break;
        case 5: exit(0); break;
        default: printf("Invalid Choice\n"); break;
        }
    }
}