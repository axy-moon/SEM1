#include<stdio.h>
#include<stdlib.h>
void main() {

    int age,weight;

    printf("Enter your Age: ");
    scanf("%d",&age);

    if(age>=18 && age<=55) {

        printf("Enter your weight: ");
        scanf("%d",&weight);

        if(weight>45) {
            printf("You are eligible to donate blood");
            exit(0); 
        }
        
    }    
    printf("You are not eligible"); 
}

