#include<stdio.h>

void main() {
    char str[25];
    char str2[25];
    printf("Enter the string: ");
    gets(str);

    int len = printf("%s\n",str) - 1;
    printf("Length = %d\n",len);

    printf("Reversed String: ");    
    for(int i=len;i>=0;i--)
        printf("%c",str[i]);

    for(int j=0;j<len;j++) {
        str2[j] = str[j];
    }   

    printf("\nCopied String: %s",str2);

}