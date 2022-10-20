#include <stdio.h>
int main() {
   int rows, coef = 1, space, i, j; //variables init

   printf("Enter the number of rows: ");
   scanf("%d", &rows);  //no of rows input
   
   for (i = 0; i < rows; i++) {     // row times

      for (space = 1; space <= rows - i; space++)
         printf("  ");
      for (j = 0; j <= i; j++) {
         if (j == 0 || i == 0) //first value = 1
            coef = 1;
         else 
            coef = coef * (i - j + 1) / j;     //i=1,j=1 1*(1-1+1)/1 = 1 coeff = 1
         printf("%4d", coef);                  //i=2,j=1 1*(2-1+1)/1 = 2  coeff = 2
                                               //i=2 j=2 2*(2-2+1)/2 = 1  coeff = 1
                                            
                                                //i=3 j= 0                coeff = 1
                                               //i=3 j=1 1*(3-1+1)/1 = 3  coeff = 3  
      }                                        //i=3 j=2 
      printf("\n");
   }
   return 0;
}


                  