#include <stdio.h>
void bubble_sort(int num[], int n);
void print_array(int num[], int n);

void main(){
    int num[] = { 5, 1, 4, 3, 8};
    bubble_sort(num, 5);
}

void print_array(int num[], int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}

void bubble_sort(int num[], int n){
    int i,j,swap,temp;
    for (i=0; i<n-1; i++){
        swap =0;
        for (j=0; j<n-1; j++){
            if(num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
                swap = 1;
            }
        }
        if (swap == 0) break;
        print_array(num, n);
    }
}

// 1 4 3 5 8 
// 1 3 4 5 8 
