// Wish Me

#include <stdio.h>

int main(){
    int H, M;
    scanf("%d%d", &H, &M);
    if(4 <= H && H <= 11 && 0 <= M && M <= 59){
        printf("Good Morning");
    }
    if(12 <= H && H <= 15 && 0 <= M && M <= 59){
    printf("Good Afternoon");
    }
    if(16 <= H && H <= 20 && 0 <= M && M <= 59){
    printf("Good Evening");
    }
    if(22 <= H && H <= 23 && 0 <= M && M <= 59){
    printf("Good Night");
    }
    return 0;
}