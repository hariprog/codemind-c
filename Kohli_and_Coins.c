#include<stdio.h>
int main() {
    int x,tot;
    scanf("%d",&x);
    if(x%5==0) {
        if(x%10>=1) {
            tot=(x/10)+((x%10)/5);
            printf("%d",tot);
        }
        else if(x%10==0) {
            tot=x/10;
            printf("%d",tot);
        }
        
    }
    else {
        printf("-1");
    }
}