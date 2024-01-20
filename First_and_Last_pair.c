#include<stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int a[x];
    for(int i = 0; i < x; i++) {
        scanf("%d", &a[i]);
    }
    int end = x - 1;
    for(int i = 0; i < x / 2; i++) {
        printf("%d %d ", a[i], a[end - i]);
    }
    if (x % 2 != 0) {
        printf("%d 0", a[x / 2]);
    }
}
