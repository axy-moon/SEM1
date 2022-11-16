#include<stdio.h>
#include<string.h>

int main() {
    char inpEmail[] = "22mx108@psgtech.ac.in";
    char valEmail[] = "@psgtech.ac.in"; //14
    char splChars[] = {'!','#','$','%','^','&','*','(',')','-','+','_','\0'};
    int count = 0;
    int inpLen = strlen(inpEmail);
    int valLen = strlen(valEmail);
    int i,j,k;

    for(i=valLen-1,j=inpLen-1;i>=0,j>=0;i--,j--) {
        printf("%c\t %c\n",inpEmail[j],valEmail[i]);
        if(inpEmail[j]==valEmail[i])
            count++;
    //    printf("\t K value: %c",inpEmail[k]);
    for(k=0;k<valLen-inpLen;k++)
    {
        
    }
    
    }



    printf("Count: %d\n",count);

    if(count==valLen)
        printf("Valid Email");
    else
        printf("Invalid Email");
}