#include <stdio.h>
 
void swap(int *array, int i, int j){
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
 
void seperateNumbers(int *array, int size){
    int zeroIndex = 0, oneIndex = 0, twoIndex = size-1;
    while(oneIndex <= twoIndex){
        switch(array[oneIndex]) {
           case 0 : {
                swap(array, zeroIndex++, oneIndex++);
                break;
                    }
           case 1 : {
                oneIndex++;
                break;
                    }
           case 2 :{
                swap(array, oneIndex, twoIndex--);
                   }
        }
    }
}
 
int main(){
    int array[12] = {0, 1, 2, 2, 1, 0, 0, 1, 2, 0, 2, 1}; 
    int i;
     
    seperateNumbers(array, 12);
     
    for(i = 0; i < 12; i++){
     printf("%d ", array[i]);
    }
 
    return 0;
}
