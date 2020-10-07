#include <stdio.h>
void print_heap(int heap[], int n);
void makeheap(int heap[], int root, int n);
void heapsort(int heap[], int root, int n);

void main(){
    int n= 5;
    int heap[] = { 0, 3, 2, 5, 4, 1 };
    print_heap(heap, n);
    heapsort(heap, 1, n);
}

void print_heap(int heap[], int n){
    int i;
    for (i=1; i<n+1; i++){
        printf("%d ", heap[i]);
    }
    printf("\n");
}

void makeheap(int heap[], int root, int n){
    int child,temp;
    temp = heap[root];
    child =root*2;
    while(child<=n){
        if((child < n) && (heap[child] < heap[child+1])){
            child ++;
        }
        if(temp > heap[child]){
            break;
        }
        else{
            heap[child/2] = heap[child]; //이거 한줄 때문에?!
            child = child*2;
        }
        
    }
    heap[child/2]=temp;
    // printf("print+");
    // print_heap( heap,n);
}

void heapsort(int heap[], int root, int n){
    int i, temp;
    for(i = n/2; i>0; i--){
        makeheap(heap, i, n);
    }
    print_heap(heap,n);
    for(i=n-1; i>0; i--){
        temp = heap[1];
        heap[1] = heap[i+1];
        heap[i+1] = temp;
        // printf("check");
        // print_heap(heap, n);

        makeheap(heap, 1, i);
        print_heap(heap, n);
    }

}