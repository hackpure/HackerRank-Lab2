// Trip Or Not 

#include <stdio.h>

int main(){
    int n,s,C,h,l,t;
    int a,c;
    scanf("%d%d%d%d%d%d",&n,&s,&C,&h,&l,&t);
   
    a=s*C*h;
   
    c=n*t;
    if (a<c){
        printf("Goa Jaayenge");
    }
    else{
        printf("Padhai Karenge");
    }
   
    return 0;
}
