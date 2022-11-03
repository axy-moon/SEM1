#include<stdio.h>
#include<string.h>


int main() {

    char strOne[25];
    char strTwo[25];
    int len;
    int j = 0;
    printf("Enter the string: ");
    scanf("%s",strOne);

    len = strlen(strOne);


    for(int i=0;i<len;i++) {


        if(strOne[i]!='b') {
            if(strOne[i] != 'a' && strOne[i+1] != 'c') 
                strTwo[j] = strOne[i];
            else
                j+2;
        
            
        }
        else {
            j++;
            continue; }
        /* else if(strOne[i] == 'a'){
            if(strOne[i+1] == 'c') {
               //
               //
            } */
        
        

    }

    printf("%s",strTwo);

    return 0;
}