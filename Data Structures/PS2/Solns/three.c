#include<stdio.h>

int main() {

    float x;

    printf("Enter the x value: ");
    scanf("%f",&x);

    while (x>0) {
        x -= 0.5;
        printf("%.2f\n",x);
    }

    return 0;
}