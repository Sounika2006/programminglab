#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter the Time Period (in years): ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100.0;

    printf("\n*** Calculation Result ***\n");
    printf("Principal: %.2f\n", principal);
    printf("Rate: %.2f%%\n", rate);
    printf("Time: %.2f years\n", time);
    printf("Simple Interest: %.2f\n", simple_interest);

    return 0;
}
