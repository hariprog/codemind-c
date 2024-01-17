#include<stdio.h>
int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int a[x][y];
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
        scanf("%d",&a[i][j]);
        }
    }
    int d,count=0;
    scanf("%d",&d);
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
            if(d==a[i][j]) {
                printf("1");
                break;
            }
            count++;
        }
    }
    if(count==x*y) {
        printf("0");
    }
}