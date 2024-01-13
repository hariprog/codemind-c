#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    if(x>=3 && x<=100) {
    for(int i=1;i<=x;i++) {
        for(int j=1;j<=i;j++) {
            printf("*");
        }
        printf("
");
    }
    for(int i=x-1;i>0;i--) {
        for(int j=1;j<=i;j++) {
            printf("*");
        }
        printf("
");
    }
    }
    else
    printf("The pattern is not possible");

}