#include <stdio.h>

int main() {
    int n1, n2, n3;

    printf("Enter the first number: ");
    scanf("%d", &n1);
    
    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("\nBefore swapping:\n");
    printf("First number = %d\n", n1);
    printf("Second number = %d\n", n2);

    n3 = n1;
    n1 = n2;
    n2 = n3;

    printf("\nAfter swapping:\n");
    printf("First number = %d\n", n1);
    printf("Second number = %d\n", n2);

    return 0;
}