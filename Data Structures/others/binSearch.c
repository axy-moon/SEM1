#include<stdio.h>

void main() {

    int numArray[] = {1,2,3,4,5,7,8,9,11,14,16,18,20}; //decleration
    int low = 0;  // low = 0
    int high = sizeof(numArray)/sizeof(numArray[0]); //len = 13
    int mid = (low + high)/2;  //6
   
    int value;



    printf("Enter the value to search: ");
    scanf("%d",&value);

    while(low <= high) {
        
        mid = (low+high)/2;

        if(numArray[mid]>value)  //mid value 
            high = mid - 1; 
        else if(numArray[mid]<value) 
            low = mid+1;
        else {
            printf("%d is found in position %d", value,mid+1);
            return mid;
        }

    }

}