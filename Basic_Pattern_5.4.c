#include<stdio.h>
int main() {
    int i,j,n,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--) {
        for(j=1;j<=i;j++) {
            printf("%d",j);
        }
    for(k=1;k<=n-i;k++){
    	printf("*");
	}
	printf("
");
}
}
