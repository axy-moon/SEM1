#include<stdio.h>
#include<stdlib.h>
#define size 5

int queue[size];
int front = -1,rear = -1;

int insert();
int delete();
void display();


int main() {

     int choice;

    while(1) {
        printf("\n1.DISPLAY QUEUE\n");
        printf("2.INSERT AN ELEMENT\n");
        printf("3.DELETE AN ELEMENT\n");
        printf("4.EXIT");

        printf("\n\nInput: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1: display();
                    break;
            case 2: insert();
                    break;
            case 3: delete();
                    break;
            case 4: exit(0);

            default: printf("Invalid Choice\n");
        }

    }

}

int insert() {
    
    int val;

    if (front == 0 && rear == size-1) {
        printf("\nQueue Full");
        return 0;
    }
    else if(front == -1 && rear==-1)
         rear = 0;
         front = 0;
    else 
        rear = rear + 1;

    printf("\nEnter the element to insert: ");
    scanf("%d",&val);
    queue[rear] = val;
}

int delete() {

    if(front=-1) {
        printf("\nQueue Empty");
        return 0;
    }
    
    int val = queue[front];

    if (front == rear) {
        front = rear = -1;
    }

    else {
        if(front=size-1)
        {
            front = 0;
        }
        else {
            front = front + 1;
        }
    }

}

void display() {

    for(int i=0;i<=rear;i++)
        printf("%d ",queue[i]);

}