#include<stdio.h>
int main() {
    int x,a,b,y;
    scanf("%d %d %d",&x,&a,&b);
    y=(a+2*b);
    if(y>x || x==y) {
        printf("Qualify");
    }
    else {
        printf("Not Qualify");
    }
}