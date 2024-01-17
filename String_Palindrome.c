#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    int b=0;
    fgets(s,100,stdin);
    int l=strlen(s);
    for(int i=0,j=l-2;i<=(l/2)-1,j>=l-((l/2));i++,j--){
            if(s[i]==s[j]) {
            b=0;
            }
            else {
            b=1;
            break;
            }
    }
    if(b)
    printf("Not Palindrome");
    else
    printf("Palindrome");
}