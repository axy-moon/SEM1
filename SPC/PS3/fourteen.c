#include<stdio.h>
#include<conio.h>

int main()
{
    //Variable Declaration
    int n1, n2, n3, i, j, k, count=0;

    //User Input for Array 1 (Sorted Elements)
    do{
        printf("\nEnter the No of Elements in Array 1 : ");
        scanf("%d",&n1);
    }while(n1<=0);
    int A1[n1];
    for(i=0;i<n1;i++){
        printf("\nArray 1[%d] : ",i);
        scanf("%d",&A1[i]);
    }

    //User Input for Array 2 (Sorted Elements)
    do{
        printf("\nEnter the No of Elements in Array 2 : ");
        scanf("%d",&n2);
    }while(n2<=0);
    int A2[n2];
    for(j=0;j<n2;j++){
        printf("\nArray 2[%d] : ",j);
        scanf("%d",&A2[j]);
    }

    //User Input for Array 3 (Sorted Elements)
    do{
        printf("\nEnter the No of Elements in Array 3 : ");
        scanf("%d",&n3);
    }while(n3<=0);
    int A3[n3];
    for(k=0;k<n3;k++){
        printf("\nArray 3[%d] : ",k);
        scanf("%d",&A3[k]);
    }

    //Displaying Elements of Array 1
    printf("\nArray 1 : ");
    for(i=0;i<n1;i++){
        printf("%d ",A1[i]);
    }

    //Displaying Elements of Array 2
    printf("\nArray 2 : ");
    for(j=0;j<n2;j++){
        printf("%d ",A2[j]);
    }

    //Displaying Elements of Array 3
    printf("\nArray 3 : ");
    for(k=0;k<n3;k++){
        printf("%d ",A3[k]);
    }

    //Finding Common Elements on Three Sorted Arrays
    printf("\n\nINTERSECTION OF THREE SORTED ARRAYS : ");
    i=0, j=0, k=0;
    //Exiting loop at the Point of reaching end of any one Array
    while(i < n1 && j < n2 && k < n3) {
        //Common Element on Three Sorted Arrays
        if(A1[i]==A2[j] && A2[j]==A3[k]){
            printf("%d ", A1[i]);
            i++;
            j++;
            k++;
            //To Check whether any Common element present or not
            count += 1;
        }
        //Element of A1 is less than Element of A2 (Incrementing Pointer of A1)
        else if(A1[i] < A2[j]){
            i++;
        }
        //Element of A2 is less than Element of A3 (Incrementing Pointer of A2)
        else if(A2[j] < A3[k]){
            j++;
        }
        //Element of A3 is less than Element of A1 (Incrementing Pointer of A3)
        else{
            k++;
        }
    }
    //When no Elements are Common in all the Three Sorted Arrays
    if(count == 0){
        printf("No Elements are Common in Both Arrays");
    }
    printf("\n\n");
}
