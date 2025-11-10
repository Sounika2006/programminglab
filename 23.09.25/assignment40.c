#include <stdio.h>

int main() {
    int choice;

    printf("Choose a data type to check its size:\n");
    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Double\n");
    printf("4. Character\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Size of Integer: %d bytes\n", sizeof(int));
    }
    else if (choice == 2) {
        printf("Size of Float: %d bytes\n", sizeof(float));
    }
    else if (choice == 3) {
        printf("Size of Double: %d bytes\n", sizeof(double));
    }
    else if (choice == 4) {
        printf("Size of Character: %d byte\n", sizeof(char));
    }
    else {
        printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}
