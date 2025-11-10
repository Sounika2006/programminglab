#include <stdio.h>

int main() {
    float temp_f, temp_c;
    int choice;

    printf("--- Temperature Converter ---\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("\nEnter temperature in Fahrenheit (F): ");
            scanf("%f", &temp_f);

            temp_c = (temp_f - 32) * 5 / 9;

            printf("\n%.2f Fahrenheit is equal to %.2f Celsius.\n", temp_f, temp_c);
            break;

        case 2:
            printf("\nEnter temperature in Celsius (C): ");
            scanf("%f", &temp_c);
            temp_f = (temp_c * 9 / 5) + 32;

            printf("\n%.2f Celsius is equal to %.2f Fahrenheit.\n", temp_c, temp_f);
            break;

        default:
            printf("\nInvalid choice. Please enter 1 or 2.\n");
            break;
    }

    return 0;
}