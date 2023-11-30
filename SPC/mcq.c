#include <stdio.h>
int main()    { 
    int i = 0, j = 1;
    int *a[] = {&i, &j};
    printf("%d", (*a)[0]);
    return 0;   
}

#include <stdio.h>
void main(){
    
    char *a[10] = {"hi", "hello", "how"};
    
    int i = 0, j = 0;
    
    a[0] = "hey";
    
    for (i = 0;i < 10; i++)           
        printf("%s\n", a[i]);

}

 #include <stdio.h>
 int main() {
 int ary[4] = {1, 2, 3, 4};                                             
 int p[4];                                                                 
 p = ary;
 printf("%d\n", p[1]);   
 }

 void main() { 
    int a[] = {1,2,3,4,5}, *p;
       p = a;
       ++*p; //pre - increment
    
    printf("%d ", *p); //p = p+1 = a[1] = 2
    p += 2; // p = p+2
    printf("%d ", *p); //p+2 => a[2] = 3
}



//a[i][j][k][l]

//*(*(*(*(a+i)+j)+k)+l)

//*(*(a+i)+j)


 void  main()    {                                                                                                               char *str1 ="abcde";                                                                                  char str2[]= "abcde";                                                                               printf("%d,%d,%d",sizeof(str1),sizeof(str2), \                                                                                                                sizeof("abcde" ); }                                                                                                  sizeof(char) is 2and sizeof(pointer) is 8 



 char *(*(*a[N])())();


 int main()
{
    int a[] = {10,5,21,51,3,2,19}, *p;
    p = &a;	//(1) ___	;       
    printf("%d\n",*p);
    // It will print 10
     p=p+*(p+4);
    printf("%d\n",*p);	// What will be printed line? 
    // (2) ____ 
    p = p+1;
    printf("%d\n",*p);	// It will print 3                                                                                 
    p=p+2	;
    printf("%d\n",*p);	// It will print 19 
     p=p-*(a+1);
    printf("%d\n",*p);  // What will be printed above line? 
    // (5)___                                                     
  	return 0;
}