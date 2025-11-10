#include <stdio.h>

int main()
{
    int n, last_digit; 
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    last_digit = n % 10;
    if (last_digit < 0) {
        last_digit = -last_digit;
    }
    
    printf("The last digit of %d is %d\n", n, last_digit);
    
    return 0;
}