#include<stdio.h>
int main() {
    int x,sum=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<=x-1;i++) {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<=x-1;j++) {
        sum+=a[j];
    }
    printf("%d",sum);
}