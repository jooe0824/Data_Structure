#define QUEUE_SIZE 100
int queue[QUEUE_SIZE];
int rear = -1;
int front = -1;
void print_queue();
void addq(int item);
int deleteq();

void main(){
    int temp; 
    addq(3); //3, rear = 0
    addq(5); //3 5, rear = 2
    addq(7);  //3 5 7, rear = 3
    temp = deleteq(); //return queue[0], front = 0, temp = 3
    print_queue(); //5, rear = 2
}

void print_queue(){
    int i;
    for ( i=front+1; i<= rear; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void addq(int item){
    if (rear == QUEUE_SIZE -1){
        printf( "full Queue !");
        return;
    }
    queue[++rear] = item;
    print_queue();
}

int deleteq(){
    if (front == rear){
        printf( " empty Queue!");
        return -999;
    }
    return queue[++front];
}

// //결과
// 3
// 3 5
// 3 5 7 
// 5 7