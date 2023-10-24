#include<stdio.h>
#include<math.h>
int main() {
    int n,sum1,s1,s2,tot;
    scanf("%d",&n);
    s1=(n*(n+1)*((2*n)+1))/6;
    sum1=(n*(n+1))/2;
    s2=sum1*sum1;
    tot=abs(s2-s1);
    printf("%d",tot);
}
