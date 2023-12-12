#include<stdio.h>
int main() {
    int x,sum=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<=x;i++) {
        scanf("%d",&a[i]);
    }
    for(int j=1;j<=x-1;j+=2) {
        
            sum+=a[j];
    }
    printf("%d",sum);
}
