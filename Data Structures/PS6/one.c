#include<stdio.h>
#include "stack.c"



int main() {

    push(1);
    push(2);
    push(3);
    push(4);
    push(6);

    show();

    int count = 0;
    int arr[] = {6,3,4,1,2};
    int arrlen = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<arrlen;i++) {

        if(data[top] == arr[i]) {
            count++;
            pop();
        }
       

    }


    return 0;
}