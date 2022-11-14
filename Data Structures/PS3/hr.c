#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    int width,len;
    char str[100];
    int j;

    printf("Enter the width value: ");
    scanf("%d",&width);

    printf("\n Enter the String: ");
    scanf("%s",str);

    len = strlen(str);

    for(int i=0;i<=len;i++) {

         
         if((i+1)%width==0) {
            printf("%c",str[i]);
            printf("\n");
        }
        else {
             printf("%c",str[i]); 
    }
}

return 0;

}
