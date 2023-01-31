// You are using GCC
#include<stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct emp {
    char name[30];
    struct date dtjoin;
    int salary;
    int work_hours;
};



int main() {
    struct emp emp1;
    struct date cur_date;
    scanf("%d %d %d %d %d",&emp1.dtjoin.day,&emp1.dtjoin.month,&emp1.dtjoin.year,&emp1.salary,&emp1.work_hours);
    scanf("%d %d %d",&cur_date.day,&cur_date.month,&cur_date.year);
    
    int ex;
    
    ex = cur_date.year - emp1.dtjoin.year;
    if(ex<5 && emp1.work_hours==8)
        emp1.salary += 50;
    else if(5<=ex<=10 && emp1.work_hours == 10)
        emp1.salary += 100;
    else if(ex>10 && emp1.work_hours>=12)
        emp1.salary +=150;
    
    printf("%d",emp1.salary);
}