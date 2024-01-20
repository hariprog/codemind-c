#include <stdio.h>
int main() {
    int n, A, B;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &A, &B);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < A || arr[i] > B) {
            count+=arr[i];
        }
    }
    printf("%d",count);
}
