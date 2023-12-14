#include<stdio.h>
int main() {
    int x,sum=0,count=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++) {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    int avg=sum/x;
    for(int j=0;j<x;j++) {
        if(a[j]<=avg)
        count++;
    }
    printf("%d",count);
}