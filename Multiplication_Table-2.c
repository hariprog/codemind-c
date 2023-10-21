#include<stdio.h>
int main() {
    int n,x,i,res;
    scanf("%d %d",&n,&x);
    for(i=1;i<=x;i++) {
    res=n*i;
    printf("%d x %d = %d
",n,i,res);
    }
}