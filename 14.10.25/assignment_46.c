#include <stdio.h>

int main() {
    int num, digit1, digit2, sum, product;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    if (num < 10 || num > 99) {
        printf("Not a two-digit number.\n");
        return 0;
    }

    digit1 = num / 10;
    digit2 = num % 10;

    sum = digit1 + digit2;
    product = digit1 * digit2;

    if (sum + product == num)
        printf("Special 2-digit number\n");
    else
        printf("Not a special 2-digit number\n");

    return 0;
}
