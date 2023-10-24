#include<stdio.h>
int main() {
    int x,y,i;
    scanf("%d %d",&x,&y);
    for(i=y;i>=x;i--) {
        printf("%d ",i);
    }
}