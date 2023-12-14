#include<stdio.h>
int main() {
    int x,count=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++) {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<x;j++){
        if(a[j]%2!=0)
        count++;
    }
    if(count>0)
    printf("False");
    else
    printf("True");
}