/*
Corner Elements
r = 4
c = 3

00 01 02
10 11 12
20 21 22
30 31 32


i = 0 , j = 0
i= 0 , j = c - 1

i= r-1 , j = 0 
i = r-1 , j = c - 1

*/

#include<stdio.h>

int main() {

    int row,col;

    printf("Enter the no of rows: ");
    scanf("%d",&row);

    printf("Enter the no of columns: ");
    scanf("%d",&col);

    int twoDim[row][col];

    printf("Enter the array Elements: \n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) 
            scanf("%d",&twoDim[i][j]);
    }

    printf("Corner Elements: %d %d %d %d", twoDim[0][0],twoDim[0][col-1],twoDim[row-1][0],twoDim[row-1][col-1]);
    printf("\nSum of the Corner Elements: %d", twoDim[0][0]+twoDim[0][col-1]+twoDim[row-1][0]+twoDim[row-1][col-1] );
}