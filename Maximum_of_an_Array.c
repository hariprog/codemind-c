#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<=x-1;i++) {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int j=0;j<x;j++) {
        if(a[j]>max)
        max=a[j];
    }
    printf("%d",max);
}