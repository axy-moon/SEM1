#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void printList(struct node *temp) {
    while(temp!=NULL) {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void insertAtHead(struct node **head,int elt) {

        
        struct node *temp;
        temp = malloc(sizeof(struct node));
        temp->data = elt;

        temp->next = *head; //point newNode to head node
        *head = temp;       //make new node as head
}


void insertAtEnd(struct node **head,int elt) {

    struct node *temp = malloc(sizeof(struct node));
    temp->data = elt;
    temp->next = NULL;

    
    if(*head==NULL)
        *head = temp;
    
    else {
        struct node *last = *head;
        while(last->next!=NULL) 
            last = last->next; 
        last->next = temp;
    }
}


void insertAt(struct node **head,int pos,int elt) {
    
    struct node *temp = *head;
    int index = 1;

    while(temp!=NULL) {
        index=index+1;
        temp=temp->next;

        if(index==pos-1)
            break;
    }

    struct *newNode = malloc(sizeof(struct node))
    temp->next = newNode;   



}








int main() {

    struct node *head;

    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->data = 5;
    two->data = 10;
    three->data = 15;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;
    insertAtHead(&head,6);
    insertAtHead(&head,9);
    insertAtEnd(&head,1);
    printList(head);


    return 0;
}


