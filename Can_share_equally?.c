#include<stdio.h>
int main() {
    int x,y,tot;
    scanf("%d %d",&x,&y);
    tot=x+(y*2);
       if(x%2!=0) {
           printf("NO");
       }
       else if(x==0 && y%2!=0) {
           printf("NO");
       }
       else {
           printf("YES");
       }
}