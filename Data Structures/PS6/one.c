#include<stdio.h>
#include "stack.c"


int main() {

    push(1);
    push(2);
    push(3);
    push(4);
    push(6);

    show();

    int count,i;
    int arr[] = {6,3,4,1,2};
    int arrlen = sizeof(arr)/sizeof(arr[0]);

    i=0;

    while(i<arrlen) {

        
        if(data[top] == arr[i]) {
            count++;
            pop();
            printf("%d",count);
            continue;
        }
        else {
            pop();
            count++;
            continue;
        }

        i++;

    }

            printf("%d",count);



    return 0;
}