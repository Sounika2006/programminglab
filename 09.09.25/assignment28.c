#include <stdio.h>

int main() {
    float basic, hra, ta, da, gross;
    int choice;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic > 50000)
        choice = 1;
    else if (basic > 30000)
        choice = 2;
    else
        choice = 3;

    switch (choice) {
        case 1:
            hra = 0.20 * basic;
            break;
        case 2:
            hra = 0.15 * basic;
            break;
        default:
            hra = 0;
    }

    ta = 0.10 * basic;

    da = 0.05 * basic;

    gross = basic + hra + ta + da;

    printf("\nBasic Salary = %.2f", basic);
    printf("\nHRA = %.2f", hra);
    printf("\nTA = %.2f", ta);
    printf("\nDA = %.2f", da);
    printf("\nGross Salary = %.2f\n", gross);

    return 0;
}
