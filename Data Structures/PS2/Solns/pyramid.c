#include<stdio.h>

int main()
{
    int i,j,row;

    printf("Enter number of rows: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++) //space
    {
        for(j=1;j<=row-i;j++) //j = 1 2 3 4
        {
            printf(" ");  
        }

        for(j=i;j>=1;j--) //reverse numbers
        {
            printf("%d", j); // j = 1
        }

        for(j=2;j<=i;j++)  //order numbers
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}

//  
 

    1
   212
  32123
 4321234


    1
   212
  32123
 4321234