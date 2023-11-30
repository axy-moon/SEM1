#include<stdio.h>


struct student {
    int rollno;
    char name[20];
} 

int main() {
    
    struct student sree;
    sree->rollno = 15;
sree->name="Sreeman";

printf("%d %c", rollno, name);

}