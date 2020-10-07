#include <stdio.h>
#define Q_SIZE 100
int front, rear;
int cqueue[Q_SIZE];
void addcq(int item);
int deletecq();
void print_queue();

void main()
{
    int temp;
    front = rear = 0; //queue와 다르다, 0부터 시작

    addcq(1); //1, 
    addcq(2); //1 2 
    addcq(3); //1 2 3
    addcq(4); //1 2 3 4
    temp = deletecq(); //temp = cqueue[1] = 1
    print_queue(); //2 3 4, front = 2
    temp = deletecq(); //temp = cqueue[2] = 2
    print_queue(); //3 4, front = 3
    temp = deletecq(); //temp = cqueue[3] = 3
    print_queue(); //4
    temp = deletecq();//temp = cqueue[4] = 4
    print_queue(); //
}

void print_queue(){
    int i;
    for (i = front + 1; i<= rear; i++){
        printf("%d ",cqueue[i]);
    }
    printf("\n");
}

void addcq(int item){
    rear = (rear + 1) % Q_SIZE;
    if (front == rear) { 
        printf("full Queue!");
        rear = rear - 1 ;
        return;
    }
    cqueue[rear] = item;
    print_queue();
}

int deletecq(){
    if(front == rear){
        printf("empty Queue!");
        return -999;
    }
    front = ( front + 1 ) % Q_SIZE;
    return cqueue[front];
}

//결과 
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 2 3 4 
// 3 4 
// 4 
