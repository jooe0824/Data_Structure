//factorial

#include <stdio.h>

long factorial(int n){
    if (n==0)
        return 1;
    else 
        return n * factorial(n-1);
}

void main(){
    printf("factorial : 10! = %d", factorial(10));
}