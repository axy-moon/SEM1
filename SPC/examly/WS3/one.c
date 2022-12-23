// You are using GCC
#include<stdio.h>
#include<string.h>

int strs(char s[],char x[]) {
    
    int count = 0,j=0;
    int index;
    
    int len1 = strlen(s);
    int len2 = strlen(x);
    
    for(int i=0;i<len1;i++) {
        index = -1;
        for(int j=0;j<len2;j++) {
            if(s[i+j] != x[j]) {
                printf("%c",s[i+j]);
                index = -1;
                break;
            }
            index = i;
        }
        if(index!=-1)
            break;
    }
    
    return index;
}

int main() {
    char s[1000];
    char x[1000];
    
    scanf("%s",s);
    scanf("%s",x);
    int pos = strs(s,x);
    printf("%d",pos);
    
}
