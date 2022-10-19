#include<stdio.h>

int main() {

    int num;

    for(;;)

    {
        printf("Enter a Number less than 100: ");
        scanf("%d",&num);

        if(num<100) {
            if (num%3 == 0 && num%5 ==0 && num%7 == 0) {
                printf("%d is a multiple of 3,5 and 7",num);
                break;
                }
        }
        else
            printf("Invalid Input. The Number should be less than 100");

    }
    

    return 0;
}