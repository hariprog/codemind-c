#include<stdio.h>
int main() {
    int x;
     scanf("%d",&x);
     int a[x];
     for(int i=0;i<x;i++){
         scanf("%d",&a[i]);
     }
     int k=1;
       for(int i=0;i<x;i+=2){
           if(a[i]%2==1) {
               k=0;
           }
       }
    if(k) {
        printf("True");
    }
    else {
    printf("False");
    }
}