#include <stdio.h>
void printArray(int *ptr, int size);


void main(){
    int num[10] = {0,1,2,3,4,5,6,7,8,9};
    printArray(num,10);
}

void printArray(int *ptr, int size){
    int i;
    for (i=0; i<size; i++){
        printf("%8u %5d\t", ptr+i, *(ptr+i));
        printf("%8u %5d\n", &ptr[i], (ptr[i]));
    }
}