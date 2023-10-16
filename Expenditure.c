#include<stdio.h>
int main() {
    int x,y,m;
    scanf("%d %d",&x,&y);
    m=(30*y);
    if(m<x || x==m) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}