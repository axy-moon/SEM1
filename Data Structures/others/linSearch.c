#include<stdio.h>
#include<stdlib.h>

int main() {

    int numArray[] = {1,2,3,4,5,7,8,9,11,14,16,18,20};
    int value,len;

    len = sizeof(numArray)/sizeof(numArray[0]);

    printf("Enter the value to search: ");
    scanf("%d",&value);

    for(int i=0;i<len;i++) {

        printf("%d\n",numArray[i]);

        if(numArray[i]==value) {
            printf("%d is present in the position %d",value,i+1);
            break;
        }
        else if(numArray[i]>value) {
        printf("Value not found");
        return -1;
        }
    }
    return 0;
}