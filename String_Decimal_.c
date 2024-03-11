#include<stdio.h>
#include<string.h>

int main() {
    int h;
    scanf("%d",&h);
    getchar();
    for(int i=1; i<=h; i++) {
        char a[100001] = {0};
        fgets(a,100001,stdin);
        int x = strlen(a);
        int c=0;
        for(int i=0; a[i]; i++) {
            if(a[i] >= '0' && a[i] <= '9'){
                c++;
            }
        }
        if(c == x-1) 
            printf("True
");
        else 
            printf("False
");
    }
    return 0;
}
