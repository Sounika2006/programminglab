#include <stdio.h>

int f(int n) {
    if (n <= 1)
        return n;
    return f(n - 1) + f(n - 2);
}

void p(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", f(i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    p(n);
    return 0;
}