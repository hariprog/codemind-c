#include<stdio.h>
int main() {
    int n,k,x,y,tot,mig;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    if((n-k)*x<(n-k)*y) {
        mig=(n-k)*x;
    }
    else {
        mig=(n-k)*y;
    }
    tot=(k*x)+mig;
    printf("%d",tot);
}