#include<stdio.h>
#include<string.h>


int main() {

    char strOne[25];
    char strTwo[25];
    int lenOne,lenTwo;
    int j = 0;

    printf("Enter the String 1: ");
    gets(strOne);

    printf("Enter the String 2: ");
    gets(strTwo);
    
    lenOne = strlen(strOne);
    lenTwo = strlen(strTwo);

    if(lenOne != lenTwo) {
        printf("Not Anagram");
        return -1;
    }
    int count = 0;
    for(int i=0;i<lenOne;i++) {
        for(int k=0;k<lenOne;k++) {

            if (strTwo[j] == strOne[i]) {
                count++;
                //strTwo[j] = '*';
            }

        }
        //printf("%c%c ",strOne[i],strTwo[k]);
    }

    if(count == lenOne) {
        printf("The String is Anagram");
    }
    else
    printf("Not Anagram");
}