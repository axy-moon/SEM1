#include<stdio.h>

int main() {

    int i;
    int sum =0;

    for(i=1;i<1000;i++) {

        if(i%3==0 || i%5==0) {

            printf("%d\n",i);
            sum += i;
        }

    }

    printf("Sum of all multiples of 3 or 5: %d",sum);

    return 0;
}