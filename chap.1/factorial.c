//팩토리얼 계산

#include <stdio.h>
void factorial (int n); 

void main() 
{
    factorial(20);
}

void factorial (int n){
    int i, j;
    int total;

    for (i=2; i<=n; i++){
        total=1;
        for (j=2; j<=i; j++){
            total = total * j;
        }
        printf("%d! = %d\n", i, total); 
    }
}