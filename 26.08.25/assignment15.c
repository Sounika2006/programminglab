#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, D;

    printf("Enter the the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    D = sqrt(b*b-4*a*c);

    printf("The first root is: %f\n", (-b+(D))/(2*a));

    printf("The second root is: %f\n", (-b-(D))/(2*a));
    
    return 0;
}