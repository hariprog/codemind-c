#include <stdio.h>

int main() {
    int a, b, i, sum = 0, sum1 = 0, sum2 = 0,s;
    scanf("%d %d", &a, &b);
    s=a+1;
    for (i = s; i < b; i++) {
        sum = i;
        sum1 = (i * i); 
        sum2 = (i * i * i);
        printf("%d %d %d
",sum,sum1,sum2);
    }
    return 0;
}
