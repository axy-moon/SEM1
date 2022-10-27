#include<stdio.h>

void main() {

    int course_marks,exam_marks;
    int total_marks;

    printf("Enter marks for course work: ");
    scanf("%d",&course_marks);

    printf("Enter marks for Exam: ");
    scanf("%d",&exam_marks);


    total_marks = course_marks + exam_marks;

    
    printf("\n----MARKS----\n");
    printf("| course: %d |\n",course_marks);
    printf("| exam: %d   |\n",exam_marks);
    printf("| total: %d  |\n",total_marks);
    printf("--------------\n");

    if(total_marks>45) {        
        
        if (course_marks<20 || exam_marks<20)
            printf("RESULT: FAILED with 45%% ");
        else
            printf("RESULT: PASS\n");

    }

    else
        printf("RESULT : FAIL");
}