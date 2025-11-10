#include <stdio.h>

int main() {
    int choice;

    printf("Enter 1 for Head or 0 for Tail: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("It is Head.\n");
    }
    else if (choice == 0) {
        printf("It is Tail.\n");
    }
    else {
        printf("Invalid input! Please enter 1 for Head or 0 for Tail.\n");
    }

    return 0;
}
