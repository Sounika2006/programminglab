#include <stdio.h>

int g(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return g(b, a % b);
    }
}

int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    printf("GCD of %d and %d is %d\n", n1, n2, g(n1, n2));
    return 0;
}