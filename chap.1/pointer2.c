#include <stdio.h>
void pointer(int i, int *q);

void main(){
    int i = 5, j ;
    int *p;
    p = &i ; // 1. p는 i의 주소를 갖는다 
    printf("%d\n", p); //-285042644
    j = (*p) + 1; // 2. p가 가리키는 주소의 값 (i의 값) 5 + 1 = 6
    // printf("%d\n", (++*p));
    // printf("%d\n", i);
    // printf("%d\n", j); //6
    pointer(*p, &j); // 3. 아래 pointer 함수로 이동, 6,7 출력
    // printf("%d\n", i); //5
    p = &j; // 6. p는 j의 주소를 갖는다 
    printf("%d, %d, %d\n" , i, j, *p); // 7. i는 5, j는 5에서 7, *p는 j의 주소를 참조하며 그 값을 출력하는 것이므로 7
}

void pointer(int i, int *q){
    //pointer(*p, &j)가 넘어옴
    i++; // 4. (*p)++ 이 되는 것이니 p가 가리키고 있는 i의 값이 5였는데 그게 6이 됨
    *q = (*q) + 1; // 5. *(&j) + 1 이므로 j의 주소가 갖고 있는 값 6 +1 = 7이 됨
    printf("%d, %d\n", i, *q); // *p와 *(&j) 출력 
}