#include <stdio.h>
void quick_sort(int num[], int left, int right);
void print_array(int num[], int n);

void main(){
    int num[] = { 8,25,3,12,5,19,7 };
    print_array(num, 7);
    quick_sort(num, 0, 6);
}

// void quick_sort(int num[], int left, int right){
//     int pivot, i, j, temp;

//     if(left < right){
//         i=left;
//         j=right+1;
//         pivot=num[left];
//         do{
//             do{i++;}while(num[i]<pivot);
//             do{j--;}while(num[j]>pivot);
//             if(i<j){
//                 temp = num[i];
//                 num[i] = num[j];
//                 num[j] = temp;
//                 print_array(num,7);
//             }
//         }while(i<j);

//         temp = num[left];
//         num[left] = num[j];
//         num[j] = temp;

//         if(left != j) {
//             print_array(num,7);
//         }
//         quick_sort(num, left, j-1);
//         quick_sort(num, j+1, right);
//     }
// }
void quick_sort(int num[], int left, int right){
    int pivot, i, j, temp;

    if(left < right){
        i=left+1;
        j=right;
        pivot=num[left];
        while(i<=j){
            while(num[i]<pivot){
                i++;
            }
            while(num[j]>pivot){
                j--;
            }
            if(i<j){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
                print_array(num,7);
            }
        }

        temp = num[left];
        num[left] = num[j];
        num[j] = temp;

        if(left != j) {
            print_array(num,7);
        }
        quick_sort(num, left, j-1);
        quick_sort(num, j+1, right);
    }
}

void print_array(int num[], int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}

//결과
// 8 25 3 12 5 19 7 
// 8 7 3 12 5 19 25 
// 8 7 3 5 12 19 25 
// 5 7 3 8 12 19 25 
// 5 3 7 8 12 19 25 
// 3 5 7 8 12 19 25 
