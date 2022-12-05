#include<stdio.h>
#include<stdlib.h>
#define size 5

int data[size], top=-1;

void pop();
void push();
void show();


void pop() {

    if(top==-1)
        printf("Stack is Empty");
    else {
        printf("Popped Element: %d: \n",data[top]);
        top = top - 1;
    }
}

void push(int x) {

    if(top==size-1) 
        printf("\nStack is Full");
    else {
        top += 1;
        data[top] = x;
    }
}

void show() {

    if(top==-1)
        printf("\nStack is Empty");
    else {
        printf("\nStack Contains\n");
        for(int i=top;i>=0;i--) {
            printf("%d\n",data[i]);
        }
    }
    printf("\n\n");
}