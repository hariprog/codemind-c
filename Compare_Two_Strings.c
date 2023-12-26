#include<stdio.h>
#include<string.h>
int main() {
    int count=0;
    char a[100],b[100];
    fgets(a,100,stdin);
    fgets(b,100,stdin);
    int sa=strlen(a);
    int sb=strlen(b);
    for(int i=0;a[i]!=NULL&& b[i]!=NULL;i++) {
        if(a[i]==b[i])
        count++;
    }
    if(count==sa && count==sb)
    printf("Strings are Equal");
    else 
    printf("Strings are not Equal");
}