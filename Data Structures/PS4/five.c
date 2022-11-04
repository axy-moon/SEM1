#include<stdio.h>

int main() {

    float scores[8] = {};
    float tempVar;
    float sum = 0;



    printf("Enter 8 Scores(out of 10): ");
    
    for(int i = 0;i<8;i++)
        scanf("%f",&scores[i]);

    for(int i=0;i<8;i++) {
        for(int j=0;j<=i;j++) {
            if(scores[i] < scores[j]) {
                tempVar = scores[i];
                scores[i] = scores[j];
                scores[j] = tempVar;
            }
        }    
    }


    int k=1;
    while(k<7) {
        sum += scores[k];
        k++;
        }   
    float avg = sum/6.0;

    printf("\nYour Lowest score: %.2f",scores[0]);
    printf("\nYour maximum score: %.2f",scores[7]);
    printf("\nYour total points: %.2f",sum);
    printf("\nYour average point is %.2f",avg);

}