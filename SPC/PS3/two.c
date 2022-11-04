#include<stdio.h>

int main() {

    int numArr[] = {1,2,3,4,-1,-3,-5,6,-4};

    int len = sizeof(numArr)/sizeof(numArr[0]);

    int posArr[len];
    int negArr[len];
    int j=0;
    for(int i=0;i<len;i++) {
        if(numArr[i]<0) {
            negArr[j] = numArr[i]; 
            j++;
        }
        else
            continue;

    }
    for(int k=0;k<len;k++)
    printf("%d",negArr[k]);

}