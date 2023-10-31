#include<stdio.h>
int main() {
    int n,i,num,sum=0,pro=1;
    scanf("%d",&n);
    for(i=n;i>0;i/=10) {
    num=n%10;
    sum+=num;
    pro*=num;
    n/=10;
    }
    if(sum==pro) {
        printf("Spy Number");
    }
    else {
        printf("Not Spy Number");
    }
}