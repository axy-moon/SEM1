#include<stdio.h> 

int main() {

    int m,n; //size of the matrix

    printf("Enter the no of rows: ");
    scanf("%d",&m);

    printf("Enter the no of columns: ");
    scanf("%d",&n);

    int sparseMatrix[m][n];
    int flag = (m*n)/2;
    int count = 0;

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) 
            scanf("%d",&sparseMatrix[i][j]);
    }

     for(int r=0;r<m;r++) {
        for(int c=0;c<n;c++) {
            
            if(sparseMatrix[r][c] == 0)
                count++;
/*           else
                continue; */
        }
    }

    if(count >= flag) 
        printf("\nThe given matrix is a Sparse Matrix");
    else
        printf("The given matrix is not a Sparse Matrix");
    return 0;

}