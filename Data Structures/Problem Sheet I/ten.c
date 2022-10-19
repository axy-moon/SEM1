#include<stdio.h>
#include<math.h>

int main() {

    int x,n,i;
    int sum=0;

    printf("Enter the Value of x: ");
    scanf("%d",&x);

    printf("Enter the Value of n: ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        sum += pow(x,i);
        printf("%d\n",sum);
        
    }

    printf("%d",sum);
    return 0;
}