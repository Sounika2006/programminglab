#include <stdio.h>

int main()
{
    int n;
    long long int factorial = 1; 
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error! Factorial is not defined for negative numbers.\n");
    } 
    else if (n == 0) {
        printf("The factorial of 0 is 1.\n");
    } 
    else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;;
        }
        
        printf("The factorial of %d is %lld.\n", n, factorial);
    }
    
    return 0;
}