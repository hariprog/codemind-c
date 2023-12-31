#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++) {
        scanf("%d",&a[i]);
    }
    int k,count=0;
    scanf("%d",&k);
    for(int j=0;j<x;j++) {
        count=0;
        for(int p=0;p<x;p++) {
            if((a[j]+k)>=a[p])
            count++;
        }
        if(count==x)
        printf("True ");
        else
        printf("False ");
    }
}