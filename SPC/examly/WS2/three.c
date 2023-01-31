// You are using GCC
#include<stdio.h>

int main() {
    
    int sum,n;
    int count=0;
    
    scanf("%d",&sum);
    
    scanf("%d",&n);
    
    int pair[n];
    
    for(int i=0;i<n;i++)
        scanf("%d",&pair[i]);
        
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++)
        {
            if(pair[i] + pair[j] == sum)
            count++;
        }
    }
    printf("%d",count);
    return 0;   
}