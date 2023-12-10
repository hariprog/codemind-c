#include<stdio.h>
int main() {
    int i,j,n,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--) {
        for(j=0;j<n-i;j++) {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        printf("%c ",65+(n-i));
        printf("
");
    }
}