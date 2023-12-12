#include<math.h>
#include<stdio.h>
int main() {
    int x,s,count1=0,count2=0;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++) {
        scanf("%d",&a[i]);
    }
    
    for(int j=0;j<x;j++) {
       if(j%2==0)
       count1+=a[j];
       else
       count2+=a[j];
    }
   // printf("%d %d ",count1,count2);
    printf("%d",abs(count1-count2));
}