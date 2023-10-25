#include <stdio.h>

int main() {
    int num, largest = -1;
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;
        if (digit > largest) {
            largest = digit;
        }
        num /= 10;
    }

    if (largest >= 0) {
        printf("%d", largest);
    } 
    return 0;
}
