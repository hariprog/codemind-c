#include<stdio.h>
int main() {
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    int a[x][y];
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
        scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<y;i++) {
        for(int j=0;j<x;j++) {
            sum=sum+(a[j][i]);
        }
        printf("%d ",sum);
        sum=0;
    }
}
    