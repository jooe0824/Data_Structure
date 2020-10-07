#include <stdio.h>
void print_array(int num[], int n);
void selection_maxsort(int num[], int n);

void main(){
    int num[] = { 9, 4, 5, 11, 8 };
    selection_maxsort(num, 5); //원소의 갯수 현재 5개
}

void print_array(int num[], int n){
    int i;
    for (i=0; i<n; i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}
/*
void selection_maxsort(int num[], int n){
    int i,j,max,temp;
    for (i=n-1;i>0;i--){
        max=i;
        for (j=i-1;i>=0;j--){
            if (num[max]<num[j]){
                max= j;
            }
        }
        temp = num[i];
        num[i] = num[max];
        num[max] = temp;
        print_array(num, n);
    }
    //print_array(num, n);
}
*/
void selection_maxsort(int num[], int n){
    int i,j,max,temp;
    for (i=n-1;i>0;i--){
        max=i;
        for(j=i-1;j>=0;j--){
            if(num[max]<num[j]){
                max = j;
            }
        }
        temp = num[i];
        num[i] = num[max];
        num[max] = temp;
    print_array(num, n);
    }
    //print_array(num, n);
}