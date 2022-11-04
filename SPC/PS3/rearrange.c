#include <stdio.h>
 
void swap(int *array, int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
 
/*Seperates -ve and +ve in an array. first all -ve and then all +ve.
This approach is similar to partition step of quick sort */
void seperateNumbers(int *array, int size){
    int temp, left = 0, right = size-1;
    while(right > left){
     /* traverse from left to right till we find a +ve number */
     while(array[left] < 0)
         left++;
     /* traverse from right to left till we find a -ve numbers */
     while(array[right] > 0)
         right--;
      
     if(left < right){
            /* Swap array[left] and array[right] */
            swap(array, left, right);
        }
    }
}
 
void rearrangeNumbers(int *array, int size) {
    int i, j;
     
    /* Seperate -ve and +ve numbers */
    seperateNumbers(array, size);
  
    /* Find index of first +ve number */
    for(i = 0; array[i] < 0; i++);
  
    /* Now swap alternate -ve numbers with positive numbers */
    for(j = 1; (j < i) && (array[j] < 0); j += 2){
        swap(array, i, j);
        i++;
    }
    return;
}
 
int main(){
    int i, array[11] = {-3, 5, -5, -6, 8, -9, 7, 2, -14, 10, 17}; 
     
    rearrangeNumbers(array, 10);
     
    for(i = 0; i < 11; i++){
     printf("%d ", array[i]);
    }
 
    return 0;
}