#include<stdio.h>
#include<math.h>
int fact(int x);

void main()
{
    double x,ax,ss=0,sin_x=0, temp;
    int i,n,sign=-1;

    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter n: ");
    scanf("%d", &n);
    //convert degree into radian
    ax=x;
    x = x*(3.14159/180);

    //functionality
    for(i=1;i<=n;i=i+2)
    {
        sign = -sign;
        temp = sign*pow(x,i)/fact(i);
        sin_x = temp + sin_x;
    }

    printf("Sin(%.2lf) Using Functionality: %lf", ax,sin_x);
    //check with sin function
    ss = sin(x);
    printf("\nSin(%.2lf) Using Math.h: %lf",ax,ss);
}

int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}