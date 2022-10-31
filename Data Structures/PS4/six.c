#include<stdio.h>

int main() {

    int numArray[] = {1,2,3,4,5,6};

    int key=2;

    for(int i=0;i<5;i++){

            
            numArray[i] = numArray[i+2];

        }

    for(int j = 0;j<5;j++) 
        printf("%d ",numArray[j]);
    
    }


