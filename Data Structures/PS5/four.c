#include<stdio.h>
#include<string.h>


int main() {

    char strOne[25];
    char strTwo[25];
    int len;
    int i=0;

    printf("Enter the string: ");
    scanf("%s",strOne);

    len = strlen(strOne);


    while(strOne[i])

        if(strOne[i]=='b') {
            strOne[i] = strOne[i+1];
            i++;
        if(strOne[i] == 'a' && strOne[i+1] == 'c') {
            strOne[i] = strOne[i+2];
            i=i+2;
            }
        else
            i++;
        }

    printf("%s",strOne);

    return 0;
}