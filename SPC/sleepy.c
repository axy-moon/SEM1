#include<stdio.h>
int main()
{
    int i,j,x,y;
    float num1,num2,den1,den2;
    float res1,res2;
    float div;
    
    for(i=10;i<=99;i++)
    {
        x=i;  //x = 16
        num1=x/10; //  num1 = 16/10 = 1 
        num2=x%10; //  num2 = 16%10 = 6  
        for(j=10;j<=99;j++)
        {
            y=j;  //y = 64
            den1=y/10; // 64/10 = 6
            den2=y%10;   // 64%10 = 4
            div=x/(float)y; //div =  16/64 = 0.25
            if(num1==den2)
            {
                res1=num2/(float)den1;
                if(res1==div)
                {
                   printf("\n%d/%d",x,y);
                }
            }
            else if(num2==den1) //num2 = 6 & den1 = 6
            {
                res2=num1/(float)den2;  //res2 = 1/4 = 0.25
                if(res2==div)
                {
                   printf("\n%d/%d",x,y);
                }
            }
        }
    }
}


16/64 = 1/4 = 0.25 //sleepy
16/64 = 0.25   //div