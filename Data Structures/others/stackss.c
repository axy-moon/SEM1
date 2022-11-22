#include<stdio.h>
#include<stdlib.h>
int stack[50],top=-1,ele,repeat=1,n,ch;


void push(int n){

    if(top==n)
    {
    printf("\n The stack is full!");
    }
    else
       {
        printf("\n Enter the element to be inserted : ");
        scanf("%d", &ele);
        stack[top]=ele;
        top++;
    }

}

void pop(){

    int del;

if(top==-1){
    printf("\n Stack is empty");
    }
else
    {
    del=stack[top];
    top--;
    printf("\n The deleted element is : %d" , del);

    }

}

void display()
{   printf("\n Elements of stacks inserted are...\t");
    for(int i=top-1;i>=0;i--)
    printf("%d\t",stack[i]);
}

int main(){



    while(repeat=1)
   {
        printf("\n 1. Push \n 2.Display \n 3.Pop \n 4.End");
        printf("\n Enter the choice : ");
        scanf("%d", &ch);


        switch(ch)
        {
        case 1 :
            push(n);
            break;
        case 2 :
            display(n);
            break;
        case 3 :
            pop();
            break;
        case 4 :
            repeat=0;
            exit(0);

        }

   }



}