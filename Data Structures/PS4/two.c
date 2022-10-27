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
    printf("\nAscending Order: ");
    for(i=0;i<max;i++) {
        printf("%d ",numArray[i]);
    }
    printf("\nDescending Order: ");
    
    for(i=max-1;i>=0;i--) {
        printf("%d ",numArray[i]);
    }
return 0;
}