#include<stdio.h>
int main() {
    int i,j,n,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--) {
        for(j=0;j<n-i;j++) {
            printf(" ");
        }
        for(k=i;k>0;k--)
        printf("%d ",k);
        printf("
");
    }
}