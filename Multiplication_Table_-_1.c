#include<stdio.h>
int main() {
    int n,i,res;
    scanf("%d",&n);
    for(i=1;i<=12;i++) {
    res=n*i;
    printf("%d x %d = %d
",n,i,res);
    }
}