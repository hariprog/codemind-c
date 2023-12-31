#include<stdio.h>
int main() {
    int a[3],b[3],alice=0,bob=0;
    for(int t=0;t<3;t++) {
        scanf("%d ",&a[t]);
    }
    for(int o=0;o<3;o++) {
        scanf("%d ",&b[o]);
    }
    
    for(int i=0;i<3;i++) {
        if(a[i]>b[i])
        alice++;
        else if(a[i]<b[i])
        bob++;
    }
    printf("%d %d",alice,bob);
}