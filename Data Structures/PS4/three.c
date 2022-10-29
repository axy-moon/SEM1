#include<stdio.h>

int main() {

    int numArray[] = {1,2,3,4,5,6,7,8,11,22,14,100};

    int len,value;
    
    len = sizeof(numArray)/sizeof(numArray[0]);

    printf("Enter the Element to search: ");
    scanf("%d",&value);

    for(int i=0;i<len;i++) {
        if(numArray[i]==value)
            printf("%d is in %d position",value,i+1);
    }



}