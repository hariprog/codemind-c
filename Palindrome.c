#include <stdio.h>
int main() {
    int num, reversedNumber = 0, originalNumber, remainder;
    scanf("%d", &num);
    originalNumber = num; 
    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }
    if (originalNumber == reversedNumber) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
    return 0;
}