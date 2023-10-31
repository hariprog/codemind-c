#include<stdio.h>
int main() {
    int x,num,rev=0;
    scanf("%d",&x);
    while(x!=0) {
        num=x%10;
        rev=rev*10+num;
        x/=10;
    }
    printf("%d",rev);
}