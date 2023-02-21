// Days In Month 2

#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 9 || month == 10 || month == 12){
        printf("31");
    }
    else if(month == 4 || month == 6 || month == 8 || month == 11){
        printf("30");
    }
    else if (month == 2){
        printf("28");
    }
    else if (month > 12){
        printf("Wrong month value.");
    }
    return 0;
}