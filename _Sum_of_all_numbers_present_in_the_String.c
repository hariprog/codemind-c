#include<stdio.h>
int main() {
    char a[100];
    int sum=0;
    fgets(a,100,stdin);
    for(int i=0;a[i]!=NULL;i++) {
        if(a[i]>='1' && a[i]<='9') {
            int digit=a[i]-'0';
            sum+=digit;
        }
    }
    printf("%d",sum);
}