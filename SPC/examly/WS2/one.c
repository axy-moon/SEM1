// You are using GCC
#include<stdio.h>
#include<stdlib.h>

int main() {
    int N;
    scanf("%d",&N);
    
    int arr[N];
    int temp;
    
    for(int i=0;i<N;i++) 
        scanf("%d",&arr[i]);
    
    for(int i=0;i<N;i++) {
        for(int j=i+1;j<N;j++)
        {
        if(abs(arr[i])>abs(arr[j])) {
                
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
        }
    }
      
}
    for(int i=0;i<N;i++) {
        printf("%d ",arr[i]);
    }

return 0;
}