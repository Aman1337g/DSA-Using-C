#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;    // Self-referential structure - structures pointing to the same type of structures are self-referential in nature
};
struct node *top = NULL;

void push() {
    int x; 
    printf("Enter data : ");
    scanf("%d", &x);
    struct node *newnode;   
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;  // Adding newnodes at the beginning of linked list
    top = newnode;
}

void display() {
    struct node *temp;
    temp = top;
    if (top == NULL) printf("Stack is empty.\n");
    else {
        printf("Stack :\n");
        while (temp!=NULL) {
            printf("%d\n", temp->data);
            temp = temp->link;
        }
    }  
}

void peek() {
    if (top == 0) printf("Stack is empty.\n");
    printf("Top element is : %d\n", top->data);
}

void pop() {
    struct node *temp;
    temp = top;
    if (top == NULL) printf("Underflow Condition.\n");
    else {
        printf("Popped element is : %d\n", top->data);
        top = top->link;
        free(temp);
    }  
}

void main() {
    int ch;
    do {
        printf("Enter choice : 1:Push 2:Pop 3:Peek 4:Display 5:Exit\n");
        scanf("%d", &ch);
        switch (ch) {
        case 1: push(); break;
        case 2: pop(); break;
        case 3: peek(); break;
        case 4: display(); break;
        case 5: exit(0); break;
        default: printf("Invalid Choice\n"); break;
        }
    } while (1);
}