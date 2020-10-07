#include <stdio.h>
void mergesort(int num[], int left, int right);
void merge(int num[], int left, int mid, int right);
void print_array(int num[], int n);

void main(){
    int num[]= { 30,14,25,3,19,2,8,50 };
    print_array(num,8);
    mergesort(num,0,7); //수보다 한개 적게 right 설정 
}

void mergesort(int num[], int left, int right){
    int mid;
    if( right>left ){
        mid =( right+left )/2;
        mergesort(num, left, mid);
        mergesort(num, mid+1, right);
        //반 쪼개서
        merge(num, left, mid+1, right);
        print_array(num, 8);
    }
}

void merge(int num[], int left, int mid, int right){
    int i, left_end, num_items, pos;
    int temp[100]; //임시 배열을 이용

    left_end = mid-1;
    pos = left;
    num_items = right - left + 1; //파티션안의 몇개의 수가 있는지

    while((left <= left_end) && (mid <= right)){
        if(num[left] <= num[mid]){
            temp[pos] = num[left];
            pos = pos+1;
            left = left+1;
        }
        else{
            temp[pos] = num[mid];
            pos = pos+1;
            mid = mid+1;
        }
    }

    while(left<=left_end){
        //첫번째 세그먼트에 남아 있는 항목 추가
        temp[pos]=num[left];
        pos = pos+1;
        left = left+1;
    }

    while(mid<=right){
        //두번째 세그먼트에 남아 있는 항목 추가
        temp[pos] = num[mid];
        pos = pos+1;
        mid = mid+1;
    }

    for(i=0;i<num_items;i++){
        num[right] = temp[right];
        right = right-1;
    }
}

void print_array(int num[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}