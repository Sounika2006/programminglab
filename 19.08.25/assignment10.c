#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first number (A): ");
    scanf("%d", &a);

    printf("Enter the second number (B): ");
    scanf("%d", &b);

    printf("\n--- Before Swapping ---\n");
    printf("Value of A: %d\n", a);
    printf("Value of B: %d\n", b);
    a = a + b;
    b = a - b; 
    a = a - b; 
    printf("\n--- After Swapping ---\n");
    printf("Value of A: %d\n", a);
    printf("Value of B: %d\n", b);

    return 0;
}