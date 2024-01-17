#include<stdio.h>
int main() {
    char a[100];
    int sum=0;
    fgets(a,100,stdin);
    for(int i=0;a[i]!=NULL;i++) {
        if('0'<=a[i] && a[i]<='9') {
            sum+=(a[i]-'0');
        }
    }
    printf("%d",sum);
}