#include<stdio.h>
#include<string.h>

void main() {
    char vowels[] = {'a','e','i','o','u','A','E','I','O','U','\0'};
    char name[25];

    int count=0;

    printf("Enter your Name: ");
    gets(name);

    int len1 = strlen(name);
    int len2 = strlen(vowels);

    printf("Name: %s\n",name);

    for(int i=0;i<len1;i++) {
        for(int j=0;j<len2;j++) {

            if(name[i] == vowels[j])
            count++; 
        }
    }
    printf("No of Vowels: %d",count);
}