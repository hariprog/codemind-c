#include<stdio.h>
#include<string.h>
int main() {
    char a[100];
    fgets(a,100,stdin);
    char max=a[0];
    for(int i=0;a[i]!=NULL;i++) {
        if(a[i]>max)
        max=a[i];
    }
    printf("%c",max);
}