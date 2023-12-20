#include<stdio.h>
#include<string.h>
int main () {
    char a[100],count=0;
    fgets(a,100,stdin);
    int h=strlen(a);
    printf("%d",h-1);
}