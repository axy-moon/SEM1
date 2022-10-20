#include<stdio.h>
#include<string.h>

int main() {

    char str[50];
    int count = 0;
    int len;
    int i=1;



    printf("Enter the string: ");
    gets(str);


    while(str[i])
    {
        if(str[i] != ' ')
        {
            str[count] == str[i];
            count++;
             }
            
            i++;
        }
    str[count] == '\0';
    
    printf("%s",str);

}