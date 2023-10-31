#include<stdio.h>
int main() {
    int x,i,pro=1;
    scanf("%d",&x);
    for(i=x;i>=1;i--) {
       pro*=i ;
    }
    printf("%d",pro);
}