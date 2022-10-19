#include<stdio.h>
#include<string.h>

void main() {
    char vowels[] = {'a','e','i','o','u','A','E','I','O','U','\0'};
    char name[25];
    int count=0;

    printf("Enter your Name: ");
    gets(name);


    printf("Name: %s\n",name);

    for(int i=0;i<strlen(name);i++) {
        for(int j=0;j<strlen(vowels);j++) {
            if(name[i] == vowels[j])
                count++;
        }
    }
    printf("No of Vowels: %d",count);
}