#include<string.h>
#include<stdio.h>
int main() {
    char a[100];
    int count=0;
    fgets(a,100,stdin);
    for(int i=0;a[i]!=NULL;i++){
        if(a[i]==' ')
        count++;
    }
    printf("%d",count+1);
}