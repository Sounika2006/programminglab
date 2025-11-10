#include <stdio.h>
#include <math.h>
int main() {
    float a, b;

    printf("Enter the Hight: ");
    scanf("%f", &a);

    printf("Enter the Wigth: ");
    scanf("%f", &b);

    printf("The area of the Rectangle is: %f\n", a*b);

    printf("The area of the Perimeter is: %f\n", 2*(a+b));
    
    return 0;
}