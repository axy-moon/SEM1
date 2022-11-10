#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    char str[30];
    char ch;
    int i=0;
    printf("Enter String: ");
    gets(str);

    for(int i=0;str[i]!='\0';i++) {
        ch = str[i];
        ch = str[i] - 32;
        //printf("%c",toupper(ch));
        printf("%c",ch);
    }


    return 0;
}