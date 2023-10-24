#include<stdio.h>
int main() {
    int n,x,i;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        x=n%i;
        if(x==0) {
            printf("%d ",i);
        }
    }
}