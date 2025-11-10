#include <stdio.h>
#include <math.h>

int main() {
    float n;
    float floor_value;
    float ceil_value;

    printf("Enter a Positive Number: ");
    scanf("%f",&n);

    floor_value = floor(n);

    ceil_value = ceil(n);

    printf("The Number Entered is: %f\n", n);
    printf("Floor value: %f\n", floor_value);
    printf("Ceiling value: %f\n", ceil_value);

    printf("Enter a Negative Number: ");
    scanf("%f",&n);

    floor_value = floor(n);

    ceil_value = ceil(n);

    printf("The Number Entered is: %f\n", n);
    printf("Floor value: %f\n", floor_value);
    printf("Ceiling value: %f\n", ceil_value);

    return 0;
}