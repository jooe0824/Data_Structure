#define STACK_SIZE 100
int stack[STACK_SIZE];

int top = -1;
void push(int item);
int pop();
void print_stack();
void main()
{
    push(3); //3, top = 0
    push(4); //3 4, top = 1
    push(5); //3 4 5, top = 2
    pop(); //return stack[1], top = 1
    print_stack(); //3 4
    pop(); //return stack[0], top = 0
    print_stack(); //3
    pop(); //return stack[-1], top = -1
    print_stack(); //
    pop(); //return -999, empty!
    print_stack(); //
    printf("finish\n");
}

void print_stack(){ //stack print
    int i;
    for (i=0; i <=top; i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
}

void push(int item){ //push
    if ( top >= STACK_SIZE-1){ 
        printf ("stack full!");
        return; //상한 경계선 넘으면 full
    }
    stack[++top] = item; //next stack에 item push
    print_stack();
}

int pop(){
    if (top < 0){ //stack empty
        printf ("empty stack!");
        return -999; //오류 return
    }
    return stack[top--];
}

// 결과
// 3 
// 3 4 
// 3 4 5 
// 3 4 
// 3 

// empty stack!
// finish