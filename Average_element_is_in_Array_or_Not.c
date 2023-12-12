#include<stdio.h>
int main() {
    int n,sum=0,t=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int b=0;b<n;b++) {
        sum+=a[b];
    }
 
    for(int c=0;c<n;c++) {
    if(sum/n==a[c])   {
    printf("True");
    break;
    }
    t++;
    }
    if(t==n) {
    printf("False");
    }
}