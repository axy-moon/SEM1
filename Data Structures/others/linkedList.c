#include<stdio.h>
#include<stdlib.h>
struct node {
    char data;
    struct node *next;
};

void printList(struct node *head) {
    struct node *temp = head;
    while(temp!=NULL) {
        printf("%c",temp->data);
        temp = temp->next;
    }
}

void insertNode(struct node **first,char elt) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = elt;
    newNode->next = NULL;

    struct node *temp = *first;
    while(temp->next!=NULL) {
        temp=temp->next; }
    temp->next=newNode;
} 
int main() {
    struct node *first;
    char a;

    first = malloc(sizeof(struct node));

    first->data = 'a';
    first->next = NULL;
    insertNode(&first,'u');
    printList(first);
    int n;
    printf("How many nodes to add: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%c",&a);
        insertNode(&first,a);
    }

    printList(first);
}
