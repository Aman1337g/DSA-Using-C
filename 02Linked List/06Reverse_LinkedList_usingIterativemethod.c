#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL, *newnode, *temp;
int i;

void createNode() {
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->next=NULL;
    scanf("%d", &newnode->data);
    if (head==NULL)
    {
        head=temp=newnode;
    }
    else {
        temp->next=newnode;
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
    printf("NULL\n");
}

void reverse() {
    struct node *prevNode, *nextNode;
    // We are maintaining a nextNode pointer so that while reversing the node addresses we can maintain the link between nodes
    prevNode=NULL;
    temp = nextNode = head;
    while(nextNode!=NULL) {
        nextNode = nextNode->next; // Before updating the temp pointer we are pointing nextNode to next node 
        temp->next = prevNode;
        prevNode = temp;

        temp = nextNode;
    }
    head = prevNode;
}

void main() {
    int ch, n;
    printf("Enter no. of data in Linked List : ");
        scanf("%d", &n);
        printf("Enter data : ");
        for ( i = 0; i < n; i++)
        {
            createNode();
        }
    while (1)
    {
        printf("1.Reverse the Linked List  2.Display 3.Exit\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: reverse(); break;
        case 2: display(); break;
        case 3: exit(0); break;
        default: printf("Invalid Choice\n"); break;
        }
    }
}