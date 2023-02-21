#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    float P1, P2, P3, A;
    scanf("%f", &P1);
    scanf("%f", &P2);
    scanf("%f", &P3);
    scanf("%f", &A);
    if (P1 <= A && P2 <= A && P3 <= A){
        printf("%.3f\n", 1/3.0);
        printf("%.3f\n", 1/3.0);
        printf("%.3f\n", 1/3.0);
    }
    else if (P1 <= A && P2 <= A && P3 > A){
        printf("%.3f\n", 1/2.0);
        printf("%.3f\n", 1/2.0);
        printf("%.3f\n", 0/2.0);
    }
    else if (P1 <= A && P2 > A && P3 <= A){
        printf("%.3f\n", 1/2.0);
        printf("%.3f\n", 0/2.0);
        printf("%.3f\n", 1/2.0);
    }
    else if (P1 > A && P2 <= A && P3 <= A){
        printf("%.3f\n", 0/2.0);
        printf("%.3f\n", 1/2.0);
        printf("%.3f\n", 1/2.0);
    }
    else if (P1 > A && P2 > A && P3 <= A){
    printf("%.3f\n", 0/3.0);
    printf("%.3f\n", 0/3.0);
    printf("%.3f\n", 1/1.0);
    }
    else if (P1 <= A && P2 > A && P3 > A){
    printf("%.3f\n", 1/1.0);
    printf("%.3f\n", 0/3.0);
    printf("%.3f\n", 0/3.0);
    }
    else if (P1 > A && P2 <= A && P3 > A){
    printf("%.3f\n", 0/3.0);
    printf("%.3f\n", 1/1.0);
    printf("%.3f\n", 0/3.0);
    }
    else if (P1 > A && P2 > A && P3 > A){
    printf("%.3f\n", 0/3.0);
    printf("%.3f\n", 0/3.0);
    printf("%.3f\n", 0/3.0);
    }
    return 0;
}