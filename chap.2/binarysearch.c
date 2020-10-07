#include <stdio.h>
int binary_search(int list[], int item, int left, int right);


void main()
{
    int pos, max = 12, item = 60;
    int list = {4,7,12,18,32,36,48,53,60,67,80,82};
    pos = binary_search(list, item, 0, max-1);
    printf("where? : %d", pos);
}

int binary_search(int list[], int item, int left, int right){
    int median;
    while(left <= right){
        median = (left + right)/2;
        if(list[median] == item){
            return median;
        }
        else {
            if(item < list[median]){ //왼쪽 서브 트리를 봐야한다
                right = median - 1;
            }else{
                left = median + 1;
            }
        }
        return -1;
    }
}

//재귀적 방법 이용한 이진 탐색
int rbinary_search(int list[], int searchkey, int left, int right){
    int median;
        if(left <= right){
            median = (left + right)/2;
            if(searchkey < list[median]){ //왼쪽 서브 트리를 봐야한다
                return rbinary_search(list, searchkey, left, median-1);
            }
            else if(searchkey > list[median]){ //오른쪽 서브 트리를 봐야한다
                return binary_search(list, searchkey, median+1, right);
            }
            else{
                return median;
            }
        }
        return -1;
}