#include <stdio.h>

int main() {
    int n, i;
    long int first = 0, second = 1, next, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            next = first;
        } else if (i == 2) {
            next = second;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%ld ", next);
        sum += next;
    }

    printf("\nSum of Fibonacci series up to %d terms = %ld\n", n, sum);

    return 0;
}
