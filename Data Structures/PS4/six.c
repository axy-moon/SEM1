#include<stdio.h>

int main() {

    int numArray[] = {1,2,3,4,5,6};
    int len;

    len = sizeof(numArray)/sizeof(numArray[0]);
    int key;

    printf("Enter the value of key: ");
    scanf("%d",&key);

    int j;
    int temp;

      for (int i=0; i<key; i++) {   
      
        j=len-1;                    
        temp = numArray[j];         
      
      for (; j>0; j--) {
         numArray[j] = numArray[j-1];    
      }
      
      numArray[0] = temp;
   }

    for(int c = 0;c<len;c++) 
        printf("%d ",numArray[c]); 
    
}

    


