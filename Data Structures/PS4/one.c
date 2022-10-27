#include<stdio.h>

int main() {

    int numArray[50];
    int max;
    int i,j,tempVar;
    printf("Max Range of Array: ");
    scanf("%d",&max);
    
    printf("\nEnter array elements sep by Space: ");


    for(i=0;i<max;i++)
    scanf("%d",&numArray[i]);

    for(i=0;i<max;i++) {
        for(j=0;j<=i;j++) {
            if(numArray[i] < numArray[j]) {
                tempVar = numArray[i];
                numArray[i] = numArray[j];
                numArray[j] = tempVar;
            }
        }
    }

        printf("\n%d is the second largest",numArray[max-2]);

}