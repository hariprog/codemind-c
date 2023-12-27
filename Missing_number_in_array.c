#include<stdio.h>
int main() {
    int x,y;
    scanf("%d",&x);
    for(int i=1;i<=x;i++) {
        int sum,tot;
        scanf("%d",&y);
        int a[y];
        tot=(y*(y+1))/2;
        for(int j=0;j<y-1;j++) {
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        printf("%d
",tot-sum);
        sum=0,tot=0;
    }
}