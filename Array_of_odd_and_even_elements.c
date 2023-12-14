#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++) {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<x;j++) {
        if(a[j]%2!=0)
        printf("%d ",a[j]);
    }
    for(int k=0;k<x;k++) {
        if(a[k]%2==0)
        printf("%d ",a[k]);
    }
}