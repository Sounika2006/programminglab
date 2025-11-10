#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double P;
    double s;
    double A;

    printf("--- Equable Triangle Checker ---\n");
    printf("Enter the length of side A: ");
    if (scanf("%lf", &a) != 1 || a <= 0) {
        printf("Invalid input for side A. Exiting.\n");
        return 1;
    }
    
    printf("Enter the length of side B: ");
    if (scanf("%lf", &b) != 1 || b <= 0) {
        printf("Invalid input for side B. Exiting.\n");
        return 1;
    }
    
    printf("Enter the length of side C: ");
    if (scanf("%lf", &c) != 1 || c <= 0) {
        printf("Invalid input for side C. Exiting.\n");
        return 1;
    }

    printf("\n----------------------------------------\n");

    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Error: The entered lengths (%.2lf, %.2lf, %.2lf) **do not form a valid triangle**.\n", a, b, c);
        return 0;
    }

    P = a + b + c;

    s = P / 2.0;

    double area_squared = s * (s - a) * (s - b) * (s - c);

    A = sqrt(area_squared);

    
    printf("Calculations:\n");
    printf("  Perimeter (P) = %.4lf\n", P);
    printf("  Area (A) = %.4lf\n", A);

    const double EPSILON = 0.0001; 

    if (fabs(A - P) < EPSILON) {
        printf("\nResult: The triangle is an **EQUABLE TRIANGLE**!\n");
    } else {
        printf("\nResult: The triangle is **NOT** an Equable Triangle.\n");
    }
    
    printf("----------------------------------------\n");

    return 0;
}
