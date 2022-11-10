#include<stdio.h>

void main() {
    
    char str[25];
    char str2[25];

    int count = 0;

    printf("Enter the string: ");
    gets(str);

    /* int len = printf("%s\n",str) - 1;
    printf("Length = %d\n",len); */

    for(int k=0;str[k]!='\0';k++){
        count++;
    }
    printf("Length : %d\n",count);

    printf("Reversed String: ");    
    for(int i=count;i>=0;i--)
        printf("%c",str[i]);

    for(int j=0;j<count;j++) {
        str2[j] = str[j];
    }   

    printf("\nCopied String: %s",str2);

}