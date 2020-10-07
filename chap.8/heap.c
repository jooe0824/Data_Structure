#include <stdio.h>

void printheap(int heap[], int root, int n);
void makeheap(int heap[], int root, int n);
void heapsort(int heap[], int n);

void main(){
    int n = 7;
    int heap[] = { 0, 15, 20, 8, 30, 18, 48, 35 };
    printheap(heap, 1, n);
    heapsort(heap, n);
}

void makeheap(int heap[], int root, int n){
    int child, temp;
    temp = heap[root]; 
    child = 2 * root;
    while(child<=n){
        if((child<n) && (heap[child]<heap[child+1])){
            child++;
            //자식노드 중에서 큰 노드랑 부모랑 바꿔야 하니까
        }
        if(temp>heap[child]){
            break; //부모가 더 크다면 그냥 나온다
        }
        //부모와 자식노드를 비교한다
        else{
            heap[child/2] = heap[child];
            child *= 2; 
            //부모에 자식 값 넣기
        }
    }
    heap[child/2]=temp; 
    //자식에 부모값 저장해놓은 거 넣기
}

void printheap(int heap[], int root, int n){
    int i;
    for (i=root; i<=n; i++){
        printf("%d ", heap[i]);
    }
    //루트에서 부터 마지막 노드까지 
    printf("\n");
}

void heapsort(int heap[], int n){
    int i, temp;
    for(i=n/2; i>0; i--){
        makeheap(heap,i,n);
        //초기 최대 힙 만들기 
        //ex. makeheap(heap,3,7) => makeheap(heap,2,7) => makeheap(heap,1,7)
        //작은 삼각형, 작은 삼각형, 큰 삼각형 순으로 비교해서 최대 힙 만들기 
    }
    printheap(heap,1,n);
    //초기 최대 힙 만든 뒤 프린트
    for(i=n-1;i>0;i--){
        temp = heap[1];
        heap[1] = heap[i+1];
        heap[i+1] = temp;
        //루트와 맨 마지막 노드 교환
        //이제 마지막 노드는 fix
        makeheap(heap, 1, i);
        //다시 최대 힙 만드는 함수로 => 대신 n이 아니라 i이다
        //i--되기 때문에 마지막 노드는 fix가 됨
        printheap(heap,1,n);
        //정렬될 때마다 print 
    }
}
// 결과
// 15 20 8 30 18 48 35 
// 48 30 35 20 18 8 15 
// 35 30 15 20 18 8 48 
// 30 20 15 8 18 35 48 
// 20 18 15 8 30 35 48 
// 18 8 15 20 30 35 48 
// 15 8 18 20 30 35 48 
// 8 15 18 20 30 35 48 