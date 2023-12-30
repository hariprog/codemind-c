#include<stdio.h>
int count(int x) {
    int count=0;
    while(x>0) {
        count++;
        x/=10;
    }
    if(count%2==0)
    return 1;
    else
    return 0;
}

int main() {
    int x,num=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++) {
        scanf("%d",&a[i]);
        if(count(a[i]))
        num++;
    }
    printf("%d",num);
}