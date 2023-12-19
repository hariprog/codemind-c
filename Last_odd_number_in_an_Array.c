#include<stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++) {
         scanf("%d",&a[i]);
    }
    for(int j=x-1;j>0;j--) {
      if(a[j]%2!=0) {
      printf("%d",a[j]);
      break;
      }
}
}