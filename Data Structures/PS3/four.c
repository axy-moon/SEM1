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
        /* if(str[i] != ' ')
        {
            str[count] = str[i];
            count++;
             }
            
        }
    str[count] == '\0';
 */    
        if(str[i] == ' ') {
            if(str[i+1] == ' ') 
                str[]
        }

    }
    printf("%s",str);

}