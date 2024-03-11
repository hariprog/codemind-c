#include<stdio.h>
#include<string.h>
int main() {
    char a[100];
    fgets(a,100,stdin);
    printf("Hello Technicalhub
");
    for(int i=0;a[i];i++) {
        printf("%c",a[i]);
    }
}