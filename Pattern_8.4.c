#include<stdio.h>
int main(){
    int i,j,x;
    scanf("%d",&x);
    for(i=1;i<=x;i++) {
        for(j=1;j<=x;j++) {
            if(j==i || j==x-i+1)
            printf("%c",64+i);
            else 
            printf(" ");
        }
        printf("
");
    }
}