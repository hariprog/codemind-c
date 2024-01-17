#include<stdio.h>
#include<string.h>
int main() {
    char a[100],b;
    int count=0;
    fgets(a,100,stdin);
    scanf("%c",&b);
    for(int i=0;a[i]!=NULL;i++) {
        if(a[i]==b) {
            printf("True
");
            printf("%d",i);
            return 0;
        }
        else
        count++;
    }
    if(count==strlen(a))
    printf("False");
}