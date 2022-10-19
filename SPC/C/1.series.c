#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,term;
    int a = 0,sum = 0;

    printf("Enter the value of x: ");
    scanf("%d",&term);

    printf("Enter no of terms: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++) {

        a = a*10 + term;
        sum = sum + a;

    }

    return 0;
}