// #include <stdio.h>

int count = 0;
void htower(int n, int a, int b);

void main(){
    int n=3;
    count =0;
    // printf("how many disk? :");
    // scanf("%d", &n); //disk의 갯수 받기
    htower(n,1,2); //n개를 1번 기둥에서 2번 기둥으로 옮기기
    printf("#how many moves for %d disks? : %d", n, count);
}

void htower(int n, int a, int b){
    int c;
    count++; //움직이는 횟수 ++
    if(n==1){
        printf("Disk %d, moved from (%d) to (%d)\n", n, a, b);
    }
    else{
        c = 6-1-b; //첫번째로 비어있는 기둥
        htower(n-1, a, c);
        printf("Disk %d, moved from (%d) to (%d)\n", n, a, b);
        htower(n-1, c, b);
    }
}