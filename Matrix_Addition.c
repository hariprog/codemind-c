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
    int z,q;
    scanf("%d %d",&z,&q);
    int t[z][q];
    for(int a=0;a<z;a++) {
        for(int b=0;b<q;b++) {
            scanf("%d",&t[a][b]);
        }
    }
    for(int h=0;h<x;h++) {
        for(int r=0;r<y;r++) {
            printf("%d ",a[h][r]+t[h][r]);
        }
        printf("
");
    }
}