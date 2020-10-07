#define MAX_GAME 10
#define STRIKE 0
#define SPARE 1
#define NONE 2
#include <stdio.h>

typedef struct game{
    int first;
    int second;
    int result;
};

typedef struct score{
    int first;
    int second;
};


void main(){
   
    struct game g[MAX_GAME];
    struct score s[11] = {8,0,4,3,8,2,4,6,2,6,10,0,9,0,10,0,8,2,7,3,10,0};

    // printf("%d", s[0].first); / 8 출력
    int i,j,sum=0;
    for(i=0; i<MAX_GAME; i++){
        g[i].first = s[i].first;
        g[i].second = s[i].second;
        if(s[i].first == 10){
            sum += s[i].first + s[i].second + s[i+1].first + s[i+1].second;
            //스트라이크 시에 그 다음 2회 점수치꺼까지 추가해서 저장
            g[i].result = STRIKE;
            if(i != 9 && s[i+1].first == 10 && s[i+1].second == 0){
                sum += s[i+2].first;
                //만약 스트라이크가 연속으로 두번이 나왔다면?
                //
            } 
        }
        else if ((s[i].first + s[i].second == 10)){
            g[i].result = SPARE;
            sum += s[i].first + s[i].second + s[i+1].first;
            //스페어인 경우는 그 다음 1회 게임 점수까지 포함해서 저장
        }
        else{
            g[i].result = NONE;
            sum += s[i].first + s[i].second;
        }

        switch(g[i].result){
            //case에 따라서 switch문 이용하여 print
            case STRIKE: 
                        printf("%d %d: %d STRIKE\n", s[i].first, s[i].second,sum);
                        break;
            case SPARE: 
                        printf("%d %d: %d SPARE\n", s[i].first, s[i].second,sum);
                        break;
            case NONE: 
                        printf("%d %d: %d NONE\n", s[i].first, s[i].second,sum);
                        break;
        }
    }
    if(s[10].first != 0){
        printf("bonus : %d\n" , s[10].first);
    }
    printf("sum : %d\n",sum);
}