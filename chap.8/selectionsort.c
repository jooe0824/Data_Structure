#include <stdio.h>
void print_array(int num[], int n);
void selection_sort(int num[], int n);

void main(){
    int num[] = { 9, 4, 5, 11, 8 };
    selection_sort(num, 5); //원소의 갯수 현재 5개
}

void print_array(int num[], int n){
    int i;
    for (i=0; i<n; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}

void selection_sort(int num[], int n){
    int i,j,min,temp;
    for (i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(num[min]>num[j]){
                min = j;
            }
        }
        temp = num[i];
        num[i] = num[min];
        num[min] = temp;
    print_array(num, n);
    }
    //print_array(num, n);
}