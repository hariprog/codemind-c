#include<stdio.h>
int main() {
    float x,sum=0,num,i;
    scanf("%f",&x);
    for(i=1;i<=x;i++) {
        num=1/i;
        sum+=num;
    } printf("%.2f ",sum);
}
