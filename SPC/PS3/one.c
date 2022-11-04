#include<stdio.h>

int main() {

    int arr[] = {1,2,4,5,6,3,2,1,3,5};
    int k;

    printf("Enter value of k: ");
    scanf("%d",&k);

    for(int i=0;i<k;i++) {
        for(int j =i+1;j<k;j++) {
            if(arr[j]==arr[i]) {
                printf("True");
                return 1; 
            }

        }
    }

    printf("False");



}