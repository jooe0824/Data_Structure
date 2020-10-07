#define ARRAY_SIZE 100
int num[ARRAY_SIZE], result;
int arraysum(int num[], int n);

void main(void){
    int i;
    for(i=0; i<ARRAY_SIZE; i++){
        num[i] = i;
    }
    result = arraySum(num, ARRAY_SIZE);
    printf("Sum : %i\n", result);
}

int arraySum(int num[], int n){
    int i, temp = 0;
    for(i=0; i<n; i++){
        temp+=num[i];
    }
    return temp;
}