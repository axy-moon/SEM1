#include<stdio.h>
#include<string.h>

int main() {

    char str[50];
    int count = 0;
    int len;
    int i;

    printf("Enter the string: ");
    gets(str);

    len = strlen(str);


    for(i=0;i<len;i++)
    {
        if(str[i] == ' ')
        {
            count++;
            continue;
             }
        if(count>1) {
            printf(" %c",str[i]);
            count=0;
        }
        else {
            printf("%c",str[i]);
        }
            
        }

}