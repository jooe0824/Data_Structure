#include <stdio.h>
void insertion_sort(int num[], int n);
void print_array(int num[], int n);

void main(){
    int num[] = { 20, 19, 14, 16, 18};
    insertion_sort(num, 5);
}

void print_array(int num[], int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}

void insertion_sort(int num[], int n){
    int i,j,pivot;
    for (i=1; i<n; i++){
        pivot = num[i];
        for (j=i-1; j>=0 && pivot<num[j]; j--){
            num[j+1] = num[j];
            num[j] = pivot;
        }
        print_array(num, n);
    }
}

// 결과
// 19 20 14 16 18 
// 14 19 20 16 18 
// 14 16 19 20 18 
// 14 16 18 19 20 