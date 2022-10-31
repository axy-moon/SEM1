#include<stdio.h>

void main() {

    int numArray[] = {3,6,1,2,5,6,-1,-6,99,-23,-8,5,10,21,22};

    int len = sizeof(numArray)/sizeof(numArray[0]);
    int negCount = 0,posCount = 0,oddCount = 0,evenCount = 0; 
    for(int i=0;i<len;i++) {
        
        if(numArray[i]<0) {
            negCount++;
        }
        else
            posCount++;     
        if(numArray[i]%2!=0)
                oddCount++;
        else
            evenCount++;
    }

    printf("Positive Nos: %d",posCount);
    printf("\nNegative Nos: %d",negCount);
    printf("\nOdd Nos: %d",oddCount);
    printf("\nEven Nos: %d",evenCount);


}

