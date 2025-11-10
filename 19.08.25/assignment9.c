#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter the first number (A): ");
    scanf("%d", &a);

    printf("Enter the second number (B): ");
    scanf("%d", &b);

    printf("\n--- Before Swapping ---\n");
    printf("Value of A: %d\n", a);
    printf("Value of B: %d\n", b);
    temp = a; 
    a = b; 
    b = temp; 
    printf("\n--- After Swapping ---\n");
    printf("Value of A: %d\n", a);
    printf("Value of B: %d\n", b);

    return 0;
}