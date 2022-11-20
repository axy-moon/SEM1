#include<stdio.h>

int main() {

//Declaring Arrays

    int arrayOne[] = {1,3,5,7,9,11};
    int arrayTwo[] = {2,4,5,7,9};
    int arrayThree[] = {3,6,9,12};

    int n1 = sizeof(arrayOne)/sizeof(arrayOne[0]);
    int n2 = sizeof(arrayTwo)/sizeof(arrayTwo[0]);
    int n3 = sizeof(arrayThree)/sizeof(arrayThree[0]);

    int i=0,j=0,k=0;

    while(i<n1 && j<n2 && k<n3)
    {
        printf("%d %d %d\n",arrayOne[i],arrayTwo[j],arrayThree[k]);
       
        if(arrayOne[i] == arrayTwo[j] && arrayTwo[j] == arrayThree[k]) {
            printf("%d",arrayOne[i]);
            i++;
            j++;
            k++;
        }
        else if(arrayOne[i] < arrayTwo[j]){
            i++;
        }
        else if(arrayTwo[j] < arrayThree[k]){
            j++;
        }
        else{
            k++;
        }
    }

}
