#include<stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=0;j<n-i;j++) {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        printf("%d ",n-j+1);
        printf("
");
    }
}