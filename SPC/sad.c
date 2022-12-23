#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int saddlept(int **a, int r, int c);


void main()
{
    int **a,i,j,n,temp,r,c;
    int min_row=0,col_index=0,k;
    printf("\n Enter the rows and columns: ");
    scanf("%d %d",&r,&c);

    a=(int**)malloc(r*c*sizeof(int*));

    for(i=0;i<r;i++)
        a[i]=(int*)malloc(c*sizeof(int));


    printf("\n Enter the elements: \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&(*(*(a+i)+j)));
            printf("%d",&(*(*(a+i)+j)));
        }
    }


    printf("\n The matrix format is: \n");

    for(i=0;i<r;i++)
    {   printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d ",*(*(a+i)+j));
        }
    }


    if(saddlept(a,r,c)==0)
    {
        printf("\n No saddle point is found");
    }
    free(a);
}


int saddlept(int **a, int r, int c)
 {
     int i,j,k,min_row,col_index;
    for(i=0;i<r;i++)
    {
        min_row=a[i][0];
        col_index=i;
        for(j=1;j<c;j++)
        {
            if(min_row > a[i][j])
            {
                min_row=a[i][j];
                col_index=j;

            }
        }

        for(k=0;k<r;k++)
        {
            if(min_row < a[k][col_index])
            {
                break;
            }
        }

        if(k==r-1)
        {
            printf("\n The saddle point is: %d",min_row);
            return 1;
        }

    }
    return 0;

}
