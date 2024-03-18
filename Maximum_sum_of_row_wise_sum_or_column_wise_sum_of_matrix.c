#include<stdio.h>
int main() {
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    int h[x][y];
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
            scanf("%d",&h[i][j]);
        }
    }
    int a[x],b[y];
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
        sum+=h[i][j];
        }
        a[i]=sum;
        sum=0;
    }
    for(int i=0;i<y;i++) {
        for(int j=0;j<x;j++) {
        sum+=h[j][i];
        }
        b[i]=sum;
        sum=0;
    }
    int max1 = a[0];
    for(int i=0;i<x;i++) {
        if(a[i] > max1) max1 = a[i];
    }
    int max2 = b[0];
    for(int i=0;i<y;i++) {
        if(b[i] > max2) max2 = b[i];
    }
    if(max1 > max2) printf("%d",max1);
    else printf("%d",max2);
}