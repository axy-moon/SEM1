// C program to search an element in an array where
// difference between all elements is 1
#include <stdio.h>
#include<stdlib.h>
// x is the element to be searched in arr[0..n-1]
int search(int arr[], int n, int ele)
{
    // Traverse the given array starting from
    // leftmost element
    int i = 0;
    while (i < n) {
        // If x is found at index i
        if (arr[i] == ele)
            return i;
        // Jump the difference between current array element and x
        i = i + abs(arr[i]-ele);
    }
    return -1;
}

int main()
{
    int n,i,ele;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i>=1 && abs(arr[i]-arr[i-1])!=1)
        {
            do
            {
                printf("The difference between the previously entered element and current element is not 1....please re-enter\n");
                scanf("%d",&arr[i]);
            }while(abs(arr[i]-arr[i-1])!=1);
        }
    }
    printf("\nThe given array:\n");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]); 
    }
    printf("\n\nEnter the element you want to search for : ");
    scanf("%d",&ele);
    int found=search(arr,n,ele);
    if(found==-1)
        printf("\nElement is not present\n\n");
    else
        printf("\nThe element is present at index %d\n\n",found);
    return 0;
}


// [2,1,4,5,7,11]