#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if(x%3==0) {
        printf("NORMAL");
    }
    else if(x%3==1 || x==1) {
        printf("HUGE");
    }
    else if(x%3==2 || x==2) {
        printf("SMALL");
    }
}