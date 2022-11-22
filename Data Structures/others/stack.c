#include<stdio.h>
#include<stdlib.h>
#define size 5

int data[size], top=-1;

void pop();
void push();
void show();

int main() {

    int choice;

    while(1) {
        printf("\n1.DISPLAY STACK\n");
        printf("2.PUSH AN ELEMENT\n");
        printf("3.POP AN ELEMENT\n");
        printf("4.EXIT");

        printf("\n\nInput: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1: show();
                    break;
            case 2: push();
                    break;
            case 3: pop();
                    break;
            case 4: exit(0);

            default: printf("Invalid Choice\n");
        }

    }

}

void pop() {

    if(top==-1)
        printf("Stack is Empty");
    else {
        printf("Popped Element: %d: \n",data[top]);
        top = top - 1;
    }
}

void push() {
    
    int x;
    if(top==size-1) 
        printf("\nStack is Full");
    else {
        printf("\nEnter element to push: ");
        scanf("%d",&x);
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