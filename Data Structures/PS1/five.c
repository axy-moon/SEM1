#include<stdio.h>

void main () {

    int n_of_calls;
    int charge=50;

    printf("Enter the Number of Phone calls made: ");
    scanf("%d",&n_of_calls);


    if(n_of_calls>99 && n_of_calls<200) {
        for(int i=0; i<n_of_calls;i++)
            charge += 1;
    }
    else if(n_of_calls>199 && n_of_calls<300) {
        for(int j=0;j<n_of_calls;j++)
        charge += 2;
    }
    else if(n_of_calls>299) {
        for(int k=0;k<n_of_calls;k++)
        charge += 3;
    }

    printf("Charge: %d",charge);
}
