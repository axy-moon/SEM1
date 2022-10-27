#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    char str[30];
    char ch;
    int i=0;
    printf("Enter String: ");
    gets(str);

    while(str[i]) {
        ch = str[i];
        printf("%c",toupper(ch));
        i++;
    }


    return 0;
}