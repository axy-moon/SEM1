// You are using GCC
#include<stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    int arr[n],odd[n],even[n];
    
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int j=0,k=0,oddCount=0,evenCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[j++]=arr[i];
            evenCount++;
        }
        else {
            odd[k++]=arr[i];
            oddCount++;
        }         
    }
    
    for(int i=0;i<evenCount;i++)
        printf("%d ",even[i]);
    printf("\n");
    for(int j=0;j<oddCount;j++)
        printf("%d ",odd[j]);
    
}