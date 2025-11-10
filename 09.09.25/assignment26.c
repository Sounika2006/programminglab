#include <stdio.h>

int main() {
    char op;
    float a, b;
    float result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result = %.2f\n", result);
            } else {
                printf("Error: Cannot divide by zero!\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
