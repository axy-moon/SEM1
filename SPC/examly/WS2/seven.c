// You are using GCC
#include<stdio.h>
#include<string.h>

struct emp {
  char name[50];
  char desn[50];
  char dept[30];
  int salary;
};




int main() {
    
    struct emp emp1;
    
    scanf("%s %s %s %d",emp1.name,emp1.desn,emp1.dept,&emp1.salary);
    
    if(strcmp(emp1.desn,"Secretary")==0 || strcmp(emp1.desn,"Additional_Secretary")==0)
        printf("Air travel is allowed");
    else if(strcmp(emp1.desn,"Joint_Secretary")==0 || strcmp(emp1.desn,"Deputy_Secretary")==0) {
        if(emp1.salary>20000)
            printf("Air travel is allowed");
        else
            printf("Air travel is not allowed");
    }
    else if (strcmp(emp1.desn,"Under_Secretary")==0 && strcmp(emp1.dept,"Marketing")==0)
        printf("Air travel is allowed");        
    else
        printf("Air travel is not allowed");