#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL, *newnode, *temp;
int pos, count=0, i=0;
// head=NULL;
void createNode() {
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    printf("Enter data : ");
    scanf("%d", &newnode->data);
    if (head==NULL)
    {
        head=temp=newnode;
    }
    else {
        temp->next=newnode;
        temp=newnode;
    }
    count++;
}

void insertAtBeginning() {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &newnode->data);
    newnode->next=head;
    head=newnode;
    count++;
}

void insertAtEnd() {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d", &newnode->data);
    temp=head;
    newnode->next=NULL;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    count++;
}

void insertAtPosition() {
    printf("Enter position : ");
    scanf("%d", &pos);
    if (pos>count)
    {
        printf("Invalid Position.!!\n");
    }
    else {
        temp = head;
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter data : ");
        scanf("%d", &newnode->data);
        while (i<pos)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next; //we have to follow this sequence only as if we write temp->next=newnode the link between original nodes will break and we cannot link the newnode to next node. 
        temp->next=newnode;
    }
    
}

void display() {
    printf("Linked List : ");
    temp=head;
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
        for ( i = 0; i < n; i++)
        {
            createNode();
        }
    while (1)
    {
        printf("1.Insert at beginning 2.Insert at end 3.Insert at position 4.Display 5.Exit\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: insertAtBeginning(); break;
        case 2: insertAtEnd(); break;
        case 3: insertAtPosition(); break;
        case 4: display(); break;
        case 5: exit(0); break;
        default: printf("Invalid Choice\n"); break;
        }
    }
}