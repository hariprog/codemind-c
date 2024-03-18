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
        sum+=a[0][i];
        sum+=a[x-1][i];
    }
    for(int i=1;i < x-1;i++) {
        sum+=a[i][0];
        sum+=a[i][y-1];
    }
    printf("%d",sum);
}
