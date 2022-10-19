#include<stdio.h>
#include<math.h>

int main() {

    int i=1;
    float x;

    while(i<50) {
    
        x = sqrt(i);
        printf("%f\n",x);
        i+=2;

    }
    
    return 0;
}