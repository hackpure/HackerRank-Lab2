// Find The Operator

#include <stdio.h>

int main(){
    int A, B, R, sum, sub, multi, div;
    scanf("%d%d%d", &A, &B, &R);
    sum = A + B;
    sub = A - B;
    multi = A * B;
    div = A / B;
    if (R == sum){
        printf("+");
    }
    else if (R == sub){
        printf("-");
    }
    else if (R == multi){
        printf("*");
    }
    else if (R == div){
        printf("/");
    }
    return 0;
}