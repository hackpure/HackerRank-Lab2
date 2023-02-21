// C Program For Profit And Loss

#include <stdio.h>

int main(){
    float C, S;
    scanf("%f", &C);
    scanf("%f", &S);
    if (C > S){
        printf("Loss\n%.2f%%", (C - S)/ C * 100);
    }
    else{
        printf("Profit\n%.2f%%", (S - C) /C * 100 );
    }
    return 0;
}