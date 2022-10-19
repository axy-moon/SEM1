#include<stdio.h> 

int main() {
  int n;
    printf("Enter the value: ");
    scanf("%d", &n);
    int length = n*2-1;
    int arr[length][length];

    for (int x = 0; x < n; x++){
        for (int i = x; i < length-x; i++) {
            for (int j = x; j < length-x; j++) {
                arr[i][j] = n-x;
            }
        }
    }
    
    
    for (int i = 0; i < length; i++) {
         for (int j = 0; j < length; j++) {
             printf("%d ", arr[i][j]);
         }
         printf("\n");
    }
		
	
    
    return 0;
}