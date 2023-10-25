#include<stdio.h>
int main() {
    int x,i,i_1=0,i_2=1,i_3,c;
    scanf("%d",&x);
    c=x-2;
    if (x >= 1) {
        printf("%d 1 ", i_1);
    }
    for(i=1;i<=c;i++) {
        i_3=i_1+i_2;
        i_1=i_2;
        i_2=i_3;
        printf("%d ",i_3);
    }
}