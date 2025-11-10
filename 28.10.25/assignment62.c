#include <stdio.h>
#include <stdlib.h>

void check_buzz(long num);
void check_even_odd(long num);
void check_pos_neg(long num);

int main() {
    int choice;
    long number;

    while (1) {
        printf("\n============================================\n");
        printf("       Menu-Driven Number Checker\n");
        printf("============================================\n");
        printf("1. Check for Buzz Number\n");
        printf("2. Check for Even or Odd\n");
        printf("3. Check for Positive, Negative, or Zero\n");
        printf("4. Exit Program\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice (1-4): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("\nInvalid input! Please enter a number from 1 to 4.\n");

            while (getchar() != '\n');
            continue;
        }

        if (choice == 4) {
            printf("\nExiting the program. Goodbye!\n");
            return 0;
        }


        if (choice >= 1 && choice <= 3) {
            printf("Enter a whole number to check: ");
            if (scanf("%ld", &number) != 1) {
                printf("\nInvalid number entered! Returning to main menu.\n");
                while (getchar() != '\n');
                continue;
            }
        }
        
        switch (choice) {
            case 1:
                if ((number % 7 == 0) || (number % 10 == 7)) {
                    printf("-> Result: %ld is a **Buzz Number**.\n", number);
                } else {
                    printf("-> Result: %ld is NOT a Buzz Number.\n", number);
                }
                break;

            case 2:
                if (number % 2 == 0) {
                    printf("-> Result: %ld is an **Even** number.\n", number);
                } else {
                    printf("-> Result: %ld is an **Odd** number.\n", number);
                }
                break;

            case 3:
                if (number > 0) {
                    printf("-> Result: %ld is a **Positive** number.\n", number);
                } else if (number < 0) {
                    printf("-> Result: %ld is a **Negative** number.\n", number);
                } else {
                    printf("-> Result: The number is **Zero**.\n");
                }
                break;

            default:
                printf("-> Error: Invalid choice. Please select 1, 2, 3, or 4.\n");
                break;
        }
    }

    return 0;
}
