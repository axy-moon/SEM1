// You are using GCC
#include<stdio.h>

int main() {
    int n;
    
    scanf("%d",&n);
    int arr[n],res[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int k=0;
    int count = 0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]==-arr[j])
            {
                res[k++] = arr[i];
                res[k++] = arr[j];
                count++;
            }
        }
    }
    for(int i=0;i<2*count;i++)
        printf("%d ",res[i]);
}