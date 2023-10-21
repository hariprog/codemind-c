#include<stdio.h>
int main() {
    int n,a,b,i,res;
    scanf("%d %d %d",&n,&a,&b);
    for(i=a;i<=b;i++) {
    res=n*i;
    printf("%d x %d = %d
",n,i,res);
    }
}