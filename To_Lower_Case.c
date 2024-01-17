#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
    char a[100];
    fgets(a,100,stdin);
    for (int i = 0; a[i] != NULL; i++) {
        a[i] = tolower(a[i]);
    }
    printf("%s", a);
}