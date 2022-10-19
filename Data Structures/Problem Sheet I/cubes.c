#include<stdio.h>
#include<math.h>

int main() {

    int index=1,x;

    for(index=1;index<11;index++) 
    {
        x = pow(index,3);
        printf("%d\n",x);
    }

    return 0;

}