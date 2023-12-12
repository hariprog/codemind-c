#include<stdio.h>
int main() {
    int x,sum=0,j;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<=x-1;i++) {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for( j=0;j<x;j++) {
       if(a[j]<min)
       min=a[j];
    }
    printf("%d",min);
}