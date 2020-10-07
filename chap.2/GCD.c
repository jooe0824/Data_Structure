#include <stdio.h>
int gcd(int x, int y);

void main(){
    int x = 12, y =16;
    printf("gcd (%d %d) = %d\n", x, y, gcd(x,y));
}

int gcd(x,y){
    if (y==0) return x;
    else return gcd(y,x%y);
}