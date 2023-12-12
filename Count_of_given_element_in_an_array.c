#include<stdio.h>
int main() {
    int x,s,count=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++) {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    for(int j=0;j<x;j++) {
       if(s==a[j])
       count++;
    }
    printf("%d",count);
}