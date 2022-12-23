#include<stdio.h>
#include "stack.c"


int main() {

    push(1);
    push(2);
    push(3);
    push(4);
    push(6);

    show();

    int count=0,i=0;
    int arr[] = {6,3,4,1,2};
    int arrlen = sizeof(arr)/sizeof(arr[0]);


    if(isPresent(4)) {
        printf("Present");
    }
    else {
        printf("Not Present");
    }


/*      for(int j=0;j<arrlen;j++) {
       count = 0;
       
       if(isPresent(arr[j])) {
            
            if(data[top]==arr[j]) {
                count++;
                pop();
        }

        else 
            count=0;
            printf("Element Not Present\n");
        }

        printf("No of Pop Count: %d ",count);

} */
    return 0;

}
