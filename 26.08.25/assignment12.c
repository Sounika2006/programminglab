#include <stdio.h>
#include <math.h>
int main() {
    float p, r, t, a, c;
    int fr;

    printf("Enter Principal Amount: ");
    scanf("%f", &p);

    printf("Enter Annual Interest Rate (in percentage): ");
    scanf("%f", &r);

    printf("Enter Time Period (in years): ");
    scanf("%f", &t);

    printf("Enter Compounding Frequency (e.g., 1 for Annually, 2 for Semi-Annually, 4 for Quarterly, 12 for Monthly, 365 for Daily): ");
    scanf("%d", &fr);

    r = r / 100.0;
    a = p * pow((1 + (r / fr)), (fr * t));
    c = a - p;

    printf("\nFinal Amount: %.2lf\n", a);
    printf("Compound Interest: %.2lf\n", c);

    return 0;
}