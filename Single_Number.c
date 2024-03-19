#include<stdio.h>
int main() {
    int x,count=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<x;i++) {
        for(int j=0;j<x;j++) {
            if(a[i]==a[j]) count++;
        }
        if(count==1) printf("%d ",a[i]);
        count=0;
    }
    
}