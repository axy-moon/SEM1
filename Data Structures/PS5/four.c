#include<stdio.h>
#include<string.h>


int main() {

    char strOne[25];
    char strOne[25];
    int len;
    int j = 0;
    printf("Enter the string: ");
    scanf("%s",strOne);

    len = strlen(strOne);


    for(int i=0;i<len;i++) {


        if(strOne[i]!='b')
            strTwo[j] = strOne[i];
        else if(strOne[i] == 'a'){
            if(strOne[i+1] == 'c') {
                strOne[i] = '';
                strOne[i+1] = '';
            }
        }
        j++;

    }

    printf("%s",strOne);


    return 0;
}