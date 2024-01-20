#include<stdio.h>
int main() {
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    int a[x][y],sum1=0;
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
            if(a[i][j] % 2 == 0) {
            sum+=a[i][j];
            }
            else
            sum1+=a[i][j];
        }
    }
    printf("%d %d",sum,sum1);
    
}