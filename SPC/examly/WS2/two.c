// You are using GCC
#include<stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    if(n%2!=0) {
        printf("You are FOOL");
        return 0; 
    }
    
    int arr[n],prod;
    
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
            prod = arr[i] * arr[i+1];
            printf("%d ",prod);
            i++;
    }
        
    
    return 0;
}